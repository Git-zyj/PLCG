/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80571
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [(unsigned short)20] = ((/* implicit */int) arr_2 [i_0]);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65519)), (((((/* implicit */int) (unsigned short)2)) | (((/* implicit */int) (unsigned short)5))))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_19 = ((((2147483647) / (((/* implicit */int) arr_4 [i_6 + 1])))) ^ (((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_4] [i_6])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_15)))));
                                arr_18 [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)16)) || (((/* implicit */_Bool) arr_17 [i_6] [i_4] [i_6 + 1] [i_6 + 3] [i_6 - 2] [i_6 + 1])))), (((((var_13) << (((((/* implicit */int) (unsigned short)25637)) - (25637))))) == (((/* implicit */int) arr_16 [(unsigned short)6] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_36 [i_7] [i_7] [(unsigned short)16] = (unsigned short)47215;
                                var_20 = max(((-(((/* implicit */int) (unsigned short)5)))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_22 [i_8] [i_7])))))));
                                var_21 = max((min((min(((unsigned short)50591), (var_14))), (arr_5 [i_9] [i_9] [(unsigned short)15] [i_9]))), (((unsigned short) min(((unsigned short)38313), ((unsigned short)25631)))));
                                arr_37 [i_7] [i_7] [i_7] [(unsigned short)11] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7])) ? (((/* implicit */int) max(((unsigned short)38649), (var_1)))) : (((/* implicit */int) arr_31 [i_7] [(unsigned short)15] [(unsigned short)4] [i_10]))))) ? (((/* implicit */int) (unsigned short)39908)) : (((((/* implicit */int) min((arr_4 [i_7]), (var_12)))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */int) (unsigned short)21)) & (((/* implicit */int) (unsigned short)42713)))) | (((/* implicit */int) arr_16 [i_7] [i_7] [(unsigned short)12])))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) ^ (arr_27 [i_7] [i_7] [i_7])))) ? ((~(((/* implicit */int) (unsigned short)46523)))) : ((~(((/* implicit */int) arr_16 [i_7] [i_12] [i_12]))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((int) (+(8323072)))))));
                                arr_43 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)4))) || (((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)50596), ((unsigned short)22820)))))))));
                            }
                        } 
                    } 
                    arr_44 [i_7] [i_7] [(unsigned short)8] [i_7] = (-((~((~(((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [7])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 9; i_14 += 2) 
    {
        for (unsigned short i_15 = 2; i_15 < 6; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) var_16);
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 1; i_17 < 9; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_16 [i_17 + 1] [i_15] [i_17])), (arr_23 [i_15 + 4]))))))));
                                arr_58 [i_14 - 1] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) (unsigned short)65519);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 4; i_19 < 6; i_19 += 2) 
                    {
                        for (int i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)50414)) ? (((/* implicit */int) (unsigned short)21171)) : (((/* implicit */int) (unsigned short)65519))))))) ? (max((arr_56 [i_14 - 1] [i_14] [i_15] [i_15 - 1] [i_16] [i_19 - 3] [i_14 - 1]), (((((/* implicit */int) arr_30 [i_15] [i_15])) / (-1885233361))))) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)39900)))) < (((/* implicit */int) arr_30 [i_19 + 3] [i_19 + 1])))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((((arr_23 [i_14]) ^ (((/* implicit */int) (unsigned short)65519)))) * (((/* implicit */int) (unsigned short)0)))))))));
                                arr_63 [i_14 + 1] [i_14 + 1] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_19] [i_19] [i_19 + 3] [i_19 + 2])) ? (((/* implicit */int) arr_12 [i_19] [i_19] [i_19 - 1] [i_19])) : (-1389295203)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)25653)) ? (((/* implicit */int) (unsigned short)43862)) : (((/* implicit */int) (unsigned short)50591)))) != (((/* implicit */int) var_15))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65527)) && (((/* implicit */_Bool) var_13)))))));
                                arr_64 [i_14] [i_16] = (-(((((/* implicit */_Bool) 341676710)) ? (((/* implicit */int) max(((unsigned short)14109), ((unsigned short)14099)))) : (arr_28 [i_15] [i_15] [8] [i_15]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 1; i_21 < 7; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 10; i_22 += 2) 
                        {
                            {
                                var_28 = min((((/* implicit */int) ((arr_34 [(unsigned short)16] [i_14 + 1] [(unsigned short)16] [i_21 + 1] [i_15 - 1] [i_14 - 1] [i_21 + 1]) > (((/* implicit */int) var_8))))), (((arr_34 [i_15] [i_14 - 1] [i_22] [i_21] [i_15 + 3] [i_14] [i_21 - 1]) % (arr_34 [i_14] [i_14 - 1] [i_16] [i_14 + 1] [i_15 + 1] [i_15 + 1] [i_21 + 1]))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_20 [i_14 + 1]) : (((/* implicit */int) var_14))))) ? ((-(arr_20 [i_14 - 1]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)14109)) == (arr_20 [i_14 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = (+((~(max((var_2), (((/* implicit */int) var_15)))))));
}
