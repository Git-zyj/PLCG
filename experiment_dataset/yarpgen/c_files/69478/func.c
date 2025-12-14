/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69478
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) arr_1 [i_2]);
                    var_15 = ((/* implicit */_Bool) min((var_15), ((_Bool)0)));
                    var_16 = ((((/* implicit */_Bool) -7883341890453071387LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775803LL)))))));
                }
            } 
        } 
        var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-7883341890453071391LL))))));
    }
    var_18 = ((/* implicit */_Bool) var_5);
    var_19 *= ((/* implicit */_Bool) var_6);
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9))));
    var_21 = var_9;
}
