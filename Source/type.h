#ifndef __TYPE_H
#define __TYPE_H
/*
 * Общие типы данных
 */

/*
 * Битовое поле для доступа к битам 32 слова
 */
typedef struct
{
		unsigned int bit_0 : 1;
		unsigned int bit_1 : 1;
		unsigned int bit_2 : 1;
		unsigned int bit_3 : 1;
		unsigned int bit_4 : 1;
		unsigned int bit_5 : 1;
		unsigned int bit_6 : 1;
		unsigned int bit_7 : 1;
		unsigned int bit_8 : 1;
		unsigned int bit_9 : 1;
		unsigned int bit_10 : 1;
		unsigned int bit_11 : 1;
		unsigned int bit_12 : 1;
		unsigned int bit_13 : 1;
		unsigned int bit_14 : 1;
		unsigned int bit_15 : 1;
		unsigned int bit_16 : 1;
		unsigned int bit_17 : 1;
		unsigned int bit_18 : 1;
		unsigned int bit_19 : 1;
		unsigned int bit_20 : 1;
		unsigned int bit_21 : 1;
		unsigned int bit_22 : 1;
		unsigned int bit_23 : 1;
		unsigned int bit_24 : 1;
		unsigned int bit_25 : 1;
		unsigned int bit_26 : 1;
		unsigned int bit_27 : 1;
		unsigned int bit_28 : 1;
		unsigned int bit_29 : 1;
		unsigned int bit_30 : 1;
		unsigned int bit_31 : 1;
}word_bit_t;	

/*
 * Битовое поле для доступа к битам 16 слова
 */
typedef struct
{
		unsigned int bit_0 : 1;
		unsigned int bit_1 : 1;
		unsigned int bit_2 : 1;
		unsigned int bit_3 : 1;
		unsigned int bit_4 : 1;
		unsigned int bit_5 : 1;
		unsigned int bit_6 : 1;
		unsigned int bit_7 : 1;
		unsigned int bit_8 : 1;
		unsigned int bit_9 : 1;
		unsigned int bit_10 : 1;
		unsigned int bit_11 : 1;
		unsigned int bit_12 : 1;
		unsigned int bit_13 : 1;
		unsigned int bit_14 : 1;
		unsigned int bit_15 : 1;
}half_word_bit_t;	

/*
 * Объединение для доступа к каждому биту регистра периферии
 */
typedef union 
{
		volatile unsigned int full_register;
		volatile word_bit_t bite_register;
}register_typedef;




#endif /*__TYPE_H */

