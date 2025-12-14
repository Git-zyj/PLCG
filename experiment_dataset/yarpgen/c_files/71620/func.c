/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71620
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_9))) >> (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))) && ((_Bool)1)));
    var_13 = var_11;
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 &= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_7 [i_0 + 2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0 + 2] [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) (signed char)43)))))) ^ (((/* implicit */int) var_6))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_15 &= (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-114)))));
}
