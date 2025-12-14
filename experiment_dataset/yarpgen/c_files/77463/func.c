/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77463
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
    var_14 &= max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned int) (signed char)0)), (var_4)))))), (var_0));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 512U)) ? (min((((/* implicit */long long int) ((signed char) (signed char)-67))), (-9200158570660042816LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-14)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((arr_4 [i_0 - 1]) == (arr_3 [i_0] [i_1] [i_2]))))));
                arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((short) var_12)));
            }
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-427)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5561398869695492370LL)))));
                arr_12 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
            }
            for (signed char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
            {
                arr_15 [i_0 - 2] [i_1] [(short)10] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((unsigned int) (signed char)0)), (((/* implicit */unsigned int) arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) * (((long long int) min((17839882558685985160ULL), (var_0))))));
                var_16 &= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_8)))));
                arr_16 [i_4] [i_1] [i_0] = ((/* implicit */signed char) min((((unsigned int) arr_13 [i_0 + 1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_0 + 1])))))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
            {
                arr_19 [i_0] [(unsigned char)14] [i_5] |= ((/* implicit */unsigned int) ((int) (_Bool)0));
                var_17 ^= ((/* implicit */long long int) ((unsigned int) (~(arr_3 [i_0] [i_1] [i_0 + 1]))));
            }
            arr_20 [i_0 - 2] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_10 [i_0 + 1] [i_0 - 1])));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                arr_28 [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 4; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_35 [7] [7] [i_7] [i_8] [i_7] [7] = ((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_0 - 2] [i_9] [i_9] [i_0 - 2] [i_9] [i_9] [i_0 - 2]));
                            arr_36 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_0] [i_0] [(_Bool)1] [i_0]))));
                            var_18 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0 + 1]));
                            var_19 -= (short)-427;
                            var_20 = ((/* implicit */_Bool) (~(arr_6 [i_0 + 1] [i_0] [i_0])));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_6] [i_6] [i_0]))));
        }
        arr_37 [18U] = ((/* implicit */unsigned char) var_4);
        arr_38 [(signed char)18] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_23 [i_0] [i_0 - 2] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_11] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_41 [(signed char)7] [i_11] [i_0 - 1] [i_11])) : (((/* implicit */int) arr_41 [9LL] [i_11] [i_0 + 1] [i_10])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        arr_45 [i_11] [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_10] [i_11])))) || (var_11)));
                        arr_46 [i_0] [i_10] &= ((/* implicit */unsigned long long int) (+(arr_42 [i_12] [i_0 - 1])));
                        arr_47 [i_11] = ((/* implicit */unsigned int) ((signed char) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                    {
                        arr_50 [i_11] [i_10] [i_11] [i_10] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 402653184)), (504U)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_0] [i_10] [i_11] [i_0]))) * (-9200158570660042816LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)181)))))))), (max((max((((/* implicit */unsigned long long int) (signed char)0)), (4503599627370495ULL))), (((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_11] [i_13] [i_0 + 1] [i_0] [i_0])))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) (unsigned char)25)))));
                    }
                    for (int i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        arr_53 [i_0 + 1] [i_11] [i_0 + 1] [i_14] = ((long long int) (!(((/* implicit */_Bool) arr_52 [i_11] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_11]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 1; i_15 < 21; i_15 += 1) 
                        {
                            arr_57 [i_10] [i_11] [i_10] = ((/* implicit */signed char) 11ULL);
                            arr_58 [i_11] [20U] [i_11] [i_11] [i_11] = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)98)))) < ((~(((/* implicit */int) arr_26 [i_0] [(signed char)21] [i_11] [i_15 - 1]))))));
                        }
                    }
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_0] [i_11] [i_10] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_42 [i_16] [i_0])))) >> ((((+(var_3))) - (1900147494U))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294966784U)) ? (((/* implicit */int) arr_44 [i_10] [i_11])) : (0)))))))));
                        /* LoopSeq 1 */
                        for (int i_17 = 4; i_17 < 21; i_17 += 1) 
                        {
                            arr_66 [i_0] [i_11] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294966792U)) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_0] [i_0 - 1] [(signed char)5])) : (((/* implicit */int) (unsigned char)181))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_65 [i_0 - 1] [i_11])))))) ? (((((/* implicit */_Bool) max(((short)407), (((/* implicit */short) arr_30 [i_0] [i_10]))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_17] [(unsigned char)18])) : (2168185702268845483ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((1741524299) != (var_12)))), (max((arr_42 [i_10] [6LL]), (((/* implicit */long long int) arr_65 [i_0] [i_11]))))))));
                            arr_67 [i_0] [(short)6] [i_11] [i_16] = arr_25 [i_10] [i_10] [i_16] [i_17];
                        }
                    }
                }
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) var_1);
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_4)))))))));
}
