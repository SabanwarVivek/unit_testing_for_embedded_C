/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKADC_FUNCTION_HEADER_H
#define _MOCKADC_FUNCTION_HEADER_H

#include "../ADC_Function_Header.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockADC_Function_Header_Init(void);
void MockADC_Function_Header_Destroy(void);
void MockADC_Function_Header_Verify(void);




#define ADC_conversion_IgnoreAndReturn(cmock_retval) ADC_conversion_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void ADC_conversion_CMockIgnoreAndReturn(int cmock_line, unsigned char cmock_to_return);
#define ADC_conversion_ExpectAndReturn(cmock_arg1, cmock_retval) ADC_conversion_CMockExpectAndReturn(__LINE__, cmock_arg1, cmock_retval)
void ADC_conversion_CMockExpectAndReturn(int cmock_line, unsigned char cmock_arg1, unsigned char cmock_to_return);
#define Sharp_GP2D12_estimation_IgnoreAndReturn(cmock_retval) Sharp_GP2D12_estimation_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void Sharp_GP2D12_estimation_CMockIgnoreAndReturn(int cmock_line, unsigned int cmock_to_return);
#define Sharp_GP2D12_estimation_ExpectAndReturn(adc_reading, cmock_retval) Sharp_GP2D12_estimation_CMockExpectAndReturn(__LINE__, adc_reading, cmock_retval)
void Sharp_GP2D12_estimation_CMockExpectAndReturn(int cmock_line, unsigned char adc_reading, unsigned int cmock_to_return);
#define print_sensor_Ignore() print_sensor_CMockIgnore()
void print_sensor_CMockIgnore(void);
#define print_sensor_Expect(row, coloumn, channel) print_sensor_CMockExpect(__LINE__, row, coloumn, channel)
void print_sensor_CMockExpect(int cmock_line, char row, char coloumn, unsigned char channel);
#define lcd_print_Ignore() lcd_print_CMockIgnore()
void lcd_print_CMockIgnore(void);
#define lcd_print_Expect(row, coloumn, value, digits) lcd_print_CMockExpect(__LINE__, row, coloumn, value, digits)
void lcd_print_CMockExpect(int cmock_line, char row, char coloumn, unsigned int value, int digits);

#endif