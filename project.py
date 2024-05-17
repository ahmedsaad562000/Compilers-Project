from PyQt5 import QtWidgets,QtGui,QtCore
from PyQt5.QtWidgets import QApplication, QMainWindow, QLabel, QPushButton, QTextEdit, QVBoxLayout, QWidget,QTabWidget
import sys
import subprocess
from PyQt5.QtGui import QTextCursor



def read_file(filename):
    try:
        with open(filename, "r") as file:
            return file.read()
    except FileNotFoundError:
        return "File not found."

def compile_button_clicked(code_editor, quadraples_editor, semantic_error_editor, Symbol_Table_code_editor, Syntax_error_editor ,generate_button):
    generate_button.setText("Compiling...")
    generate_button.setStyleSheet(" background-color: #FF0000; color: white; border: none; padding: 15px 32px; text-align: center; text-decoration: none; display: inline-block; font-size: 20px; margin: 4px 2px; cursor: pointer; width: 2px;")
    QtWidgets.QApplication.processEvents()
    #generate_button.setEnabled(False)
    generate_file(code_editor, quadraples_editor, semantic_error_editor, Symbol_Table_code_editor , Syntax_error_editor)
    generate_button.setText("Compile Code")
    generate_button.setStyleSheet(" background-color: #4CAF50; color: white; border: none; padding: 15px 32px; text-align: center; text-decoration: none; display: inline-block; font-size: 20px; margin: 4px 2px; cursor: pointer; width: 2px;")
    QtWidgets.QApplication.processEvents()
    #generate_button.setEnabled(True)


def highlightLine(textEdit, lineNumber):
    cursor = textEdit.textCursor()
    cursor.movePosition(QTextCursor.Start)
    cursor.movePosition(QTextCursor.Down, QTextCursor.MoveAnchor, lineNumber)
    cursor.movePosition(QTextCursor.StartOfBlock)
    
    blockFormat = cursor.blockFormat()
    blockFormat.setBackground(QtGui.QColor(255, 0, 0))  # Set the background color
    cursor.setBlockFormat(blockFormat)
    
    textEdit.setTextCursor(cursor)

def generate_file(code,quadraples_editor, semantic_error_editor, Symbol_Table_code_editor , Syntax_error_editor):
    with open("test.txt", "w") as file:
        file.write(code.toPlainText())
    subprocess.run(["make", "-f", "Makefile"])
    quadraples_editor.setPlainText(read_file("output/quadruples.txt"))
    semantic_error_editor.setPlainText(read_file("output/semantic-error.txt"))
    Symbol_Table_code_editor.setPlainText(read_file("output/symbol-tables.txt"))
    Syntax_error_editor.setPlainText(read_file("output/syntax-error.txt"))
    
    doc = Syntax_error_editor.document()
    if doc:
        block = doc.findBlockByLineNumber(0)  # Line numbers are zero-based
        if block.isValid():
            lineText = block.text()
            # get last character in line
            if len(lineText) == 0:
                return
            words = lineText.split()
            # Check if there are words in the line
            if words:
                # Get the last word
                last_word = words[-1]
                
                last_word = int(last_word)-3
                
                
                highlightLine(code, last_word)
                
                      

    

def compile_code():
    subprocess.run(["make run", "-f", "Makefile"])

def window():
    app = QApplication(sys.argv)
    win = QMainWindow()
    win.setWindowTitle("Compiler")
    font = QtGui.QFont()
    font.setPointSize(12)
    app.setFont(font)
    
    
    central_widget = QWidget()
    win.setCentralWidget(central_widget)
    layout = QVBoxLayout(central_widget)


    label = QLabel("Enter your code below:")
    layout.addWidget(label)


    code_editor = QTextEdit()
    layout.addWidget(code_editor)
    
    
    tab_widget = QTabWidget()


    quadraples_editor = QTextEdit()
    semantic_error_editor = QTextEdit()
    Symbol_Table_code_editor = QTextEdit()
    Syntax_Error_editor = QTextEdit()
    
    quadraples_editor.setReadOnly(True)
    semantic_error_editor.setReadOnly(True)
    Symbol_Table_code_editor.setReadOnly(True)
    Syntax_Error_editor.setReadOnly(True)
    
    
    tab_widget.addTab(semantic_error_editor, "Semantic Errors")
    tab_widget.addTab(Symbol_Table_code_editor, "Symbol Table")
    tab_widget.addTab(quadraples_editor, "Quadraples")
    tab_widget.addTab(Syntax_Error_editor, "Syntax Errors")
    for index in range(tab_widget.count()):
        tab_widget.tabBar().setCursor(QtCore.Qt.PointingHandCursor)
    
    quadraples_editor.setPlainText("")
    semantic_error_editor.setPlainText("")
    Symbol_Table_code_editor.setPlainText("")    
    Syntax_Error_editor.setPlainText("")
    layout.addWidget(tab_widget)
    
    
    

    generate_button = QPushButton("Compile Code")
    generate_button.setCursor(QtCore.Qt.PointingHandCursor)
    generate_button.setStyleSheet(" background-color: #4CAF50; color: white; border: none; padding: 15px 32px; text-align: center; text-decoration: none; display: inline-block; font-size: 20px; margin: 4px 2px; cursor: pointer; width: 2px;")
    generate_button.setFixedWidth(200)
    layout.addWidget(generate_button)
    generate_button.clicked.connect(lambda: compile_button_clicked(code_editor, quadraples_editor, semantic_error_editor, Symbol_Table_code_editor, Syntax_Error_editor , generate_button))
    
    

    win.showMaximized()

    sys.exit(app.exec_())

window()
