/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92794
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
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned short) min(((~(((((/* implicit */int) (unsigned char)220)) << (((((/* implicit */int) (unsigned char)43)) - (29))))))), ((~(((/* implicit */int) (unsigned char)229))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] [(unsigned char)4] = ((/* implicit */int) var_10);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_9 [i_3] [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (max((((long long int) arr_2 [i_0] [i_0])), (((/* implicit */long long int) ((-1) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_2])))))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]) < (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) >= (((((/* implicit */int) arr_11 [i_0] [(short)8] [(unsigned short)7] [i_2] [i_1 - 1])) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_1 - 1]))))));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_9 [i_0] [11ULL] [i_2]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_2])))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (((+(arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) | (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_2])) ? (arr_10 [i_1 - 1] [i_1 - 1] [i_3]) : (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned short) max((((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [(unsigned char)4] [i_0] [(signed char)10])), (arr_7 [i_0] [i_1 - 1] [i_0])));
                                arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1732633875)))) ? (min((((/* implicit */unsigned int) arr_9 [i_2] [(unsigned short)6] [i_2])), (3815967102U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)214)), (arr_4 [7LL] [i_5])))))));
                                arr_21 [i_0] [i_0] [i_2] [i_2] [9U] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (unsigned short)51274)), (arr_2 [i_2] [i_2])))))) ? (((/* implicit */int) arr_6 [(unsigned short)7] [(unsigned short)7])) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1] [i_5]))))), (arr_16 [i_2]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned long long int) min((7), ((~(((/* implicit */int) max(((short)-10), (((/* implicit */short) (unsigned char)214)))))))));
                        var_26 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))), (var_19)));
                        arr_25 [i_0] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + (((/* implicit */int) var_11))))) != (((arr_0 [i_0]) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_29 [(_Bool)1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) (signed char)-10)) + (2147483647))) << (((((/* implicit */int) var_7)) - (23)))));
                        arr_30 [i_2] [i_1] [i_7] = ((/* implicit */signed char) arr_19 [i_7] [i_0] [i_2] [i_0] [i_1] [i_0]);
                        var_27 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((0ULL) << (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_2])) + (40)))))) : (((/* implicit */_Bool) ((0ULL) << (((((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_2])) + (40))) - (133))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        arr_33 [i_2] = ((/* implicit */unsigned short) arr_15 [i_1 - 1] [i_2] [i_1 - 1] [i_2] [i_1 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_0] [i_1 - 1] [i_2] [i_1] [i_2] [i_2])) + (var_6)));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (arr_23 [(unsigned short)16] [i_2] [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)12])))))) ? (arr_7 [i_1 - 1] [i_1] [i_2]) : (((/* implicit */int) (unsigned char)220)))))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_1] [i_1 - 1] [i_0])) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(signed char)9] [i_2]))) % (-1986376566142775864LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_1] [i_1]))))))))) : (((/* implicit */int) arr_26 [i_0] [9LL] [i_0] [i_0] [i_0]))));
                }
                for (unsigned char i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_3 [i_10])) * ((~(((/* implicit */int) (unsigned short)0)))))) : (((int) ((unsigned short) (unsigned char)76))))))));
                    var_32 = ((/* implicit */long long int) (short)0);
                    arr_39 [i_0] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) / (arr_35 [i_0] [i_1] [i_1] [i_0] [i_0])));
                }
            }
        } 
    } 
}
