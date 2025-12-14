/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9118
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
    var_16 = ((unsigned short) ((((((/* implicit */int) (unsigned char)128)) > (((/* implicit */int) var_5)))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [7U] = ((/* implicit */short) (-(min((((/* implicit */unsigned int) 2147483639)), (0U)))));
                arr_7 [i_0] [0U] = ((/* implicit */short) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_14);
    var_18 = ((/* implicit */unsigned short) var_0);
}
