/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79194
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)7))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14438))) <= (10710397380782979548ULL))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_11 = var_1;
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)-30564);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) (short)-30564))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 0U)))) : (arr_5 [i_1] [i_1])));
        var_12 ^= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 3581583837U)), (arr_1 [i_1]))) > (((/* implicit */unsigned long long int) (+(1120841541U))))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((arr_7 [i_2] [i_2]) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((unsigned char) (signed char)-117))))) : (((/* implicit */int) arr_9 [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((min((((arr_7 [i_2] [i_2]) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (short)30545)))), (((var_4) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) var_0)))))) << (((/* implicit */int) var_2))));
        var_13 += ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (short)14438)), (var_6))), (((/* implicit */long long int) ((short) -214653170)))));
        var_14 = ((/* implicit */long long int) max((var_14), (((long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10710397380782979548ULL)) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_2] [i_3]))));
            var_16 = ((/* implicit */long long int) var_8);
            var_17 |= ((/* implicit */_Bool) -4075721397654849128LL);
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) arr_7 [(unsigned char)15] [i_3]);
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((arr_8 [(short)18]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22181))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))))))));
        }
    }
    for (int i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        var_19 &= ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) arr_7 [i_4] [i_4 + 3])))));
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1542334419)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_4 - 1]))))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) -9223372036854775777LL)) : (11981737028785124017ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14446)) ? (var_6) : (((/* implicit */long long int) var_8))))) >= (((var_1) >> (((arr_0 [i_4]) - (1547149086U)))))))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((signed char) arr_8 [i_4 - 2])))));
                    arr_27 [i_7] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */short) var_0);
                    var_21 = ((/* implicit */unsigned int) 1008806316530991104ULL);
                }
                for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    arr_30 [(signed char)14] [i_5] = ((/* implicit */long long int) var_4);
                    arr_31 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_6 - 1] [i_8]);
                    var_22 *= ((/* implicit */short) arr_26 [i_4] [i_5] [i_6] [i_8] [i_6 - 1] [i_4]);
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    arr_34 [i_4] [i_5] [i_5] [i_9] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_6] [i_4]))));
                    var_23 = (~(var_1));
                    arr_35 [(_Bool)1] [(_Bool)1] [i_5] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_6] [i_4]) ? (((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_9])) : (((/* implicit */int) arr_19 [i_5]))))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_29 [i_4 - 3] [i_5] [i_6] [i_9]))));
                }
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) arr_28 [i_4] [i_5] [i_6] [i_10] [i_5]);
                    arr_38 [i_4 + 1] [i_5] [i_5] [i_10] [(unsigned char)0] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
                var_25 = ((/* implicit */unsigned long long int) arr_13 [i_4] [i_5]);
                var_26 = ((/* implicit */int) var_2);
                arr_39 [i_5] = ((((/* implicit */_Bool) arr_20 [i_4 - 3] [i_6 + 1] [i_4 - 3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))));
            }
            arr_40 [i_4] [i_5] [i_4] = max((((/* implicit */short) ((_Bool) var_6))), (var_3));
            var_27 = ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2])))) > ((-(((/* implicit */int) (signed char)1)))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                arr_46 [i_12] [i_11] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4 + 2] [i_12 - 1] [i_11])) ? (((/* implicit */long long int) arr_0 [i_4 + 1])) : ((+(var_6)))));
                arr_47 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4]))))));
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (signed char)-120))));
                var_29 += ((/* implicit */unsigned short) ((unsigned int) 4480722829459646270LL));
            }
            for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_30 = ((/* implicit */_Bool) (((_Bool)1) ? (-2065707655) : (((/* implicit */int) (unsigned char)66))));
                arr_51 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_13])) ? (arr_26 [i_13] [i_13] [i_11] [i_4 - 1] [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((short) arr_15 [i_4 + 3])))));
            }
            var_32 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (_Bool)0)))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            for (short i_15 = 2; i_15 < 14; i_15 += 2) 
            {
                {
                    var_33 = max((((short) (signed char)-108)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_56 [i_14 + 1]))))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)59452)))), (((/* implicit */int) arr_17 [i_4 - 1]))))) ? (((/* implicit */int) arr_16 [14U])) : (((/* implicit */int) arr_19 [i_15]))));
                        arr_59 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-106))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_33 [i_4 - 2] [i_4 + 3] [i_16])))) || (((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) >> (((((/* implicit */int) ((short) (signed char)-24))) + (38))))))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_50 [i_4 + 3])))) ? (((/* implicit */int) ((short) 3024165853U))) : (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (short)9210)) : (((/* implicit */int) (signed char)108))))));
                    }
                    for (unsigned short i_17 = 2; i_17 < 16; i_17 += 2) 
                    {
                        arr_63 [i_4] [(unsigned short)9] [(unsigned short)9] [i_4] = ((/* implicit */_Bool) ((((var_1) >> (((-1LL) + (44LL))))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (arr_50 [i_4])))))));
                        var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9211)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_37 = min(((unsigned short)17), (((/* implicit */unsigned short) (_Bool)0)));
                        /* LoopSeq 2 */
                        for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15))) : (((((/* implicit */_Bool) 4294967292U)) ? (470357590U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_61 [i_15] [i_14])) ? (arr_50 [i_4 - 1]) : (((/* implicit */long long int) arr_60 [i_4] [i_14] [i_15] [i_15] [i_19]))))) : (max((min((((/* implicit */unsigned long long int) arr_43 [i_4] [i_14 + 1] [i_18])), (var_1))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)102))))))))))));
                            arr_69 [(signed char)7] [(signed char)7] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((int) 4294967281U));
                            var_39 = ((/* implicit */unsigned int) (+(arr_57 [i_18] [i_4 + 3])));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                        {
                            arr_73 [i_20] [i_18] [i_15 + 1] [i_14] [i_20] = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4 - 3] [i_4 - 3] [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_4] [i_4] [i_4])))))))));
                            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_18])) - (((/* implicit */int) (_Bool)1)))))));
                            arr_74 [i_20] [i_20] [i_15 + 1] [i_20] [i_4] = ((/* implicit */unsigned char) arr_19 [i_20]);
                        }
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) <= (((long long int) (_Bool)1))));
                        arr_75 [i_15] [i_15] &= ((min((((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_18] [i_15] [i_4]))))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (_Bool)0))))))) * (((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_4 + 2])) ? (arr_0 [i_4]) : (var_8)))));
                    }
                    var_42 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))))), (((/* implicit */unsigned long long int) 1073217536U))));
                }
            } 
        } 
    }
}
