/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55093
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [19U] [i_0] = ((max((7930093818631077239LL), (((/* implicit */long long int) (signed char)0)))) - (((/* implicit */long long int) (+(((int) 9223372036854775807LL))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) -5224381668952583100LL);
                    var_11 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_0)))))))));
    var_13 ^= ((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
}
