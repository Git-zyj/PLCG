/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69155
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
    var_12 = var_7;
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) ((((/* implicit */int) var_4)) > (var_6)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) 8321960765396258207LL);
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)16)), (var_6)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_3))))))) & (min((((0ULL) << (((10842372764810235838ULL) - (10842372764810235802ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (-(var_7)));
}
