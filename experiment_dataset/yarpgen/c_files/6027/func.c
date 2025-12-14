/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6027
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [(short)7]))))) ? (4194102634156264121LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_4])), (var_10))))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)57424)))) % (12582912ULL))) - (79ULL))))))));
                            var_13 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
                            var_14 &= ((/* implicit */signed char) arr_10 [i_0] [i_2 - 3] [i_2 + 1] [i_3]);
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [(unsigned char)12] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((arr_5 [i_3]) != (arr_5 [i_4])))))))));
                        }
                        arr_12 [i_3] [i_1] [i_2 + 1] [i_1] [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_5 [i_0])))))) ? ((-(min((18446744073696968703ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_3] [i_3])) ? (((12582912ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))) : (12582904ULL)))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_0 [i_3]) ? (18446744073696968689ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_1 [i_2]))))) >= (((/* implicit */int) ((unsigned short) 7875917225658231850LL))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) % (7875917225658231840LL)));
                            arr_15 [i_5] [i_5] [i_5] [i_0] |= arr_2 [11ULL];
                            arr_16 [i_5] [i_3] [i_2] [i_5] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((arr_14 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_5] [i_5] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 3] [i_5] [i_3]))))) ? ((+(((/* implicit */int) (signed char)-6)))) : (((var_9) ? (((/* implicit */int) arr_9 [i_5] [i_2 + 1] [i_5] [i_5])) : (((/* implicit */int) var_8))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_8)) : (((int) ((unsigned char) var_10)))));
                        var_19 &= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_5)) || (var_9))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) max((arr_10 [i_0] [(unsigned char)4] [(unsigned char)4] [i_0]), (arr_8 [i_0] [i_1] [i_2] [i_0]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_6 [i_8 + 1] [i_7] [i_2] [i_0]))));
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_8 - 1] [i_8] [i_8] [(signed char)4])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_11))) : (((/* implicit */long long int) arr_22 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (((+((+(((/* implicit */int) (short)23337)))))) != (((int) arr_6 [i_0] [i_1] [i_0] [i_7])))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_0 [i_9]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] &= min((arr_25 [i_7] [i_7] [(unsigned short)2] [i_1] [i_0] [i_7]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))))));
                        }
                        arr_27 [i_7] [i_2] [i_7] [i_7] [i_7] &= (~(((/* implicit */int) (((+(7U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_7] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_0] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_3)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_10] [i_7] [i_1] [i_0])) ? (18446744073696968704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6))))));
                            var_24 -= ((/* implicit */unsigned int) var_5);
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_7] [i_7] [i_7] [i_7]))));
                            var_26 |= ((/* implicit */int) (((+(arr_14 [i_10] [i_10] [i_2 + 1] [i_2] [i_2] [i_2 - 3] [i_2 - 3]))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))) <= (max((((/* implicit */unsigned int) (unsigned short)511)), (4294967295U))))))));
                        }
                    }
                    var_27 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0] [i_2 - 3]))));
                    arr_31 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_2 + 1] [i_0])))));
                }
                var_28 &= ((/* implicit */signed char) 0U);
            }
        } 
    } 
    var_29 &= ((/* implicit */short) (((!(((/* implicit */_Bool) max(((signed char)-5), (((/* implicit */signed char) (_Bool)1))))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)23359)), (4294967295U))))))));
}
