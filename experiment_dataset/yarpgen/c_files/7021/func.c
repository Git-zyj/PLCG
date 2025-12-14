/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7021
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_8 [(signed char)1] = ((/* implicit */unsigned short) 189498461U);
                var_10 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_3 [i_1]) : (8388607ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))), (((/* implicit */unsigned long long int) var_5))));
                arr_9 [i_1] [i_1] = var_7;
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) arr_13 [i_0 - 1] [i_2 - 1] [(unsigned short)10]);
                        var_11 = ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_3] [1U])) <= (((/* implicit */int) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))) : (((long long int) var_9))));
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_18 [i_4] [i_2 + 2] [i_1] [(signed char)0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-117))));
                        arr_19 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) (signed char)-117);
                        arr_20 [i_0] [i_1] = ((/* implicit */long long int) (((+(189498461U))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))), (var_2)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_25 [i_5] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                        var_12 *= ((/* implicit */short) (+(max((((/* implicit */int) (signed char)88)), (((((/* implicit */int) (signed char)122)) / (((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 2] [i_5]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (+(arr_4 [i_0 + 1] [2LL] [i_2 - 2])));
                        var_14 += ((/* implicit */short) (unsigned short)65535);
                    }
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) | (((/* implicit */int) var_7))));
                        arr_39 [(short)0] [(unsigned short)1] [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_37 [i_9] [i_10 - 3] [i_10 - 3] [i_10 - 2])), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) + (var_6)))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_42 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */long long int) var_6);
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            arr_47 [5] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */unsigned int) ((max((arr_36 [(unsigned short)2] [i_8] [(unsigned short)2] [i_8] [i_8] [(unsigned short)2]), (((/* implicit */long long int) (unsigned short)20552)))) & (((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_12] [13LL] [i_9] [i_8] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) : (((long long int) arr_21 [i_7] [i_11] [3] [i_7]))))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2))))))) ? ((+(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) arr_22 [i_7] [14U] [i_9] [i_7] [14U]))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                        {
                            arr_51 [i_8] = ((/* implicit */short) min(((~(((/* implicit */int) arr_46 [(_Bool)1] [(signed char)5] [i_9] [3U] [(signed char)9] [i_7])))), (((/* implicit */int) (signed char)106))));
                            arr_52 [i_7] [i_7] [i_8] [i_9] [i_11] [i_13] [i_13] = ((/* implicit */signed char) var_8);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_55 [i_14] [i_11] [i_11] [i_9] [i_8] [i_8] [(unsigned char)8] = ((unsigned short) ((var_3) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-8762029383396820637LL)))));
                            arr_56 [i_8] [i_8] [i_11] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_50 [i_14] [i_11] [i_9] [i_8] [i_8] [i_7]))))));
                            var_18 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_48 [i_7]))))));
                            arr_57 [i_7] [i_11] [i_9] [(short)6] [i_7] = ((/* implicit */unsigned char) ((21LL) + ((+(var_4)))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((+(min((((/* implicit */unsigned long long int) var_9)), (arr_3 [1ULL]))))) : (((/* implicit */unsigned long long int) max((arr_41 [i_8] [i_15]), (((/* implicit */long long int) arr_0 [i_9] [i_8])))))));
                            var_20 = ((/* implicit */unsigned int) var_0);
                        }
                    }
                    for (signed char i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        var_21 = ((/* implicit */short) var_2);
                        var_22 ^= ((/* implicit */unsigned long long int) (signed char)-125);
                        var_23 = (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2963610473U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65513))))))));
                        var_24 = ((/* implicit */short) min((((/* implicit */long long int) var_7)), (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_16] [i_8]))) <= (4294967295U))))));
                    }
                    for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        arr_65 [i_17] [i_17] [i_9] [(unsigned short)10] [i_7] = ((/* implicit */unsigned short) arr_26 [i_17] [i_9] [i_8] [i_7]);
                        var_25 = ((/* implicit */signed char) ((unsigned int) (unsigned short)27));
                        arr_66 [i_7] [i_8] [i_8] [i_7] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -6382374664756967160LL)) : (arr_53 [i_7] [i_8] [(unsigned short)9] [i_7]))) + (((/* implicit */unsigned long long int) var_4)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 4) 
                        {
                            arr_70 [i_18] [i_18] [i_18 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [(short)6] [i_7])) ? (min((((/* implicit */long long int) arr_40 [i_7] [i_8] [i_9] [(_Bool)1])), (0LL))) : (((((/* implicit */_Bool) arr_63 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (short)6624))) : (var_3))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8)))));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)22906))) != (max((((/* implicit */long long int) var_9)), (var_3)))));
                            arr_71 [i_18] = (+(((((/* implicit */_Bool) (signed char)97)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_18] [(_Bool)1] [i_18] [i_18] [i_18 + 1] [5LL]))))));
                        }
                    }
                    var_27 += ((/* implicit */unsigned short) arr_40 [i_7] [i_8] [i_8] [i_9]);
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            {
                                arr_78 [5ULL] [i_8] [i_8] [(_Bool)1] [i_8] = ((/* implicit */signed char) ((arr_33 [i_20] [i_9]) ? (((/* implicit */int) arr_50 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_7])) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_38 [(short)4] [i_8] [i_9] [i_8] [i_7] [5U]))))));
                                arr_79 [i_20] [i_19] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) ((max((max((var_3), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))) + (max((((long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_2 [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned short) (_Bool)0)))))) ? (min((((4294967288U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_9] [i_7]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7])))));
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        arr_83 [i_21] [i_7] [i_7] = ((/* implicit */int) var_9);
                        arr_84 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)90)), (((unsigned short) (unsigned char)20))));
                    }
                }
            } 
        } 
    } 
}
