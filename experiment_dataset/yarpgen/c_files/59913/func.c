/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59913
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
    var_12 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) ^ (var_0))) ^ (((int) var_8))))) || (((/* implicit */_Bool) min((((unsigned short) var_10)), (((/* implicit */unsigned short) max((var_2), (var_11)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] [i_2] [i_0] = ((/* implicit */int) arr_2 [i_0]);
                    var_13 = ((/* implicit */short) (+((-(((/* implicit */int) (signed char)33))))));
                    arr_9 [i_0] = var_3;
                    var_14 = ((min((var_7), (((arr_7 [i_0 + 1] [i_2] [i_0 - 3] [i_2]) | (arr_3 [i_2] [i_2] [i_2 - 1]))))) ^ (((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) var_11)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
}
