/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95332
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
    var_18 += ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (var_7) : (var_7)))))) ? (((/* implicit */int) var_17)) : ((~((~(((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(max((((/* implicit */int) (signed char)0)), (arr_0 [i_0] [i_1 + 2])))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) ((((/* implicit */_Bool) max(((signed char)7), (arr_8 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0] [i_0])), (arr_7 [i_0] [i_1 + 3] [i_2]))))) : (var_4))))));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */short) var_0);
}
