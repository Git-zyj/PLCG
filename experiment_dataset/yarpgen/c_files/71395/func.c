/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71395
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1 - 3])) * (((/* implicit */int) var_2))));
                        arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (min((((3595699214U) >> (((((/* implicit */int) var_2)) + (9673))))), (min((((/* implicit */unsigned int) var_9)), (arr_11 [i_0] [15] [i_0] [i_3])))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        arr_17 [i_4 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned int) arr_15 [i_1 - 4] [i_0])), (arr_11 [i_4] [i_2] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_11))))))) << ((((+(min((((/* implicit */long long int) 4195936285U)), (-8370986292917481851LL))))) + (8370986292917481855LL)))));
                        arr_18 [i_0] [i_1] [i_0] [(short)15] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8370986292917481850LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 3] [i_2] [i_4 + 2])) ? (var_4) : (((/* implicit */unsigned int) arr_3 [i_0] [i_4 - 1]))))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_0)) : (8370986292917481850LL)))))));
                    }
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_8))));
                    var_15 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                    arr_19 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [17LL] [i_1 - 4])) / (((/* implicit */int) ((unsigned char) 8370986292917481864LL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_9)), (min((((unsigned short) var_8)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))))));
}
