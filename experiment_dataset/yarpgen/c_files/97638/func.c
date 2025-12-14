/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97638
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
    var_17 = ((/* implicit */signed char) (unsigned short)6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [(signed char)23] = ((/* implicit */short) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_18 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_19 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (4294967295U)))) && (((/* implicit */_Bool) (unsigned short)10541))))), ((+(((/* implicit */int) arr_3 [i_1] [i_0]))))));
                var_20 -= ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
}
