#ifndef ERROR_H
#define ERROR_H

typedef enum {
	ERROR_NOT, // Same as success >.<

	// Program error
	ERROR_INVALID_PARAM,
	ERROR_INVALID_PARAM_FORMAT,
	ERROR_FILE_PATH_TO_LARGE,
	ERROR_FAIL_OPEN_FILE,
	ERROR_FAIL_WRITE_FILE,
	ERROR_FILE_EMPTY,
	ERROR_ALLOC_MEMORY,

	// Emulator error
	ERROR_EMU_UNEXPECTED,

	// Assembler error
	ERROR_ASM_UNKNOW_OPCODE,
	ERROR_ASM_INVALID_FORMAT,
	ERROR_ASM_OPERAND_NOT_FOUND,
	ERROR_ASM_MEMORY_OVERFLOW,
	ERROR_ASM_DUPLICATED_LABEL,
	ERROR_ASM_INVALID_LABEL_IDENITIER,
	ERROR_ASM_ROM_OVERFLOW,

	// Disassembler error
	ERROR_DIS_UNKNOW_BYTE,

	ERROR_LEN
} Error;

#define LOG_ERROR(message)  fprintf(stderr, "ERROR: %s", (message))
#define LOG_ERROR_ARGS(fmt, ...)  fprintf(stderr, "ERROR: "); fprintf(stderr, (fmt), __VA_ARGS__)

#endif // ERROR_H
