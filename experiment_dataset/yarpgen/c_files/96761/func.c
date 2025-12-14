/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96761
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0 - 1] [i_1] |= (signed char)11;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_10 = min((var_4), ((signed char)-22));
                            var_11 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_25 [i_4] [i_5] [(signed char)0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) min(((signed char)21), (var_4)))) : (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-22))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_6 + 1])))))))) : (((/* implicit */int) var_3))));
                                var_12 -= ((/* implicit */signed char) ((((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 1] [(signed char)3])))) + (2147483647))) >> (((/* implicit */int) arr_17 [i_8] [i_7] [i_5]))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-22))))) ? (((((((/* implicit */int) arr_15 [i_7])) != (((/* implicit */int) (signed char)-92)))) ? (((/* implicit */int) min(((signed char)7), (var_5)))) : (((((/* implicit */int) (signed char)7)) ^ (((/* implicit */int) (signed char)100)))))) : (((/* implicit */int) min((min(((signed char)-88), (arr_15 [(signed char)0]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_20 [i_4] [i_5] [i_5])))) + (((((/* implicit */_Bool) arr_14 [i_4])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_21 [i_5] [i_4] [i_5] [i_4] [i_4])))) : (((/* implicit */int) arr_14 [i_4]))))));
            }
        } 
    } 
    var_15 = ((signed char) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 15; i_11 += 2) 
                {
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_16 = arr_35 [(signed char)5] [(signed char)15];
                            arr_37 [i_9] [i_11 + 1] [(signed char)13] [i_12] = arr_15 [(signed char)16];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                arr_45 [(signed char)2] [i_10] [i_13] [i_14] [(signed char)14] = var_5;
                                arr_46 [i_9] [i_10] [(signed char)15] [(signed char)6] = var_8;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_54 [i_16]), (arr_48 [i_16] [(signed char)8])))) : (((/* implicit */int) min(((signed char)30), (arr_51 [i_16] [i_17] [i_18]))))))));
                    arr_55 [i_16] = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_5))), (((((/* implicit */_Bool) arr_54 [i_18])) ? (((/* implicit */int) ((signed char) (signed char)8))) : (((/* implicit */int) min((var_6), (arr_50 [(signed char)3] [i_17]))))))));
                    /* LoopNest 2 */
                    for (signed char i_19 = 3; i_19 < 20; i_19 += 2) 
                    {
                        for (signed char i_20 = 3; i_20 < 22; i_20 += 1) 
                        {
                            {
                                var_18 = min((((signed char) min((var_8), ((signed char)127)))), (arr_47 [(signed char)9]));
                                var_19 = arr_58 [i_20 - 3] [i_17] [(signed char)8] [i_20] [i_20] [i_17];
                                arr_60 [i_19] [(signed char)12] [i_18] [i_18] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> ((((~(((/* implicit */int) var_8)))) - (71)))))) ? ((~(((/* implicit */int) min((var_4), ((signed char)(-127 - 1))))))) : (((/* implicit */int) ((signed char) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_49 [(signed char)0] [i_18] [i_16])) + (144)))))))));
                                arr_61 [(signed char)8] [i_19] [i_18] [(signed char)3] [i_19] = arr_52 [(signed char)8];
                                var_20 = arr_56 [i_19] [(signed char)9] [i_16];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
