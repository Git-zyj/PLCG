/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85439
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((1247189847U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) != (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                    arr_9 [(unsigned short)6] [i_2] [i_2] [i_1] = var_13;
                    var_18 = arr_5 [i_0] [i_1] [i_2];
                    arr_10 [i_2] &= ((/* implicit */unsigned short) (_Bool)1);
                    arr_11 [i_1] = ((/* implicit */unsigned short) arr_2 [i_0]);
                }
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) var_10)))));
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) && (((/* implicit */_Bool) var_8)))))) != (((1247189845U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [17U] [1U] [i_1]))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_3]))))))) : (min(((-(65528U))), (max((((/* implicit */unsigned int) var_3)), (arr_1 [i_3])))))));
                }
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) var_10);
                    arr_19 [i_1] [(unsigned short)3] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_5)))));
                    arr_20 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0])))), (((/* implicit */int) arr_15 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (arr_15 [i_4] [i_1] [i_0]))))) : ((~(arr_1 [i_1])))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_6] [17U] = arr_7 [i_1];
                            var_22 = (!((_Bool)1));
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_15 [i_6 - 1] [i_6] [i_6])), (((unsigned short) arr_15 [i_6 - 1] [i_1] [(_Bool)1]))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) << (((/* implicit */int) arr_17 [i_1] [i_1] [i_0] [i_1]))))), (((4012931667U) << (((((/* implicit */int) var_10)) - (44884)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_10);
}
