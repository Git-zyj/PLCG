/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74587
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (~(3802830330U))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */unsigned int) arr_4 [i_0] [2]);
                    var_12 = ((/* implicit */int) min((min((arr_4 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(_Bool)1] [i_1] [(unsigned char)11])) <= (((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), (arr_7 [(short)20] [i_1] [i_0]))) ^ (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0 - 1])));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((arr_1 [i_0 - 1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2])))))));
                        arr_11 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 *= ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1]);
                        arr_16 [i_4] [i_1] [6U] [i_2] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((int) arr_1 [i_0 - 1]));
                    }
                    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        arr_20 [i_1] = ((/* implicit */signed char) ((_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_1)))))));
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5 - 2] = ((/* implicit */short) max((arr_14 [i_5 - 1] [i_5 - 3] [i_5] [i_5]), (((arr_14 [i_5 - 3] [i_5 + 2] [i_5 + 2] [i_5 + 2]) - (arr_14 [i_5 + 1] [i_5 - 3] [i_5] [i_5 - 2])))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
}
