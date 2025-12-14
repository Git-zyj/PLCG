/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72978
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [21U] [i_0] = arr_5 [i_0] [2U] [1U] [i_0];
                    arr_7 [i_0] [i_1] [17U] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((arr_5 [i_0] [i_1] [19U] [14U]) > (arr_4 [13U] [i_0] [i_1] [16U])))))) != (((/* implicit */int) ((var_10) == (max((arr_1 [i_2]), (var_9))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((arr_1 [i_0]) + (((var_12) - (var_5))))) > (((arr_5 [i_0] [6U] [i_1] [i_1]) / (((arr_3 [21U] [20U]) & (var_8)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((arr_1 [14U]) > (((max((var_11), (var_13))) * (var_5)))));
        arr_10 [18U] [4U] = ((/* implicit */unsigned int) ((((arr_0 [22U]) + (var_7))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (arr_4 [i_0 - 1] [10U] [10U] [10U])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 4; i_4 < 23; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    arr_19 [i_3] [i_3] [18U] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((127U) > (3635836622U)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 4] [i_4 - 4] [i_4 + 2])) && (((/* implicit */_Bool) arr_15 [2U] [i_4 - 2] [i_4 - 3] [i_4 + 1])))))));
                    arr_20 [i_5] [i_4] = ((((arr_11 [i_3]) * (max((var_0), (arr_18 [13U] [i_5] [i_5] [i_4]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_4 - 2]) != (arr_13 [i_4 - 1]))))));
                }
            } 
        } 
        arr_21 [8U] = ((/* implicit */unsigned int) ((max((arr_17 [i_3] [i_3] [i_3] [i_3]), (arr_17 [24U] [i_3] [i_3] [i_3]))) >= (max((((/* implicit */unsigned int) ((var_3) >= (var_9)))), (max((var_13), (var_13)))))));
    }
    for (unsigned int i_6 = 4; i_6 < 8; i_6 += 3) 
    {
        arr_24 [6U] [2U] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_6 - 1]) != (var_4))))) != (((((arr_15 [20U] [0U] [0U] [i_6]) ^ (arr_13 [2U]))) >> (((arr_4 [i_6] [8U] [i_6 - 2] [2U]) - (2495210825U)))))));
        arr_25 [2U] [i_6] = max((max((524287U), (var_8))), (((arr_4 [i_6] [i_6] [i_6 + 2] [i_6 - 4]) + (arr_4 [9U] [i_6] [i_6 + 1] [i_6 - 4]))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) ((((arr_22 [i_6 - 2]) * (1726998046U))) >= (1349786764U)));
        arr_27 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [4U] [i_6] [0U] [i_6]))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    arr_34 [i_7] [i_9] [i_9] |= ((/* implicit */unsigned int) ((1726998046U) != (1704539983U)));
                    arr_35 [i_7] = arr_14 [i_7];
                    arr_36 [9U] [17U] [17U] [i_7] = max((((((var_5) % (arr_12 [12U]))) >> (((max((2412879156U), (418804482U))) - (2412879143U))))), (var_13));
                }
            } 
        } 
        arr_37 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_1), (arr_14 [i_7])))) && (((((/* implicit */_Bool) 32512U)) || (((/* implicit */_Bool) 4294967295U)))))) && (((/* implicit */_Bool) arr_12 [i_7]))));
    }
    var_14 = (~(((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 3) 
    {
        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            {
                arr_42 [21U] [20U] [9U] = ((arr_32 [12U] [i_10 + 3] [12U]) * (arr_1 [i_10 + 3]));
                arr_43 [7U] = (-(var_6));
                arr_44 [14U] [i_10] [5U] = max((var_4), (arr_11 [17U]));
                arr_45 [i_10] [i_10] [i_10] = arr_41 [17U] [0U];
            }
        } 
    } 
    var_15 = var_0;
    var_16 = ((max((var_0), (((var_2) << (((var_7) - (317469479U))))))) * (var_10));
}
