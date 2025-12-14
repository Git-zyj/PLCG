/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81719
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    arr_6 [i_2] [i_1 - 2] [i_0 - 1] = ((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)117)), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_7)))))), (((arr_3 [i_0 - 1] [i_1 + 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
                    var_13 = ((/* implicit */_Bool) min((((((((/* implicit */int) (signed char)-116)) * (((/* implicit */int) arr_1 [i_0 - 1])))) / (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0 - 1] [i_1 - 2])), (arr_4 [i_2] [i_1 - 1] [i_0 - 1])))))), (((/* implicit */int) (((~(((/* implicit */int) (signed char)46)))) != (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_8))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-21)) / (((/* implicit */int) arr_10 [i_3] [i_3 + 4] [i_3 + 4] [i_3]))));
                        arr_12 [i_0] [i_1 - 2] [i_3] [i_3 + 3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 + 3] [i_3] [i_3 + 3] [i_3]))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_14 &= ((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */int) (signed char)-33)) != (((/* implicit */int) (signed char)-47))))))), (((/* implicit */int) (signed char)81))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_8))))) : (((((/* implicit */int) max(((signed char)58), ((signed char)4)))) * ((+(((/* implicit */int) (signed char)86)))))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_17 [i_5 + 1] [i_2 - 1] [i_1 + 1] [i_0] = arr_3 [i_0 - 1] [i_0];
                        arr_18 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                        arr_19 [i_5 + 1] [i_2] [i_1] [i_0 - 1] = ((((/* implicit */int) ((((/* implicit */int) (signed char)30)) != (((/* implicit */int) (signed char)127))))) != (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        var_16 |= ((signed char) min((((/* implicit */int) max(((signed char)-80), (((/* implicit */signed char) (_Bool)1))))), ((-(((/* implicit */int) var_2))))));
                    }
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_6])) / (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) arr_8 [i_6 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0 - 1]))))));
                    arr_23 [i_6] = ((/* implicit */_Bool) var_11);
                }
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1 - 1] [i_1] [i_7] [i_7 - 2]);
                    arr_27 [i_0 - 1] = ((((/* implicit */int) ((signed char) (_Bool)1))) != (((/* implicit */int) (signed char)117)));
                    arr_28 [i_7] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)13))));
                    arr_29 [i_7 - 2] [i_7] [i_1 - 2] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_4 [i_7] [i_7 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_0 [i_7 - 2] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)20)) / (((/* implicit */int) var_9))))));
                }
                /* vectorizable */
                for (signed char i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    arr_34 [i_8 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_8 + 2] [i_1 - 2] [i_1 + 1] [i_0 - 1])) != (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)93))))));
                    arr_35 [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_1 - 1] [i_1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_14 [i_0] [i_1 - 2] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((_Bool) arr_21 [i_1] [i_1])))));
                    arr_36 [i_8 + 2] [i_0 - 1] [i_8 + 1] = (_Bool)1;
                    var_19 = ((((/* implicit */int) arr_25 [i_0] [i_1 - 1])) != (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_8 + 1] [i_0 - 1])));
                }
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 4; i_10 < 19; i_10 += 4) 
                    {
                        for (signed char i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_39 [i_0 - 1] [i_1]))))))));
                                var_21 = ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_9] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-88))));
                            }
                        } 
                    } 
                } 
                arr_46 [i_0 - 1] [i_1 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                arr_47 [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-120), (((/* implicit */signed char) (_Bool)1))))) / (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 2])))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_44 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]), (var_11)))) ? (((/* implicit */int) var_9)) : (((var_3) ? (((/* implicit */int) arr_30 [i_0 - 1] [i_0] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) (_Bool)0))))))) ? ((((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 2])))) * ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_0 - 1])))))) : (((((var_5) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_33 [i_1 - 2] [i_1 - 2] [i_0])))) / (((/* implicit */int) min((arr_15 [i_0] [i_1 + 1] [i_1] [i_1 - 2]), ((signed char)63))))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) var_2);
}
