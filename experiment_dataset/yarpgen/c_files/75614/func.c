/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75614
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
    var_12 = ((/* implicit */long long int) ((var_7) ? (var_1) : ((-(((/* implicit */int) var_10))))));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (+(((long long int) (+(var_8)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 281466386776064LL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    arr_10 [i_2] [i_1 - 2] [i_1] [i_2] = ((/* implicit */short) ((254897691U) >= (2809598425U)));
                    arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) (+(arr_5 [i_0 - 1])));
                    arr_12 [i_2] [i_1 + 2] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_2]))))));
                    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [0U] [i_1] [i_2])) ? (arr_9 [2U] [i_1 + 2] [i_1 - 1]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_0]))) : (9223372036854775808ULL)))));
                }
            } 
        } 
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned int) arr_18 [i_4]);
                        var_18 = ((/* implicit */unsigned long long int) var_11);
                        arr_22 [i_3] [i_3] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */long long int) (+(min((((/* implicit */int) arr_14 [i_6 + 2])), (((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (var_1) : (arr_19 [i_5] [i_6 + 1])))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_3] [i_4] [i_5] [11U] [i_5] = ((/* implicit */unsigned long long int) arr_26 [i_3] [i_5] [i_4] [i_5] [i_5] [15LL] [i_7]);
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_16 [i_3 + 1])))) ? (arr_16 [i_3 - 1]) : (arr_16 [i_3 - 1])));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [16])) ? (((/* implicit */unsigned int) arr_24 [i_3] [i_4] [i_5] [i_4] [i_8 + 1])) : (arr_25 [i_3 - 1] [i_3] [i_4] [i_3] [i_3] [i_3])))) ? (min((((/* implicit */int) var_2)), (arr_24 [i_3 - 1] [i_4] [i_5] [i_4] [i_8]))) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) (signed char)-106))))))))));
                            arr_30 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (signed char i_9 = 3; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) var_1)), (arr_26 [i_3] [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_9] [i_5]))))), (arr_16 [i_5])));
                            var_22 |= ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_1)), (arr_17 [(signed char)9] [20LL])))));
                            var_23 ^= ((/* implicit */unsigned long long int) min((min((arr_33 [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 2] [i_9 - 1]), (arr_26 [i_9] [i_4] [i_9] [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_21 [i_9 + 3] [i_9 + 3] [(signed char)18] [i_9 - 1] [i_9 - 1] [i_9 - 3])) <= (var_3))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9591598230594701645ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((/* implicit */_Bool) arr_26 [2U] [i_5] [14ULL] [4ULL] [i_5] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (var_8))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [19LL] [i_4] [8ULL] [8ULL] [i_9])), (arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3 + 1] [i_4] [i_5] [i_5] [i_9])))))) : (var_5)))));
                        }
                        for (signed char i_10 = 3; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_3] [i_3 + 1] [i_3 + 1] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (+(min((var_3), (((/* implicit */long long int) var_7)))))));
                            arr_37 [i_10 + 3] [i_6] [i_5] [i_4] [i_5] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (var_11)));
                            var_25 = ((/* implicit */int) (-((~(arr_21 [i_3 - 1] [i_4] [i_5] [i_4] [i_6 + 2] [i_10 + 1])))));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_3] [i_3] [i_3 + 1] [i_3] [i_3]))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)116)), (arr_13 [5ULL]))))));
        arr_38 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (460634064U)))));
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    arr_45 [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [i_11]))));
                    arr_46 [i_11] [i_12] [i_12] |= var_0;
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? ((+(arr_24 [i_11] [i_11] [i_11] [2] [i_11]))) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) arr_15 [i_11]))))) : (((((/* implicit */_Bool) min((arr_41 [i_11]), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) arr_17 [i_11] [i_11])) ? (var_6) : (((/* implicit */unsigned long long int) arr_24 [i_11] [4] [i_11] [4] [i_11])))) : (((/* implicit */unsigned long long int) arr_17 [i_11] [i_11]))))))));
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned char) arr_42 [i_11]);
    }
    var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) - (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), ((+(var_1)))))));
    var_29 = ((/* implicit */unsigned int) ((int) max((((((/* implicit */_Bool) 9223372036854775810ULL)) || (var_4))), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 9223372036854775809ULL)))))));
}
