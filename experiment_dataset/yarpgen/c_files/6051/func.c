/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6051
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 3]))) < (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (signed char)-93)) : (arr_1 [i_0 - 3])))));
                arr_6 [i_0] [i_0] [i_0] = (!(arr_0 [i_0]));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_1 [i_0 + 2]))) ? (((arr_1 [i_0 - 2]) + (arr_1 [i_0 - 2]))) : (arr_1 [i_0 + 1])));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64790)) && (((/* implicit */_Bool) (unsigned char)12))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_10);
}
