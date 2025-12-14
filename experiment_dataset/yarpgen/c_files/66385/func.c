/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66385
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)209)) : (260096)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_4 [3]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_3))), (((((/* implicit */int) arr_10 [1LL] [i_3])) + (((/* implicit */int) arr_10 [i_0] [i_0])))))) + (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_1 - 1])) : (((/* implicit */int) arr_10 [i_2 + 2] [i_1 - 1]))))));
                            var_14 = ((/* implicit */long long int) (+((-(((/* implicit */int) ((short) arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_3])))))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((/* implicit */int) var_0)), ((~((~(((/* implicit */int) arr_0 [i_3])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
}
