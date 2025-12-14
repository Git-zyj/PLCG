/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59530
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
    var_17 = var_15;
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_15))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4106523219U)) ? (4106523219U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */long long int) (~((-(((/* implicit */int) var_8))))));
                var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_1 + 4])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
}
