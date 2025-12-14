/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99388
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
    var_19 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] [0U] [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)76)))) : (((/* implicit */int) var_10))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [17LL])) <= (((((((/* implicit */int) (unsigned short)28)) + (((/* implicit */int) arr_2 [i_0])))) + ((+(((/* implicit */int) var_7))))))));
            }
        } 
    } 
}
