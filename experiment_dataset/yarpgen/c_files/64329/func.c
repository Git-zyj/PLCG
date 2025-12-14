/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64329
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
    var_16 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (short)-32757)), (arr_0 [i_1] [i_0]))), (arr_0 [i_1 - 1] [i_0]))))) != (((((/* implicit */_Bool) min((arr_6 [(signed char)8] [i_0]), (((/* implicit */long long int) var_13))))) ? (min((var_2), (((/* implicit */unsigned long long int) (short)2624)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_18 |= ((/* implicit */short) arr_1 [4LL]);
                var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (short)2624))))) ? (((/* implicit */unsigned long long int) var_4)) : (arr_3 [i_0] [i_1 + 3]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) arr_6 [3] [i_0])) : (arr_3 [i_0] [i_1 + 3])))));
            }
        } 
    } 
}
