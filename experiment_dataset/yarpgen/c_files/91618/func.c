/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91618
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
    var_15 = var_7;
    var_16 = ((/* implicit */int) max((var_16), (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (((((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_2])))) ? (min((arr_0 [i_1] [i_0]), (2097151))) : (((((/* implicit */_Bool) -530721822)) ? (var_0) : (-2097156))))) | (((int) 2039852863)));
                    arr_7 [i_2] [i_1] [i_0 + 2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))));
                    var_17 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2 + 1]))))));
                    var_18 = -395372549;
                }
            } 
        } 
    } 
}
