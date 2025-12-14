/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8526
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
    var_11 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = var_10;
                    arr_7 [i_0] [i_1 - 1] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] = arr_3 [i_1 - 1];
                                var_12 = arr_11 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)0] [(_Bool)1] [i_2];
                                arr_15 [(_Bool)1] [(_Bool)1] [i_2] [i_0] [i_4 - 1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                arr_16 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_0] = ((_Bool) (~(((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0]))))));
                                var_13 -= var_10;
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) == (min((((/* implicit */int) max((var_10), ((_Bool)1)))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */int) min((arr_18 [i_0] [i_0] [(_Bool)1] [i_0]), (var_4)))), ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(max((var_8), ((_Bool)1))))))));
                    var_14 = (_Bool)0;
                    arr_21 [i_0] [i_1] = (_Bool)1;
                    arr_22 [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1 - 1] [i_5] [i_5]))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) min((arr_9 [i_0]), (var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_15 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_6] [i_6] [i_6]))));
                    var_16 &= ((/* implicit */_Bool) min((((/* implicit */int) min((max((var_2), (var_2))), (min(((_Bool)1), ((_Bool)1)))))), (max((((((/* implicit */int) var_7)) / (((/* implicit */int) var_9)))), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_6 - 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [(_Bool)0] [i_1 - 1] [i_1 - 1] [i_7] [i_1 - 1] &= ((/* implicit */_Bool) (((((_Bool)1) || (arr_13 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [(_Bool)1]))) ? (max(((((_Bool)0) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 1] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_10 [i_8] [i_1 - 1] [i_6 - 1])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
                                arr_30 [i_0] [i_0] [i_7] [(_Bool)1] = ((/* implicit */_Bool) ((arr_13 [i_0] [i_1 - 1] [i_6] [i_7] [i_8]) ? (((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */int) arr_12 [i_7] [i_1 - 1] [i_0] [i_7] [i_6 - 1] [i_1] [i_8])) + (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                                arr_31 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / ((-(((/* implicit */int) max(((_Bool)1), (arr_23 [i_0] [i_0] [i_0]))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_6 - 1] [i_7] [i_8] [i_0])) + (((/* implicit */int) (_Bool)1)))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_6 - 1])))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((arr_23 [i_1] [i_1] [i_1 - 1]), ((_Bool)1)))))) : (((/* implicit */int) ((_Bool) arr_12 [(_Bool)1] [i_1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])))));
                    var_19 = ((/* implicit */_Bool) ((((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) min((arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_0]), ((_Bool)1))))));
                }
                arr_33 [i_0] [i_0] = (_Bool)1;
                arr_34 [(_Bool)0] &= arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [(_Bool)1];
            }
        } 
    } 
    var_20 = ((min((max((var_6), ((_Bool)1))), (var_10))) || ((_Bool)1));
    var_21 = max((var_3), ((_Bool)0));
}
