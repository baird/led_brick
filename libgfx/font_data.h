#ifndef FONT_DATA_h_1a4b0898_77a7_11e3_9c0c_0025221647f3
#define FONT_DATA_h_1a4b0898_77a7_11e3_9c0c_0025221647f3

typedef struct {
	uint16_t pos[257];
	uint8_t data[561];
} font_t;

#define FONT_COL_BYTES 1
static const font_t font = {
	.pos = {
		0,6,9,14,19,24,29,34,36,42,46,52,57,60,65,70,75,79,83,86,
		89,94,99,104,107,112,117,122,127,132,137,142,147,150,151,
		154,159,163,169,173,174,176,178,183,186,188,191,192,195,
		198,201,204,207,211,214,218,221,225,229,230,232,235,238,
		241,244,249,252,255,258,261,264,267,271,274,277,281,285,
		288,293,297,301,304,308,311,314,317,321,326,331,336,341,
		346,348,351,353,356,359,361,365,368,371,374,377,380,383,
		386,387,390,393,394,399,402,405,408,411,414,416,419,423,
		426,431,434,437,441,444,445,448,452,457,457,457,457,457,
		457,457,457,457,457,457,457,457,457,457,457,457,457,457,
		457,457,457,457,457,457,457,457,457,457,457,457,457,457,
		457,458,462,467,471,476,476,480,480,486,490,496,501,503,
		509,512,515,518,520,523,523,528,528,529,529,532,535,541,
		545,545,545,548,548,548,548,548,548,548,553,553,553,553,
		553,553,553,553,553,553,553,553,553,553,553,553,553,556,
		556,556,556,556,556,556,556,556,556,556,556,556,556,556,
		556,556,556,556,556,556,556,556,556,556,556,556,556,556,
		556,556,556,561,561,561,561,561,561,561,561,561,
	},
	.data = {
		"\36?%1?\36\n\30\n\0365'5\36\6\17\36\17\6\4\16\37\16\4\4\24"
		"\33\24\4\f\26\37\26\f\f\f?\?33?\?\f\22\22\f?3--3?\20(-\23\a"
		"\269\0260?\5\5\a0?\3\33\37\25\16\33\16\25\37\16\4\4\4\4\16"
		"\37\22!\22/\0/\2\5?\1?\6---\3088888*1*\4\2\37\2\4\4\b\37\b"
		"\4\4\4\25\16\4\4\16\25\4\4\16\b\b\b\b\4\n\0\n\4\b\f\16\f\b"
		"\2\6\16\6\2\0\0\0/\3\0\3\n\37\n\37\n\0206\33\2'\25\v4*9\32-"
		"\22(\3\16\21\21\16\25\16\37\16\25\4\16\4 \20\4\4\4\0200\f\3"
		"\16\21\16\22\37\20\31\25\22\21\25\n\a\4\37\4\27\25\t\16\25"
		"\25\b\1\31\a\n\25\25\n\2\25\25\16\22 \22\4\n\21\n\n\n\21\n"
		"\4\2)\6\36!%+\16\36\5\36\37\25\n\16\21\21\37\21\16\37\25\21"
		"\37\5\1\16\21\25\f\37\4\37\21\37\21\t\21\17\1\37\4\n\21\37"
		"\20\20\37\2\4\2\37\37\2\4\37\16\21\21\16\37\5\2\16\0211.\37"
		"\5\32\22\25\t\1\37\1\17\20\20\17\3\f\20\f\3\17\20\b\20\17"
		"\21\n\4\n\21\3\4\30\4\3\21\31\25\23\21\37\21\3\f0\21\37\2\1"
		"\2   \1\2\b\24\34\20\37\24\b\b\24\24\b\24\37\f\26\26\4\36\5"
		"\4*\36\37\4\30\32\20 \32\37\4\32\37\34\4\b\4\30\34\4\30\b"
		"\24\b<\24\b\b\24<\34\4\4\24\n\4\16\24\f\20\20\f\f\20\f\f\20"
		"\b\20\f\24\b\24,\20\f\22\32\26\22\4\16\21?\21\16\4\4\2\4\2"
		"\34\22\21\22\34=\f\22?\22$>%!\2\f\36-!\31\32<\32\31&+5\31"
		"\36)55!\36\22\25\27\24\4\n\21\4\n\21\1\1\1\1\a\4\4\36!?+5"
		"\36\1\1\1\2\5\2$.$\r\v\t\r\17>\20\20\16\20\4\t\17\b\22\25"
		"\22\21\n\4\21\n\4\16\21\37\25\30%\20\30\16\t\37\25\n\4\n\4"
		"\4\25\4\4"
	},
};

#endif /* FONT_DATA_h_1a4b0898_77a7_11e3_9c0c_0025221647f3 */
