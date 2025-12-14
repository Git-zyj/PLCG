/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6593
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
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)199)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) && (((/* implicit */_Bool) var_0))))) + (((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) (unsigned char)205))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) (short)4322)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) >> (((((/* implicit */int) arr_0 [i_1 - 1])) + (78)))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (3755236633U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 3])) > (((/* implicit */int) min((arr_7 [i_0 + 3] [i_1] [i_0 + 3] [i_1]), (arr_4 [i_0] [i_0]))))))) : (((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */unsigned int) (signed char)-39);
}
