/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58001
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_19 = var_13;
            var_20 += ((/* implicit */unsigned int) ((short) arr_1 [(unsigned short)0] [i_1]));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) && (((/* implicit */_Bool) (signed char)3))));
            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_2] [i_2] [i_0]))));
        }
        var_23 = ((/* implicit */int) -533948484408117249LL);
    }
    var_24 = ((/* implicit */long long int) var_6);
}
