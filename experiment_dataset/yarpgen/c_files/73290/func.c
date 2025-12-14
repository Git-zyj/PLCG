/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73290
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
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((min((arr_1 [i_0]), (2434831176U))) + (arr_1 [i_0])));
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1860136119U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48948))))) : (((unsigned int) var_14))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((min((((/* implicit */int) (unsigned short)48949)), (379106906))) | (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_2)) - (11150)))))))), (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (var_6) : (var_4)))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)96)))))))));
}
