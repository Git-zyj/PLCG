/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87071
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (262143U) : (arr_0 [i_0])))) ? (var_4) : (((((/* implicit */_Bool) 2618574962U)) ? (9U) : (346655323U))))) > ((((!(((/* implicit */_Bool) 3058355347U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) > (0U))))) : ((-(4221399036U)))))));
        arr_2 [i_0] = ((max((1025431509U), (var_18))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 738330078U)) ? (0U) : (841060569U)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (1446709665U) : (4294967286U))))) - (1446709639U))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (160770386U)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_21 = (-(arr_4 [i_1] [i_1 + 2]));
        var_22 = ((((/* implicit */_Bool) 3837965469U)) ? (((((/* implicit */_Bool) 73568259U)) ? (arr_3 [i_1]) : (var_10))) : (((((/* implicit */_Bool) 4294967295U)) ? (var_15) : (arr_3 [i_1 + 2]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_23 = (-(arr_3 [i_2]));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_17 [i_3] [i_3] [i_4] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4195943298U)) ? (3780231428U) : (2705931921U)))) ? (3180533338U) : (arr_11 [i_6] [i_3] [i_3] [i_2])))) ? ((-(arr_12 [i_2] [i_5] [i_6]))) : (((3712503618U) << (((2919600325U) - (2919600315U))))));
                            arr_18 [i_6] [i_4] = 923117572U;
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */_Bool) 651381795U)) ? (var_4) : (4294967295U));
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_25 = 3969431458U;
                        var_26 ^= arr_6 [i_2];
                    }
                } 
            } 
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_27 ^= arr_3 [i_9];
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 3; i_13 < 15; i_13 += 1) 
                        {
                            {
                                arr_39 [i_12] [i_13 + 1] = ((var_7) >> ((((~(var_0))) - (4157133723U))));
                                arr_40 [i_12] [i_10] = var_14;
                                var_28 = var_10;
                                arr_41 [i_9] [i_12] [i_11] [i_12] [i_13] = ((((/* implicit */_Bool) (-(arr_36 [i_13 - 1] [i_12] [i_13] [i_13 - 3] [i_13] [i_12] [i_13])))) ? (((((/* implicit */_Bool) 2919600325U)) ? (arr_36 [i_13 - 1] [i_12] [i_13 - 1] [i_13 - 3] [i_13] [i_12] [i_13]) : (2716336990U))) : ((-(var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                        {
                            {
                                arr_47 [i_9] [i_15] [i_15] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((0U) < (4195943305U)));
                                var_29 = (((-(arr_45 [i_15] [i_10]))) << (((((((/* implicit */_Bool) 0U)) ? (arr_45 [i_15] [i_10]) : (702530687U))) - (702530683U))));
                                arr_48 [i_15] [i_10] = ((((((/* implicit */_Bool) arr_29 [i_9])) ? (2919600325U) : (var_11))) << (((max((arr_12 [i_9] [i_9] [i_11]), (arr_23 [i_11] [i_10] [i_11] [i_14] [i_15] [i_11]))) - (3138995358U))));
                                arr_49 [i_9] [i_9] [i_15] [i_9] = 15U;
                                arr_50 [i_9] [i_10] [i_11] [i_14] [i_15] [i_15] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (arr_21 [i_9] [i_9]) : (arr_44 [i_9] [i_9] [i_9] [i_9] [i_14] [i_14] [i_15])))) ? (((((/* implicit */_Bool) 4232185916U)) ? (1048320U) : (3770534983U))) : (((arr_42 [i_10] [i_10]) << (((arr_21 [i_14] [i_15]) - (4131241030U)))))))) ? (((((/* implicit */_Bool) 202605571U)) ? (4292424692U) : (4195943298U))) : (((((/* implicit */_Bool) 1887271379U)) ? (4014896639U) : (0U))));
                            }
                        } 
                    } 
                    arr_51 [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10] [i_11])) ? (2813200694U) : (4092361734U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (4294967295U) : (0U))) < (((((/* implicit */_Bool) var_12)) ? (240U) : (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]))))))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_30 [i_9] [i_10]) : (arr_30 [i_11] [i_10]))));
                    arr_52 [i_9] = ((/* implicit */unsigned int) ((var_8) < (((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9])) ? (0U) : (arr_20 [i_9] [i_9] [i_9])))));
                }
            } 
        } 
    } 
    var_30 = var_8;
}
