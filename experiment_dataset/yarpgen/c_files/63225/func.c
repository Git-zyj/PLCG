/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63225
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
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((int) ((2389618317451747060LL) == ((-9223372036854775807LL - 1LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0] [i_0]))) % (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)25))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 12ULL)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_1])))))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2]);
        var_18 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 4])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2 - 2])) & (((/* implicit */int) (short)-14623)))))));
        arr_12 [i_2] = ((/* implicit */int) var_1);
    }
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (((+((-(((/* implicit */int) (short)17619)))))) & ((~(((/* implicit */int) (unsigned short)65526))))));
                arr_19 [(unsigned short)6] [(unsigned short)6] [i_3] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) var_10)) : (arr_11 [i_3])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_24 [11ULL] [i_3] [i_5] [i_5] = ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) arr_18 [i_4] [i_4 + 3] [i_4])) : (2035556253));
                        var_22 += ((/* implicit */unsigned long long int) (+(3512130966U)));
                        var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_6] [i_5 - 1] [i_6])) << (((((/* implicit */int) arr_17 [i_6] [i_5 - 1] [i_6])) - (21)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) % (var_4)))) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (772240220U))) : (((/* implicit */unsigned int) arr_4 [i_3] [i_5 - 1] [i_4 + 3]))));
                    }
                    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_28 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_3] [i_3]))));
                        var_25 = ((/* implicit */unsigned short) ((((var_6) + (arr_23 [i_3] [(unsigned char)4] [i_4] [i_3] [i_3] [i_3]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531))))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_7]))) % (((((/* implicit */_Bool) 248468454U)) ? (arr_27 [i_4]) : (201132067751301271LL)))));
                    }
                    for (int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [12U] [i_3] [i_8])) ? (16106127360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17336650594355827339ULL))))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (arr_5 [i_3])));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_30 -= ((/* implicit */int) 9223372036854775805LL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */int) (_Bool)1);
                        arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [4ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) + ((-9223372036854775807LL - 1LL)))))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (((-(arr_23 [i_3] [i_4] [i_5] [i_9] [i_3] [i_9]))) >> (((arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9]) - (959134440U))))))));
                        arr_35 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_3] [i_3])) : (((/* implicit */int) (signed char)-13))));
                        var_33 = ((/* implicit */long long int) ((arr_0 [i_3]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65517)) % (arr_4 [i_3] [i_4] [i_5])))) : (var_4)));
                    }
                    arr_36 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) ((arr_11 [i_5 - 1]) - (arr_11 [i_5 - 1])));
                }
                var_34 = arr_14 [i_3] [i_3];
            }
        } 
    } 
}
