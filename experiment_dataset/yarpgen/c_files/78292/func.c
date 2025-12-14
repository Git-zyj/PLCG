/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78292
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
    var_15 = ((/* implicit */unsigned long long int) (short)31829);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) << (((/* implicit */int) arr_5 [i_0]))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) (-(var_13)))) <= (((((/* implicit */_Bool) arr_5 [(unsigned char)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_6)))));
            }
        } 
    } 
}
