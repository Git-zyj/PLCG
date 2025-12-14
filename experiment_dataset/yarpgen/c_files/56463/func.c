/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56463
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))))))))));
                var_21 *= ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0]))), (((((/* implicit */int) arr_0 [i_1] [i_1])) / (max((((/* implicit */int) arr_1 [i_1])), (arr_2 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */_Bool) arr_1 [5LL]);
                            var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)105)))) / (-1600911946))))));
                            var_24 = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1]))))), (((((arr_5 [i_0] [i_0] [i_0] [(short)24]) / (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)11] [i_3 + 1])) ? (arr_3 [(unsigned short)18] [7LL]) : (((/* implicit */int) arr_10 [19ULL] [i_1] [i_2] [i_3] [i_2])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_13)) - (var_19)));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_14)), (var_17))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6)))))))) ? ((((~(((/* implicit */int) var_6)))) & (((/* implicit */int) var_2)))) : (var_13))))));
}
