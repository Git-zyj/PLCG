/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81183
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) var_8);
                            var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 13447191440852031517ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 + 2])))) : ((+(((/* implicit */int) var_5))))));
                            arr_14 [i_0] [i_1 + 4] = ((/* implicit */unsigned short) arr_5 [i_0]);
                            var_18 = ((/* implicit */signed char) min(((+(2090895348U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) (signed char)-123);
            }
        } 
    } 
}
