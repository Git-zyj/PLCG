/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63286
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)20414)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)72))))) : (((/* implicit */int) ((signed char) ((int) (unsigned char)84))))));
                var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) arr_0 [i_1])) / (arr_1 [i_0]))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) | ((~(-1042628104))))));
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1261766162)) ? (((/* implicit */int) (unsigned short)20414)) : (((/* implicit */int) (unsigned char)157))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20413))))) : (((/* implicit */int) ((((/* implicit */_Bool) 158632907)) || (((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45122))))));
}
