/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60178
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_3 + 1] [i_3 - 1]), (arr_1 [i_3 + 2] [i_3 - 1]))))));
                            var_17 = arr_6 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1];
                            var_18 = ((/* implicit */signed char) arr_2 [i_3 + 1] [20ULL] [2LL]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL)))) ? ((-(arr_3 [i_0] [i_0]))) : (min((-4667534583961304045LL), (((/* implicit */long long int) arr_2 [15] [i_1] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(var_3)))) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((int) 15991901665235335372ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (15128042406403703605ULL)))) ? (((/* implicit */unsigned long long int) var_12)) : (15128042406403703605ULL)))));
}
