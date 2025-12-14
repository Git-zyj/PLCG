/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91209
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
    var_13 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) arr_5 [i_0 - 1]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-28537))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_1)))) : ((((_Bool)1) ? (((/* implicit */int) var_6)) : (var_9)))))));
                }
            } 
        } 
    } 
}
