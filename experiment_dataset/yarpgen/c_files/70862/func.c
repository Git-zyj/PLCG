/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70862
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [(_Bool)1] [i_2] [i_1]);
                    var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_2 [i_1 + 4] [i_1]))))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) var_15)) : (var_7)));
}
