/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70722
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
    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */_Bool) var_2)) ? (((int) var_1)) : (((((((/* implicit */_Bool) -779326464)) ? ((-2147483647 - 1)) : (var_5))) & (((var_7) << (((var_0) - (1749576092)))))))))));
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((int) arr_4 [i_1] [i_2]))) ? (((int) arr_7 [i_2] [i_1] [i_0])) : (arr_7 [i_0] [i_1] [i_2]));
                    arr_9 [i_0] [i_0] [i_2] = ((int) min((min(((-2147483647 - 1)), (var_9))), (arr_4 [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_13 = var_3;
}
