			AREA text, CODE, READONLY
			EXPORT mem_copy
			EXPORT mem_copy_b
			ENTRY
mem_copy    MOV  r4, #0			; Копирование памяти по словам
repeat	    LDR  r3, [r0, r4]
			STR  r3, [r1, r4]
			ADD  r4, r4, #4
			SUBS r2, r2, #1
			BNE  repeat
			BX   lr
mem_copy_b  MOV   r4, #0			; Копирование памяти по байтам
repeat_b	LDRB  r3, [r0, r4]
			STRB  r3, [r1, r4]
			ADD   r4, r4, #1
			SUBS  r2, r2, #1
			BNE   repeat_b
			BX    lr
			END
				
				
				
				
				
				
				
				
				
				
				
;extern void mem_copy(uint32_t *a, uint32_t *b, uint8_t c);
;extern void mem_copy_b(uint8_t *a, uint8_t *b, uint8_t c);