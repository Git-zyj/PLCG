/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58231
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
    var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
    var_21 |= (!(min((var_18), (var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = (!(arr_0 [i_0]));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (~(((arr_8 [i_0] [i_2] [i_1] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_19))))));
                        arr_10 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = (!((!(arr_5 [(_Bool)1] [(_Bool)1] [i_2] [i_0]))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_24 += arr_11 [i_4 - 1];
        arr_13 [i_4] = var_1;
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_23 [i_4] [i_5] [(_Bool)1] [i_7] = (!(max((((_Bool) var_8)), (arr_18 [i_4 - 1] [(_Bool)1] [i_6 - 1]))));
                        var_25 = ((/* implicit */_Bool) ((((var_3) ? (((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_6])) : ((~(((/* implicit */int) arr_12 [i_7])))))) & (((/* implicit */int) min((((((/* implicit */int) var_19)) < (((/* implicit */int) arr_20 [i_4 - 1] [i_5] [i_5] [i_7])))), (var_9))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])) & (((/* implicit */int) ((((/* implicit */int) arr_19 [i_4] [i_4])) >= (((/* implicit */int) arr_22 [i_4] [(_Bool)0] [i_4 - 1] [(_Bool)0]))))))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_33 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_8])) ^ (((arr_0 [i_10 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_10 - 1]))))));
                    arr_34 [i_8] [i_9] [i_8] [i_10] = (_Bool)1;
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_41 [i_8] = (!(((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) * ((-(((/* implicit */int) (_Bool)0))))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) ((_Bool) arr_38 [i_9] [i_10 - 1] [i_11] [i_11] [(_Bool)1] [i_12]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
    } 
}
