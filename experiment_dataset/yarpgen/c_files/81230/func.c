/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81230
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
    var_16 += ((/* implicit */short) var_8);
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)20815))) ? (((/* implicit */int) arr_4 [i_0])) : (arr_1 [i_0 + 1]))));
                var_19 = ((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0]);
                var_20 = ((/* implicit */signed char) ((max((max((((/* implicit */unsigned int) (unsigned char)59)), (2916554749U))), (((/* implicit */unsigned int) arr_1 [i_1])))) << (((/* implicit */int) arr_4 [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2]);
            }
        } 
    } 
}
