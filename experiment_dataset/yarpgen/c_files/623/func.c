/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/623
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)10)) - (((/* implicit */int) (unsigned char)233)))) & (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    arr_7 [i_2] [i_1] [(signed char)11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-13)) : (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) var_4)))))) * ((~(((/* implicit */int) max((arr_6 [i_0] [i_1] [(signed char)12]), (var_3))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8))))), (min((((/* implicit */unsigned char) var_9)), (var_4)))))) <= (max((((/* implicit */int) ((unsigned char) var_10))), ((-(((/* implicit */int) (signed char)-10))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)82)) + (((/* implicit */int) (unsigned char)25))));
}
