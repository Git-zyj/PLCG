/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72852
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] [0ULL] [(signed char)0] [(signed char)10] [i_3] |= (~(((/* implicit */int) (signed char)-24)));
                            arr_13 [0ULL] [i_1] [i_2] [i_1] &= ((/* implicit */int) max((arr_9 [i_0] [18] [i_2] [i_3] [i_3]), (var_1)));
                            var_12 = ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) arr_1 [i_1] [7ULL])), (arr_4 [i_0] [i_0] [i_0]))) | (((arr_4 [i_3] [i_2] [i_1]) + (arr_6 [i_0] [i_1] [i_2] [12ULL]))))) << (((max((max((var_5), (((/* implicit */unsigned long long int) (signed char)-74)))), (((/* implicit */unsigned long long int) var_9)))) - (18446744073709551541ULL)))));
                            arr_14 [i_3] [(signed char)19] [i_3] = arr_7 [i_0] [i_1] [(signed char)10];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) var_3)), (max((max((arr_3 [i_5]), (((/* implicit */int) var_3)))), (((/* implicit */int) max((var_1), (var_8))))))));
                                arr_25 [i_0] [9ULL] [0] [i_4] [i_5] [(signed char)6] = ((/* implicit */unsigned long long int) var_10);
                                var_13 *= arr_19 [i_0] [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 8; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_37 [i_7] = min((max((7ULL), (((/* implicit */unsigned long long int) 224062574)))), (((/* implicit */unsigned long long int) arr_17 [i_7] [i_8] [i_9] [17])));
                            var_14 = ((/* implicit */int) arr_20 [i_7] [i_8] [i_9 - 1]);
                            arr_38 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_7])))), ((!(((/* implicit */_Bool) var_0))))))) | ((+(var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_11)))) ^ (((((/* implicit */_Bool) arr_19 [i_7] [9ULL])) ? (var_4) : (((/* implicit */int) (signed char)-30))))))) ? (-1153870331) : (((((/* implicit */int) ((((/* implicit */int) arr_42 [i_12] [i_11] [i_8] [i_7])) < (var_4)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_8] [i_12])) && (((/* implicit */_Bool) arr_11 [16] [i_11] [6] [14] [i_12]))))))))))));
                            arr_44 [i_7] [i_8] [i_11] [i_12] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((arr_5 [i_12] [(signed char)8] [i_7]) + (((int) var_3))))) : (max((((/* implicit */unsigned long long int) arr_26 [i_7] [1])), ((+(10639754702172487332ULL))))));
                            arr_45 [i_8] = ((max((((/* implicit */unsigned long long int) arr_5 [i_11] [i_8] [i_7])), (var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            {
                                arr_58 [i_17] [(signed char)12] [i_15] [i_14] [3] = ((/* implicit */unsigned long long int) arr_16 [8] [i_14] [i_15]);
                                arr_59 [i_13] = ((/* implicit */signed char) ((int) (-(min((arr_20 [i_15] [i_14] [i_13]), (26ULL))))));
                                arr_60 [6] = ((/* implicit */unsigned long long int) arr_57 [(signed char)10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 3; i_18 < 17; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)112), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))))))));
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_13] [i_18 - 3] [i_15] [i_18] [i_19] [i_18]))))), (var_9)));
                                arr_66 [i_13] [i_13] [i_13 + 1] [i_18] [(signed char)12] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 0)) + (18446744073709551615ULL))) < (0ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                arr_71 [i_13] [i_14] [(signed char)1] [i_20] [i_21] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_56 [i_21] [i_21] [i_20] [i_13 - 1]))))), (arr_63 [i_13] [11ULL] [i_13 - 1] [10] [i_21] [i_21]));
                                arr_72 [15] [9ULL] [i_15] [3ULL] [i_13 + 1] = ((((/* implicit */_Bool) arr_53 [i_13] [i_15] [(signed char)10])) ? (max((((/* implicit */int) var_3)), (arr_0 [i_15]))) : (((((/* implicit */_Bool) ((unsigned long long int) 7806989371537064274ULL))) ? (((/* implicit */int) max(((signed char)101), (var_0)))) : (((/* implicit */int) arr_48 [14])))));
                                arr_73 [6] [i_20] [i_15] [i_15] [(signed char)12] [i_13] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) 5)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 16; i_23 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-24)))) / (((/* implicit */int) (signed char)108)))))));
                                var_19 = ((/* implicit */int) min((var_19), (arr_68 [i_13] [i_14] [3ULL] [i_23 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 18; i_24 += 3) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            {
                                arr_83 [(signed char)3] [3ULL] [(signed char)2] [11] [i_25] [i_25] [(signed char)14] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) 7806989371537064293ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_19 [i_14] [i_14]))), (((var_2) << (((arr_77 [i_25]) - (18377745677767247329ULL)))))))));
                                arr_84 [i_13] [i_14] [i_15] [(signed char)5] [i_25] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (max((max((arr_4 [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_10 [i_25])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 11430358064042898746ULL)))))))));
                                arr_85 [i_13 + 3] [8] [i_15] [i_24] [i_25] = min((-1523542452), (arr_3 [(signed char)7]));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
