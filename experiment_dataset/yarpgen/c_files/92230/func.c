/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92230
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((var_9), (max((((/* implicit */unsigned long long int) 9223372036854775795LL)), (18446744073709551615ULL))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 7864320U)), (8192929724064853023ULL)));
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)88)) - (73)))))) ? (max((8192929724064853012ULL), (1ULL))) : (((/* implicit */unsigned long long int) ((582973483U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))))))), (min((arr_0 [i_1]), (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                arr_14 [i_0] = (+(((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (short)-13024)) ? (var_9) : (18446744073709551612ULL))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_8))));
                                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), ((~(var_12)))))) ? (max((((/* implicit */unsigned long long int) (short)-13013)), (3ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_13 [23LL] [i_5] [i_1 + 2] [i_2 - 2] [i_1 + 2] [i_0 + 2]))))) ? (min((18446744073709551612ULL), (8192929724064853030ULL))) : ((~(8192929724064853030ULL)))));
                                var_18 = max((max((((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_0))), (min((-2863648518117934589LL), (((/* implicit */long long int) (short)-32026)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) max(((unsigned short)60730), (((/* implicit */unsigned short) var_2))))), (min((((/* implicit */unsigned int) (signed char)-124)), (2097151U)))))));
                            }
                            for (signed char i_6 = 1; i_6 < 22; i_6 += 1) 
                            {
                                arr_21 [i_0] [(signed char)6] [i_0] [i_2] [i_0] |= min((arr_4 [i_3]), (((/* implicit */long long int) (unsigned short)65527)));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+((~(((/* implicit */int) (signed char)85)))))))));
                            }
                            var_20 = min((var_5), (((/* implicit */int) arr_3 [i_1] [i_1])));
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4064))) : (max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) & (((/* implicit */int) (signed char)-124)))))))));
                            var_22 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */_Bool) arr_12 [i_2] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4069))) : (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_6))))))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */signed char) min((10253814349644698585ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_10))))) % (((((/* implicit */_Bool) (unsigned char)217)) ? (10253814349644698598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_9);
    var_25 = ((/* implicit */long long int) max((var_25), (var_0)));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_30 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (10253814349644698591ULL)))) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)31)) >> (((((/* implicit */int) var_4)) - (7169))))), (((/* implicit */int) ((unsigned short) (signed char)22)))))) : (((((/* implicit */_Bool) (short)-4072)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_2)))))) : (min((2863648518117934596LL), (((/* implicit */long long int) (_Bool)0))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-32752), (((/* implicit */short) (signed char)75))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34952))) : (10517160188652735130ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32751))) : (min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_5)), (522240U)))))));
                        arr_33 [i_10] [i_10] [i_10 - 3] [i_10] |= ((/* implicit */unsigned short) (unsigned char)170);
                    }
                    for (unsigned int i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        arr_37 [i_8] |= ((/* implicit */unsigned char) arr_13 [i_11] [(_Bool)1] [16U] [i_8] [i_8] [i_7]);
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1561375019U)) ? (min((min((((/* implicit */unsigned long long int) (short)16376)), (4611686018427387904ULL))), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)120)))))));
                        arr_38 [i_7] [i_7] [i_7] [(signed char)6] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned short) 7486907152462983566ULL));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((short) 3484213742U)))))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (_Bool)1))))), ((unsigned char)170))))));
                        arr_43 [i_7] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) (signed char)-124)), ((short)-2)))) >= (((/* implicit */int) arr_20 [i_12] [i_8] [i_12])))) ? (max((min((1278977734060232051LL), (((/* implicit */long long int) -1705907712)))), (((/* implicit */long long int) arr_34 [i_12] [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12] [i_12])))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-2)))))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 21; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 3; i_14 < 20; i_14 += 4) 
                        {
                            arr_48 [i_14] [i_14] [i_14] [i_8] [i_14] = ((/* implicit */long long int) min(((unsigned short)60753), (((/* implicit */unsigned short) (signed char)-54))));
                            var_30 ^= 10253814349644698601ULL;
                            arr_49 [i_7 + 3] [i_8] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)103)) : (1705907712)))));
                        }
                        arr_50 [i_7] [i_13 + 1] = ((/* implicit */signed char) var_4);
                        var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_5)), (var_8))), (((/* implicit */long long int) (signed char)-45))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)86)), ((unsigned short)7584))))))) : (((/* implicit */int) (short)12913))));
                    }
                    var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) (unsigned char)101)) - (74)))))))) ? (max(((~(((/* implicit */int) (short)4071)))), (((/* implicit */int) (unsigned char)152)))) : ((+(((/* implicit */int) (short)12916))))));
                }
            } 
        } 
    } 
}
