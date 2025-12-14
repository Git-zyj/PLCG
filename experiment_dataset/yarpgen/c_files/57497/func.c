/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57497
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (~(arr_1 [i_0] [i_1])));
                arr_5 [i_0] = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)65525))))), (arr_4 [i_1] [i_0] [i_0 - 2])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3 - 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3392623690U))) : (2107566815U)))));
                            arr_11 [i_0] [i_0] [i_2] [i_3 + 2] [i_2] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (((~(arr_1 [i_0] [i_3 + 2]))) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0])) - (91)))))) : (((/* implicit */_Bool) (((~(arr_1 [i_0] [i_3 + 2]))) << (((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0])) - (91))) + (100))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_6)))))) || (((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)48063)))))))));
    var_18 = ((/* implicit */long long int) var_10);
    var_19 = ((/* implicit */short) var_11);
}
