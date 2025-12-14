/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68565
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = (short)-1;
                    arr_7 [i_0] = (short)18208;
                    var_21 ^= min((var_4), (arr_6 [i_0] [i_0] [(short)11]));
                    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-18230)) ? (((/* implicit */int) (short)-18230)) : (((/* implicit */int) (short)-18233))));
                    var_23 += arr_0 [i_0] [i_1];
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */short) (+((~(((/* implicit */int) (short)3980))))));
    var_25 -= var_10;
    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18229)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-18233))))) : (((/* implicit */int) (short)-18209)))))));
}
