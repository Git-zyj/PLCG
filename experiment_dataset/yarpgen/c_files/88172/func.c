/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88172
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
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (max(((+(((var_14) / (2014203133))))), (((((/* implicit */_Bool) 668768649)) ? (((/* implicit */int) (short)-32767)) : (-987061100)))))));
                var_19 = ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */_Bool) (short)4942)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_1])))) ^ (((((/* implicit */_Bool) (short)-17784)) ? (-2014203133) : (-1380559350))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_20 += ((int) var_14);
}
