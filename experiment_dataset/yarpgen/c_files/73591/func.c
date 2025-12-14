/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73591
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
    var_20 = ((/* implicit */long long int) var_4);
    var_21 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (signed char)78))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 3] [i_3] [1] [i_3 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_7 [i_3 + 3] [i_2] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_5 [i_2 - 1])))) : ((-(((/* implicit */int) var_16))))));
                            var_23 ^= ((/* implicit */short) arr_1 [i_0] [i_3]);
                            var_24 = ((/* implicit */unsigned int) arr_9 [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_0 + 3] [i_0]);
                        }
                    } 
                } 
                arr_11 [i_0] [(short)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-117))) ? (((((/* implicit */int) arr_5 [i_0 + 1])) / (((/* implicit */int) (signed char)63)))) : (((/* implicit */int) min((arr_5 [i_0 + 4]), (arr_5 [i_0 - 2]))))));
                var_25 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_17))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (var_4))))))) | (((/* implicit */int) (unsigned char)36))));
}
