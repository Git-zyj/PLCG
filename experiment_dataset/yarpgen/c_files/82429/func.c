/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82429
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
    var_19 &= ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((unsigned char) ((long long int) arr_5 [i_0] [i_0])))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_1]))) >> (((/* implicit */int) var_4))));
                var_21 *= ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
