/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84183
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
    var_15 *= ((/* implicit */unsigned int) max(((~((~(var_7))))), ((-(((((/* implicit */_Bool) 2988618461U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4398046511103LL)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 1073741823U))));
                    arr_7 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) ((_Bool) var_6))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (1073741824U) : (1492036212U)));
                }
            } 
        } 
    } 
}
