/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60988
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_10 = arr_4 [i_0] [i_1];
                        var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (_Bool)0))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 -= ((/* implicit */long long int) ((((arr_10 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3]) + (2147483647))) >> (((var_6) + (294151111)))));
                        var_13 = ((/* implicit */_Bool) var_9);
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_14 |= min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (arr_2 [i_0 + 1] [i_1]) : (((/* implicit */long long int) arr_0 [i_2] [i_0 - 3])))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((-9223372036854775807LL - 1LL))))), (min((((/* implicit */long long int) arr_8 [(unsigned char)3] [(unsigned char)3])), (arr_3 [i_0 - 3]))))) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_16 &= ((/* implicit */int) (!(arr_1 [i_0 - 1])));
                        var_17 = (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0]))) : (max((9223372036854775799LL), (((/* implicit */long long int) var_9)))))) == (((/* implicit */long long int) (-(arr_11 [i_2] [(unsigned char)6] [i_2] [i_2] [(unsigned short)7])))));
                    }
                    arr_16 [i_0 - 2] [i_1] [i_2] = ((/* implicit */long long int) ((int) (~(arr_3 [11]))));
                    arr_17 [i_0 - 3] [i_0] = ((/* implicit */unsigned char) (~(((arr_15 [i_0 - 3] [i_0] [i_0] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) min((((/* implicit */int) (!((_Bool)1)))), (arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_19 |= var_6;
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) + (-9223372036854775800LL)))));
    var_21 = (-(((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))));
}
