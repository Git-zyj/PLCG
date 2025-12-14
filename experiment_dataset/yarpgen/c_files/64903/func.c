/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64903
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
    var_10 = ((/* implicit */int) min((((_Bool) 2147483647)), ((_Bool)0)));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)15)) >> (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) != ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) arr_1 [9] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))) >> (((int) ((signed char) arr_2 [i_0] [i_1] [i_0])))));
                    arr_7 [i_0] [i_1] [i_1] [i_2 + 2] = ((signed char) ((int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)88))));
                    arr_8 [i_0] [i_1] [i_2 - 1] = 390751241;
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) ((short) arr_5 [i_2 - 2] [i_1] [i_2 - 1]))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((var_1) & (8556380160LL)))));
}
