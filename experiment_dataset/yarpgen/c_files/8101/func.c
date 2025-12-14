/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8101
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)-25416))) - (((int) 3339889344U))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), ((((-(((/* implicit */int) var_8)))) + (arr_1 [i_0] [i_0])))));
        var_17 -= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) (-((+(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)25416))));
        arr_5 [i_0] = ((/* implicit */short) (~((+(15214482689884474398ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_1])) <= (((/* implicit */int) ((short) 13224483839364621371ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) arr_11 [i_1] [i_2] [i_3]);
                    arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)25415)), (5U)))) ? ((~(((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (_Bool)1)))))) : (((int) min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (var_14))))));
                    arr_16 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_7);
                    arr_17 [i_1] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)101)) - (((/* implicit */int) var_4))))));
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_13 [i_1] [i_1])))));
        var_18 = ((/* implicit */short) var_12);
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_15))));
    var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : ((~(var_0)))))));
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
}
