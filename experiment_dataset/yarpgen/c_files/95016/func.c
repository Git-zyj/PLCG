/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95016
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
    var_14 = (-2147483647 - 1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] = ((/* implicit */long long int) arr_4 [i_1]);
                    var_15 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_0)), (-6678065036748118596LL)))))) ? (min((((/* implicit */int) min((((/* implicit */short) var_0)), (var_7)))), (min((((/* implicit */int) var_12)), (var_4))))) : (var_3)));
    var_17 = ((/* implicit */short) var_13);
}
