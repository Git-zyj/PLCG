/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66151
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
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_14)) ? (max((14923964775742175218ULL), (((/* implicit */unsigned long long int) -6466990533717450328LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_17 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_15)), (var_4))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (9223372036854775807LL)));
                            var_19 = var_3;
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((_Bool) var_10));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (~(min((var_0), (((/* implicit */unsigned long long int) var_12))))));
}
