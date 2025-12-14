/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6364
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
    var_20 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-10575))))), (var_3)));
    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10570)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) 10598250815593407053ULL);
                var_23 += ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)41))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_14))));
    var_25 &= ((/* implicit */unsigned char) min((var_18), (((unsigned int) (unsigned short)5615))));
}
