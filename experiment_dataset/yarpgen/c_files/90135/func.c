/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90135
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
    var_13 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_11))))) : ((-(5983540502105341422LL))))), (((/* implicit */long long int) ((int) (+(1111449573)))))));
    var_14 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1ULL)) ? (10) : (1185975734))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (short)-1999)))));
                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)2023))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-2024))) || (((/* implicit */_Bool) arr_0 [i_1] [(signed char)4]))))) : (((/* implicit */int) (short)-1999))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_4))));
}
