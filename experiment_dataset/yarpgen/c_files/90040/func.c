/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90040
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_20 ^= arr_3 [i_0] [i_1];
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_1 [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) <= (((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                var_22 += ((/* implicit */unsigned int) max((((/* implicit */int) ((102001264U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((int) (short)-6510))));
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)6494))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))) : (((long long int) var_18))));
                var_24 = ((((/* implicit */int) max(((short)-6503), ((short)-6510)))) | (max((((/* implicit */int) (short)-6520)), (2147483641))));
            }
        } 
    } 
    var_25 &= (-(((/* implicit */int) ((unsigned short) -1LL))));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((_Bool) (short)-6510)))));
}
