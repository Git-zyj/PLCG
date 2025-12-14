/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61285
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
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (max((var_9), (((/* implicit */unsigned int) 407317271))))))) : (((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_10))))) + (-8452545373229414787LL))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-24)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_0])), (var_4)));
            arr_6 [(unsigned short)0] [i_1] = ((/* implicit */long long int) (+(9552338656020488466ULL)));
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(var_5))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) /* same iter space */
        {
            arr_9 [(signed char)10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_11) / (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))))))), (((((/* implicit */_Bool) (short)14335)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (var_2)))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((unsigned int) var_10));
                            var_16 = ((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_1 [i_4]))));
                            arr_18 [i_0] [i_0] [2] = ((/* implicit */long long int) ((((var_2) != (((/* implicit */unsigned long long int) var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [14ULL] [i_4] [i_0] [7ULL] [i_0] [7ULL])) << (((var_1) - (57642472)))))) ? (arr_17 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)13] [i_2]))) & (var_9))))) : (((((/* implicit */_Bool) var_2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(signed char)4] [i_3] [i_2] [i_5] [(short)14]))) <= (arr_14 [i_0] [i_2] [i_3] [i_4] [3])))))))));
                        }
                    } 
                } 
            } 
            arr_19 [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_0))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 2]))))));
            arr_20 [6LL] |= ((/* implicit */_Bool) 1223305901U);
            arr_21 [i_0] [i_2] |= ((/* implicit */long long int) var_1);
        }
        for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */short) 2769393438U);
            var_18 |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_7]) | (728247580U)))) ? (((((/* implicit */_Bool) arr_2 [i_6] [i_6])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [(_Bool)1] [i_0] [6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_0)))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((unsigned char) (-(-386341052)))))));
            }
            for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) max((min((((arr_27 [i_0]) - (((/* implicit */unsigned long long int) 3827996274U)))), (5248397684058651907ULL))), (((/* implicit */unsigned long long int) var_8))));
                arr_29 [(_Bool)1] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2769393438U))))))));
                arr_30 [i_0] [i_6] [i_8] = ((/* implicit */long long int) var_11);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 13; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_22 += ((/* implicit */unsigned long long int) 728247577U);
                    arr_36 [i_0] [4U] [i_6] [i_10] = ((/* implicit */short) var_2);
                }
                var_23 += ((unsigned long long int) var_0);
                var_24 = ((((/* implicit */_Bool) 16508062600014087233ULL)) && (((/* implicit */_Bool) arr_35 [(short)9] [i_6] [i_6] [i_6] [i_6] [i_6])));
                arr_37 [i_0] [i_6] [i_6] [i_9] = ((/* implicit */int) ((((var_7) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (913803775219501291ULL))) > (((/* implicit */unsigned long long int) var_4))));
            }
        }
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max(((unsigned short)17804), (((/* implicit */unsigned short) var_3)))))));
    }
    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) 
    {
        arr_41 [(signed char)14] &= ((/* implicit */_Bool) (unsigned short)47703);
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((3423424182U) << (((-1831483211) + (1831483224))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_45 [i_12] [i_12] = (+(arr_42 [i_12] [5U]));
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned int) ((max((var_5), (((/* implicit */long long int) var_10)))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_42 [i_12] [i_12]) : (((/* implicit */int) ((signed char) arr_42 [i_12] [i_12]))))))));
    }
    var_27 = var_9;
}
