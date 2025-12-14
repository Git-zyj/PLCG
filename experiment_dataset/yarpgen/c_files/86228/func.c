/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86228
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0 + 2]))))), ((~(var_4)))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)250)), (var_18)))) / (var_7))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_0);
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */unsigned short) ((unsigned char) var_14));
    var_24 = ((/* implicit */unsigned long long int) var_18);
}
