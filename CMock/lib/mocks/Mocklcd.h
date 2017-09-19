/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKLCD_H
#define _MOCKLCD_H

#include "../lcd.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mocklcd_Init(void);
void Mocklcd_Destroy(void);
void Mocklcd_Verify(void);




#define init_ports_Ignore() init_ports_CMockIgnore()
void init_ports_CMockIgnore(void);
#define init_ports_Expect() init_ports_CMockExpect(__LINE__)
void init_ports_CMockExpect(int cmock_line);
#define lcd_reset_Ignore() lcd_reset_CMockIgnore()
void lcd_reset_CMockIgnore(void);
#define lcd_reset_Expect() lcd_reset_CMockExpect(__LINE__)
void lcd_reset_CMockExpect(int cmock_line);
#define lcd_init_Ignore() lcd_init_CMockIgnore()
void lcd_init_CMockIgnore(void);
#define lcd_init_Expect() lcd_init_CMockExpect(__LINE__)
void lcd_init_CMockExpect(int cmock_line);
#define lcd_wr_command_Ignore() lcd_wr_command_CMockIgnore()
void lcd_wr_command_CMockIgnore(void);
#define lcd_wr_command_Expect(cmock_arg1) lcd_wr_command_CMockExpect(__LINE__, cmock_arg1)
void lcd_wr_command_CMockExpect(int cmock_line, unsigned char cmock_arg1);
#define lcd_wr_char_Ignore() lcd_wr_char_CMockIgnore()
void lcd_wr_char_CMockIgnore(void);
#define lcd_wr_char_Expect(cmock_arg1) lcd_wr_char_CMockExpect(__LINE__, cmock_arg1)
void lcd_wr_char_CMockExpect(int cmock_line, char cmock_arg1);
#define lcd_line1_Ignore() lcd_line1_CMockIgnore()
void lcd_line1_CMockIgnore(void);
#define lcd_line1_Expect() lcd_line1_CMockExpect(__LINE__)
void lcd_line1_CMockExpect(int cmock_line);
#define lcd_line2_Ignore() lcd_line2_CMockIgnore()
void lcd_line2_CMockIgnore(void);
#define lcd_line2_Expect() lcd_line2_CMockExpect(__LINE__)
void lcd_line2_CMockExpect(int cmock_line);
#define lcd_string_Ignore() lcd_string_CMockIgnore()
void lcd_string_CMockIgnore(void);
#define lcd_string_Expect(cmock_arg1) lcd_string_CMockExpect(__LINE__, cmock_arg1)
void lcd_string_CMockExpect(int cmock_line, char* cmock_arg1);
#define lcd_print_Ignore() lcd_print_CMockIgnore()
void lcd_print_CMockIgnore(void);
#define lcd_print_Expect(row, coloumn, value, digits) lcd_print_CMockExpect(__LINE__, row, coloumn, value, digits)
void lcd_print_CMockExpect(int cmock_line, char row, char coloumn, unsigned int value, int digits);
#define _delay_ms_Ignore() _delay_ms_CMockIgnore()
void _delay_ms_CMockIgnore(void);
#define _delay_ms_Expect(__ms) _delay_ms_CMockExpect(__LINE__, __ms)
void _delay_ms_CMockExpect(int cmock_line, double __ms);
#define lcd_cursor_Ignore() lcd_cursor_CMockIgnore()
void lcd_cursor_CMockIgnore(void);
#define lcd_cursor_Expect(row, column) lcd_cursor_CMockExpect(__LINE__, row, column)
void lcd_cursor_CMockExpect(int cmock_line, char row, char column);
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
#define ADC_Conversion_wl_sensor_IgnoreAndReturn(cmock_retval) ADC_Conversion_wl_sensor_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void ADC_Conversion_wl_sensor_CMockIgnoreAndReturn(int cmock_line, unsigned char cmock_to_return);
#define ADC_Conversion_wl_sensor_ExpectAndReturn(Ch, cmock_retval) ADC_Conversion_wl_sensor_CMockExpectAndReturn(__LINE__, Ch, cmock_retval)
void ADC_Conversion_wl_sensor_CMockExpectAndReturn(int cmock_line, unsigned char Ch, unsigned char cmock_to_return);

#endif
