cmake_minimum_required(VERSION 3.0)
project(CProject C)

set(CMAKE_C_STANDARD 99)

add_executable(CProject main.c
        chapter_01/01_hello.c)

add_executable(01_hello chapter_01/01_hello.c
        chapter_03/04_arrayExer.c
        chapter_03/05_arryCopy.c
        chapter_03/06_arry_rollback.c
        chapter_03/07_arry_char.c
        chapter_03/08_arry_more.c
        chapter_03/09_arry_more1.c
        chapter_03/10_arrymoreExer.c
        chapter_03/11_arrymoreExer2.c
        chapter_03/12_arryExer2.c
        chapter_04/01_PointerText.c
        chapter_04/02_PointerText.c
        chapter_04/03_PointerText.c
        chapter_04/04_PointerText.c
        chapter_04/05_PointerText.c
        chapter_04/06_PointerText.c
        chapter_04/07_DoubePlointer.c
        chapter_03/03_Arrytext.c
        chapter_04/10_PointerArrayExer.c
        chapter_04/11_PointerArrayExer1.c
        chapter_04/12_PointerArrayExer2.c
        chapter_04/13_PointerArrayExer3.c
        chapter_04/14_PointArrayExer4.c
        chapter_04/15_PointerArrayExer5.c
        chapter_04/16_PointArray.c
        chapter_04/17_CharArray.c
        chapter_04/18_stringArray.c
        chapter_04/19_PointerAndArry6.c
        chapter_04/20_PointerAndArry7.c
        chapter_05/01_FunctionDefine.c
        chapter_01/2_printf.c
        chapter_03/arrText.c
        chapter_02/double.c
        Text/day2.c
        Text/day1.c
        chapter_02/overflow.c
        chapter_02/8_ConstantText.c
        chapter_02/09_IOText.c
        chapter_02/10_BinaryText.c
        chapter_03/01_AriText.c
        chapter_05/11_ExitText.c
        chapter_05/12_FuncionProtoType.c
        chapter_05/13_FuncionProType1.c
        chapter_05/14_VarableTransfer.c
        chapter_05/15_ArgsTransfer.c
        chapter_05/16_ArgsTranTransfer1.c
        chapter_05/17_ArgsTranTransfer2.c
        chapter_05/18_ArgsTransfer3.c
        chapter_05/19_ArgsTransfer4.c
        chapter_05/20_ArgsTransfer5.c
        chapter_05/21_ArgsTransferExer.c
        chapter_05/23_Recursion.c
        chapter_05/24_VariableArgstest.c
        chapter_05/25_PointerFunctionTest.c
        chapter_05/25_PointerFunctionTest.c
        chapter_05/26_PointerFunctionTest.c
        chapter_05/27_FunctionPointer.c
        chapter_05/28_CallBackFunctionTest.c
        chapter_05/29_variableTest.c
        chapter_05/30_variableTest.c
        chapter_05/31_variableTest2.c
        chapter_05/32_VariableTest3.c
        chapter_05/33_constTest.c
)
add_executable(04_arrayExer chapter_03/04_arrayExer.c)
add_executable(05_arryCopy chapter_03/05_arryCopy.c)
add_executable(06_arry_rollback chapter_03/06_arry_rollback.c)
add_executable(07_arry_char chapter_03/07_arry_char.c)
add_executable(08_arry_more chapter_03/08_arry_more.c)
add_executable(10_arrymoreExer chapter_03/10_arrymoreExer.c)
add_executable(11_arrymoreExer2 chapter_03/11_arrymoreExer2.c)
add_executable(12_arryExer2 chapter_03/12_arryExer2.c)
add_executable(02_PointerText chapter_04/02_PointerText.c)
add_executable(03_PointerText chapter_04/03_PointerText.c)
add_executable(04_PointerText chapter_04/04_PointerText.c)
add_executable(05_PointerText chapter_04/05_PointerText.c)
add_executable(06_PointerText chapter_04/06_PointerText.c)
add_executable(03_Arrytext chapter_03/03_Arrytext.c)
add_executable(07_DoubePlointer chapter_04/07_DoubePlointer.c)
add_executable(10_PointerArrayExer chapter_04/10_PointerArrayExer.c)
add_executable(11_PointerArrayExer1 chapter_04/11_PointerArrayExer1.c)
add_executable(12_PointerArrayExer2 chapter_04/12_PointerArrayExer2.c)
add_executable(13_PointerArrayExer3 chapter_04/13_PointerArrayExer3.c)
add_executable(14_PointArrayExer4 chapter_04/14_PointArrayExer4.c)
add_executable(15_PointerArrayExer5 chapter_04/15_PointerArrayExer5.c)
add_executable(16_PointArray chapter_04/16_PointArray.c)
add_executable(CharArray chapter_04/17_CharArray.c)
add_executable(17_CharArray chapter_04/17_CharArray.c)
add_executable(18_stringArray chapter_04/18_stringArray.c)
add_executable(19_PointerAndArry6 chapter_04/19_PointerAndArry6.c)
add_executable(20_PointerAndArry7 chapter_04/20_PointerAndArry7.c)
add_executable(01_FunctionDefine chapter_05/01_FunctionDefine.c
        chapter_06/01_structTest.c
        chapter_06/02_structTest1.c
        chapter_06/03_structPractice.c)
