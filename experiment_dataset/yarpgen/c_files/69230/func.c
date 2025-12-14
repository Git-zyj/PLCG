/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69230
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_9))))))) : (min((((/* implicit */unsigned int) min((var_8), (var_2)))), (((unsigned int) var_7))))));
    var_20 = ((/* implicit */unsigned char) min((max((min((var_14), (((/* implicit */int) var_17)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))), (max((min((var_7), (var_16))), ((-(var_2)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_22 ^= ((int) ((((/* implicit */long long int) arr_1 [(unsigned char)2])) / (arr_4 [i_0] [i_1] [i_2])));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [i_0])) / (((((var_15) + (9223372036854775807LL))) >> (((var_5) - (6924656944166024670LL))))))))));
                        arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_15)))));
                    }
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_24 = max((min((((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_4])))))), (((int) arr_5 [i_1])))), ((-(((int) arr_5 [i_0])))));
                        arr_13 [i_2] [2] [2] [i_1] = (+(arr_10 [i_2] [i_2]));
                    }
                    for (int i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_2])) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((((arr_12 [i_0] [4] [i_0] [i_2] [i_0]) + (2147483647))) << (((var_8) - (1980453669)))))))) < (((/* implicit */unsigned int) arr_15 [i_1]))));
                        arr_19 [i_2] [i_2] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [13LL] [7] [i_0])), (max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_2 [i_1] [10]))))))));
                    }
                    for (int i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_5))));
                        arr_23 [i_2] [i_0] [i_2] = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_15 [1LL])) ? (((/* implicit */int) arr_3 [i_0] [i_6])) : (arr_15 [i_1]))) / ((-(arr_10 [i_0] [i_2]))))));
                    }
                    var_26 += ((/* implicit */unsigned char) ((int) ((int) max((((/* implicit */unsigned int) var_17)), (var_6)))));
                    var_27 = var_4;
                }
            } 
        } 
    } 
}
