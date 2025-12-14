/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92035
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
    var_12 = ((/* implicit */unsigned short) ((long long int) max((min((1U), (var_1))), (var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) var_5);
            arr_4 [i_1] |= (+((-(var_8))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 |= ((((/* implicit */_Bool) 0U)) ? (0U) : (0U));
                    arr_12 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
                    arr_13 [i_3] [i_1] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_5))))));
                }
                for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) var_3);
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) 8388576U)) : (0LL)));
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_4 + 1])) & (((/* implicit */int) arr_7 [i_0]))));
                }
                arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_1] [5])));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0] [9U] [i_0] [i_0] = ((/* implicit */signed char) ((arr_5 [i_0] [i_5] [i_5 + 2] [i_5 + 2]) == (arr_5 [7U] [i_1] [i_5 + 1] [i_5])));
                            var_18 = ((/* implicit */_Bool) (-(arr_21 [13LL] [13LL] [i_5 - 1] [i_5] [(unsigned short)4] [i_5])));
                            var_19 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6795577412398012413LL)) ? (-1LL) : (((/* implicit */long long int) 4294967295U))));
            }
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
            {
                arr_25 [i_0] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) -716956836))) : ((~(((/* implicit */int) var_5))))));
                var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_2))))));
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
            {
                arr_29 [i_0] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(signed char)12] [8U] [i_8])) && (((/* implicit */_Bool) arr_3 [i_8] [i_1] [i_0]))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8] [i_1]))) + (var_1)));
                arr_30 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) ((short) 0LL)))));
            }
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_9]) * (var_2)))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_20 [i_10] [10U] [(unsigned char)3] [i_0] [(unsigned char)0] [i_0])))) : (((/* implicit */int) ((signed char) arr_34 [i_0] [i_1] [i_9] [i_0])))));
                        var_24 = ((/* implicit */unsigned char) var_0);
                        arr_37 [i_10] [i_0] [i_0] [i_0] = ((unsigned int) var_6);
                        arr_38 [i_9] [i_1] [(_Bool)0] [i_10] [i_10] [i_0] = (-(arr_11 [i_9] [i_10] [i_0] [i_1] [(unsigned char)8] [i_10]));
                    }
                } 
            } 
        }
        for (long long int i_11 = 1; i_11 < 10; i_11 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (_Bool)1);
            var_26 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [(short)8] [i_0]);
            var_27 = ((/* implicit */_Bool) ((arr_14 [i_11] [i_11 + 4] [i_11 + 2] [i_11 + 4]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11 + 2] [i_11 + 2] [i_11 + 3] [i_11] [i_11])))));
            arr_43 [i_0] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_11] [i_11 + 4]))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_10 [i_0] [(unsigned short)10] [i_0]))));
        }
        for (unsigned char i_12 = 2; i_12 < 10; i_12 += 3) 
        {
            arr_48 [i_12] [i_12] = ((unsigned char) arr_34 [i_12 - 2] [i_12] [i_0] [i_0]);
            var_29 = ((/* implicit */int) arr_31 [i_0] [i_0] [i_12]);
            var_30 = (((+(arr_1 [i_0]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_12 + 2] [(unsigned char)7] [i_0]))))));
            var_31 = ((/* implicit */long long int) arr_19 [i_0] [i_0]);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 1014283329)) ? (((/* implicit */long long int) -1837528720)) : (498230986603733053LL)));
        }
        arr_49 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_15 [(unsigned char)0] [(unsigned char)0] [i_0] [i_0]))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0]))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((2147483647) + (var_3)))) : ((+(arr_3 [i_0] [i_0] [i_0])))));
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned int) 0)) : (0U))))));
        var_36 = min((((unsigned int) arr_52 [i_13] [i_13])), (((/* implicit */unsigned int) arr_51 [i_13] [14U])));
        /* LoopNest 2 */
        for (unsigned int i_14 = 3; i_14 < 20; i_14 += 2) 
        {
            for (unsigned char i_15 = 2; i_15 < 20; i_15 += 4) 
            {
                {
                    var_37 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_50 [i_13])) ? (((/* implicit */unsigned int) arr_50 [i_15 + 1])) : (arr_56 [i_13] [i_15 + 1] [i_14]))), (arr_56 [i_14] [i_14 - 2] [i_14])));
                    arr_57 [i_13] [i_14] [i_15 + 1] [i_15 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((int) arr_56 [i_13] [i_14] [i_14])))));
                }
            } 
        } 
    }
}
