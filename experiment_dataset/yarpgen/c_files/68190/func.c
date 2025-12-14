/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68190
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) arr_0 [i_0]))), ((-(0U)))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (var_11)))))) ? (arr_2 [i_0]) : (max((arr_0 [14U]), (((/* implicit */unsigned int) ((unsigned short) 557713981)))))));
        arr_5 [i_0] [i_0] = ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)0))));
                    arr_13 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((short) arr_3 [i_1]))))));
                }
            } 
        } 
    } 
}
