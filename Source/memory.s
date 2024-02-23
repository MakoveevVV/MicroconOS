			AREA text, CODE, READONLY
			EXPORT mem_copy
			ENTRY
mem_copy    MOV r3, #0xAAAAAAAA
			BX  lr
			END