/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83881
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1] [i_0 - 1])), (max((((/* implicit */unsigned int) arr_2 [i_1] [i_0 + 2])), (max((((/* implicit */unsigned int) var_12)), (var_11))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) max((arr_2 [i_0] [i_1]), (var_1))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 -= max(((_Bool)0), ((!((((_Bool)1) && (((/* implicit */_Bool) 1899452002U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1942186197U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2])))))));
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 4294967276U)) || ((_Bool)0))))), (max((max((((/* implicit */unsigned int) var_4)), (var_9))), ((((_Bool)1) ? (2169448565U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) 4294967276U)) ? (3849857211U) : (5548841U)))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((arr_0 [6U] [6U]), ((((_Bool)0) ? (3849857211U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_6] [i_0] [i_1] [i_0 + 1] = ((((/* implicit */int) arr_25 [i_7] [i_1])) < (((/* implicit */int) arr_11 [i_7] [i_0] [2U] [i_1] [i_0])));
                                var_16 = arr_13 [i_7] [i_5] [i_0];
                                arr_27 [i_0] [i_6] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_7] [i_7] [i_6 + 1] [i_6 - 1] [i_0 + 2]) ? (((/* implicit */int) arr_23 [i_6 + 1] [i_6] [i_0] [i_6] [i_0] [i_5] [i_5])) : (((/* implicit */int) arr_9 [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
                                var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8] [i_0])) ^ (((/* implicit */int) arr_25 [i_8] [i_1]))));
                                arr_34 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_9 - 1] [i_0 + 1])) * (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (_Bool)1)))))));
                                var_19 += (+(var_11));
                                arr_35 [i_9 - 1] [i_8] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_9] [i_0] [i_0 + 2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((((/* implicit */unsigned int) var_1)), (var_8)))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_7)))) | ((~(((/* implicit */int) var_12))))))) ? (min((((/* implicit */unsigned int) var_1)), (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 4294967295U))))))));
}
