/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9585
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
    var_18 = var_4;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((unsigned int) var_4);
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 = arr_3 [i_0];
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (+(946074657U)));
                            var_22 = ((/* implicit */_Bool) ((arr_1 [i_0] [i_1 - 1]) ? (arr_4 [(_Bool)1] [i_1 - 1] [i_2]) : (var_9)));
                            var_23 = ((_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [9U] [i_1 - 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            var_24 = ((/* implicit */_Bool) max((var_24), (arr_14 [1U])));
            var_25 = ((/* implicit */unsigned int) min((var_25), ((+(946074657U)))));
            var_26 = arr_10 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1] [i_0 - 1] [i_0];
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
        {
            var_27 = arr_14 [i_0];
            var_28 = ((/* implicit */unsigned int) var_5);
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_29 ^= ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
                            var_30 = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_7 + 1]));
                            var_31 &= ((/* implicit */_Bool) arr_9 [i_6] [i_7 + 1] [i_8] [i_8] [i_9]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) ((arr_30 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ (arr_30 [1U] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    var_34 = ((_Bool) arr_25 [i_0] [i_0 - 1] [(_Bool)1] [i_12] [(_Bool)1] [(_Bool)1]);
                    var_35 = ((arr_18 [i_0 - 1] [(_Bool)1] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_29 [i_0 - 1] [i_10])))) : (arr_21 [9U] [i_10] [i_11] [i_0 - 1]));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */_Bool) arr_7 [i_0] [0U] [i_11] [i_10]);
                    var_37 = ((unsigned int) 3348892638U);
                    var_38 |= ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_11]);
                    var_39 -= ((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0 - 1]);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_40 &= arr_34 [i_0 - 1] [0U] [0U] [i_14];
                    var_41 = ((_Bool) 946074657U);
                }
                /* LoopNest 2 */
                for (unsigned int i_15 = 2; i_15 < 13; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_42 -= ((/* implicit */_Bool) 3348892638U);
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_16 [i_0] [i_16]))));
                            var_44 = (~(3348892638U));
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_45 = ((unsigned int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                var_46 = arr_21 [i_17] [i_17] [i_10] [i_0 - 1];
            }
            var_47 = (!(var_8));
        }
        var_48 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_0] [1U] [0U] [i_0 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_49 = ((/* implicit */unsigned int) min((var_49), (3348892641U)));
        var_50 = (_Bool)1;
    }
}
