/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5936
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((3990570182U), (105480358U)))));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) / (((unsigned int) ((unsigned int) 4132170414U)))));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 105480345U)) && ((_Bool)1)));
            arr_9 [i_1] [i_1] &= ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
            var_22 = ((_Bool) 304397103U);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (2551886571U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)0] [i_1])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [9U] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
            arr_14 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_12 [i_3] [i_3] [i_3]));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_18 [i_3] = ((/* implicit */_Bool) ((unsigned int) arr_16 [i_3]));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_22 [i_3] = ((/* implicit */_Bool) ((arr_11 [i_4 + 1] [i_3] [i_4 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_17 [i_1] [i_3] [i_4] [i_5])))) : (arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                    arr_23 [i_1] [i_3] [i_3] [i_5] = var_16;
                }
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_28 [i_6] = ((/* implicit */unsigned int) (_Bool)0);
            arr_29 [i_1] = ((/* implicit */unsigned int) ((_Bool) arr_25 [i_6]));
            var_24 = ((/* implicit */_Bool) arr_16 [(_Bool)1]);
        }
        arr_30 [i_1] [i_1] = ((arr_20 [8U] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((unsigned int) arr_15 [i_1] [i_1] [i_1]))));
    }
    var_26 = ((/* implicit */_Bool) ((max((((unsigned int) 2055738867U)), (var_17))) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
}
