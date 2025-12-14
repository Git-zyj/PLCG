/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66626
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */short) var_6);
    var_15 &= ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((min(((~(arr_2 [i_0]))), ((~(((/* implicit */int) var_9)))))), (((/* implicit */int) arr_0 [i_0]))));
        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16713)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_1 [0ULL]))))) ? (((/* implicit */int) arr_0 [19ULL])) : (((/* implicit */int) min(((unsigned short)16693), (((/* implicit */unsigned short) arr_1 [i_0]))))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2])));
                var_17 = ((/* implicit */short) var_3);
                var_18 = ((/* implicit */int) var_9);
                var_19 = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_1 - 1] [i_1] [i_2] [i_0]));
                var_20 = (-(((/* implicit */int) arr_8 [i_0] [i_2 - 3] [i_2 + 2])));
            }
            for (int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                var_21 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_3 + 2])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (arr_12 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_2 [i_3 + 2]))))) ? (((/* implicit */int) var_12)) : (min((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0])), ((-(((/* implicit */int) (unsigned short)8064)))))));
                arr_15 [i_0] [i_1] [i_0] [(short)0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 4] [i_3 + 2] [i_3])))))));
                var_22 += ((/* implicit */unsigned char) (+(((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1)))))));
            }
            for (signed char i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                var_23 += ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)16713), (((/* implicit */unsigned short) (signed char)0))))) <= (((((/* implicit */_Bool) var_1)) ? (var_3) : ((+(((/* implicit */int) var_2))))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    arr_20 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-974908257), (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_0]))))) ? (var_5) : (((/* implicit */int) arr_7 [i_0] [i_4] [i_1 - 1] [i_0]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_4]))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_4 - 3]))))) : (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 2] [i_0] [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (max((((/* implicit */unsigned int) var_3)), (var_1)))))));
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_1] [i_4] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) & (arr_11 [i_0] [i_1])))))));
                        var_24 &= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        arr_26 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_11 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_8 [i_7] [i_4] [i_1])) : (((/* implicit */int) var_8))))) ? (max((arr_12 [i_7 - 1] [i_5] [i_4 - 2] [i_0]), (arr_12 [i_7 - 2] [i_5] [i_4 - 4] [i_1]))) : (((/* implicit */unsigned int) min((max((arr_5 [i_0] [(_Bool)1] [i_0]), (var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [18]))))))))));
                        arr_27 [i_0] [i_4] [i_4] [i_4] [i_4 - 4] = ((/* implicit */short) min((((((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1] [i_1 + 1])) << (((((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1] [i_1 + 1])) - (68))))), (((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 1] [i_1 + 1]))));
                        arr_28 [(unsigned char)5] [i_1] [i_1] [i_0] [i_1] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5265337155263450237ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)))) ? (max((((/* implicit */int) arr_19 [i_0] [i_0])), (var_3))) : (arr_13 [i_1] [i_1 + 2] [i_0] [i_1 + 2])))), (((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_7 + 1] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 1] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_7]))))) : (arr_22 [i_7 - 1] [i_0] [i_7] [i_5 - 2] [i_7] [i_7]))));
                        arr_29 [i_0] [i_1 - 2] [i_4] [(short)13] [i_0] [i_0] [i_7 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(var_0))) : (((/* implicit */int) ((short) var_1)))))), (arr_11 [i_5 - 4] [i_5 - 3])));
                    }
                    for (int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_32 [21ULL] [21ULL] [i_4] [i_0] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 511ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6748))) : (144115153716117504ULL)))));
                        var_25 = ((/* implicit */unsigned long long int) var_9);
                        var_26 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        arr_33 [i_8] [i_0] [i_4] [i_0] [i_0] = var_7;
                    }
                    arr_34 [i_0] [i_1] [i_5] [i_5] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
                    arr_35 [i_0] [i_1 + 1] [i_0] [i_5] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_4] [i_0] [i_0])));
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_9]))))))));
                    var_28 = ((/* implicit */unsigned short) (+(arr_9 [i_1] [i_9])));
                }
            }
            arr_40 [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_17 [i_1 - 2] [i_1 + 2] [i_1 - 1])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_11 [i_1 - 2] [i_0])))) ? (((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [(short)22] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_1] [(unsigned short)2] [i_0]))))));
        }
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((unsigned long long int) (-(-6514585701611479454LL)))))));
        arr_41 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))) - (((/* implicit */int) max((arr_38 [i_0] [i_0] [i_0] [i_0]), (arr_38 [22U] [22U] [i_0] [i_0]))))));
    }
    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
    {
        arr_45 [i_10] [i_10] = (~(((/* implicit */int) arr_38 [i_10] [i_10] [i_10] [i_10])));
        arr_46 [i_10] [i_10] = ((/* implicit */_Bool) arr_3 [i_10]);
        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4909649291458874898ULL)) ? ((~(var_3))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_42 [i_10])), (var_1)))) ? ((-(((/* implicit */int) arr_24 [(signed char)6] [i_10] [(signed char)18] [i_10] [i_10])))) : ((-(((/* implicit */int) arr_31 [14LL] [i_10] [i_10] [i_10] [(unsigned short)4] [i_10]))))))));
    }
}