add_executable(02_FunctionDefine chapter_05/02_FunctionDefine.c)
add_executable(03_FunctionDefine chapter_05/03_FunctionDefine.c)
add_executable(04_Return chapter_05/04_Return.c)
add_executable(05_FunctionDefine chapter_05/05_FunctionDefine.c)
add_executable(06_FunctionDefine chapter_05/06_FunctionDefine.c)
add_executable(07_FuncionDefine chapter_05/07_FuncionDefine.c)
add_executable(08_FuncionDecfine chapter_05/08_FuncionDecfine.c)
add_executable(09_FuncionDefine chapter_05/09_FuncionDefine.c)
add_executable(2_printf chapter_01/2_printf.c)
add_executable(arrText chapter_03/arrText.c)
add_executable(limits chapter_02/limits.c)
add_executable(FloatDouble chapter_02/FloatDouble.c
)
add_executable(10_MainArgs chapter_05/10_MainArgs.c)
add_executable(double chapter_02/double.c)
add_executable(day1 Text/day1.c)
add_executable(overflow chapter_02/overflow.c)
add_executable(09_IOText chapter_02/09_IOText.c)
add_executable(10_BinaryText chapter_02/10_BinaryText.c)
add_executable(11.ExitText chapter_05/11_ExitText.c)
add_executable(14_VarableTransfer chapter_05/14_VarableTransfer.c)
add_executable(15_ArgsTransfer chapter_05/15_ArgsTransfer.c)
add_executable(16_ArgsTranTransfer1 chapter_05/16_ArgsTranTransfer1.c)
add_executable(17_ArgsTranTransfer2 chapter_05/17_ArgsTranTransfer2.c)
add_executable(18_ArgsTransfer3 chapter_05/18_ArgsTransfer3.c)
add_executable(19_ArgsTransfer4 chapter_05/19_ArgsTransfer4.c)
add_executable(20_ArgsTransfer5 chapter_05/20_ArgsTransfer5.c)
add_executable(21_ArgsTransferExer chapter_05/21_ArgsTransferExer.c)
add_executable(23_Recursion chapter_05/23_Recursion.c)
add_executable(24_VariableArgstest chapter_05/24_VariableArgstest.c)
add_executable(25_PointerFunctionTest chapter_05/25_PointerFunctionTest.c)
add_executable(26_PointerFunctionTest chapter_05/26_PointerFunctionTest.c)
add_executable(27_FunctionPointer chapter_05/27_FunctionPointer.c)
add_executable(28_CallBackFunctionTest chapter_05/28_CallBackFunctionTest.c)
add_executable(30_variableTest chapter_05/30_variableTest.c)
add_executable(31_variableTest2 chapter_05/31_variableTest2.c)
add_executable(32_VariableTest3 chapter_05/32_VariableTest3.c)
add_executable(01_structTest chapter_06/01_structTest.c)
add_executable(02_structTest1 chapter_06/02_structTest1.c)
add_executable(03_structPractice chapter_06/03_structPractice.c)