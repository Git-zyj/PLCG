/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85583
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)53948)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_14)))) : (((0) | ((~(var_2)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 - 2]);
        var_19 = ((/* implicit */unsigned long long int) var_6);
        var_20 ^= ((/* implicit */int) var_11);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */short) max((0), (((/* implicit */int) (short)0))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_5 [i_1] [i_2]))));
            }
        } 
    } 
    var_23 -= ((/* implicit */long long int) var_11);
}
