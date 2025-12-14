/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99360
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) 4294967292U))));
    var_11 = ((short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0]))))))), (((/* implicit */int) var_7))));
                var_13 = ((/* implicit */int) var_2);
                var_14 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) 112)))));
            }
        } 
    } 
    var_15 *= ((/* implicit */short) -1053995496164611279LL);
}
