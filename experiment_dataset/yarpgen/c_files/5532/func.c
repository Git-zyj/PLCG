/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5532
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
    var_18 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1932298611)) ? (((/* implicit */int) (unsigned char)8)) : (-448706270)))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (max((646612836U), (((/* implicit */unsigned int) -448706292)))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)232))));
                arr_6 [i_0] [14LL] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (1960835415U) : (((/* implicit */unsigned int) arr_3 [i_0]))));
                arr_7 [i_0] [i_1] = arr_2 [i_0] [i_1];
                var_20 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
            }
        } 
    } 
    var_21 += var_14;
}
