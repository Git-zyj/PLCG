/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61394
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
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */short) (-(3725094475855561994LL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) arr_5 [i_1 + 1])))), (((/* implicit */int) var_10)))) + (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_1 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (arr_12 [i_1 - 1] [(signed char)5] [i_4 + 2] [i_4 - 1]))))))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned long long int) (-((+(((/* implicit */int) arr_11 [(short)4] [(short)4] [8] [i_4]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_24 [i_1 + 1] [i_1] [i_1 + 1] [1ULL] [i_1 + 1] = ((((/* implicit */_Bool) arr_8 [i_7])) ? (((((/* implicit */_Bool) max((arr_20 [i_7]), (arr_15 [i_1] [i_5 - 1] [i_5] [i_6 + 1] [i_7] [i_7])))) ? ((~(((/* implicit */int) arr_19 [(unsigned char)7] [i_1] [i_6] [i_6 - 1])))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 2])) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_5)))))) : (max((-955481948), (((((/* implicit */int) (_Bool)1)) - (-23))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)60)), ((((~((-2147483647 - 1)))) % (((/* implicit */int) (_Bool)1)))))))));
                        var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((-23) & (267969472)))) : (max((3725094475855561991LL), (3725094475855561989LL)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) var_3);
                        var_25 = ((/* implicit */int) arr_11 [i_1] [i_5 + 2] [i_6 - 1] [i_8]);
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (((-(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)253)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [i_8])) < ((~(((/* implicit */int) var_13)))))))))))));
                        arr_27 [i_1] [i_6] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (short)32736)) : (((/* implicit */int) max(((signed char)23), ((signed char)0)))))))));
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) - (arr_16 [i_1] [i_1] [i_6 - 1] [i_6 - 1] [i_5] [i_5 - 1])))) ? (-3725094475855561985LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) || (((/* implicit */_Bool) arr_3 [i_1 + 2])))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) (signed char)-2);
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((-3725094475855562003LL) != (((/* implicit */long long int) arr_12 [i_1 + 1] [i_5 + 1] [i_9] [i_10 + 3])))) && (((/* implicit */_Bool) arr_15 [i_5 - 3] [i_5 + 2] [(_Bool)1] [i_1 + 2] [i_10 - 1] [i_6 + 1])))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1 - 1])) && (((/* implicit */_Bool) arr_22 [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1 + 2])))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned char) ((unsigned int) arr_14 [(_Bool)1] [(_Bool)1]))))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_20 [10LL])))) ? (((/* implicit */int) arr_26 [i_5] [i_6] [i_6] [i_10])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_1 + 2] [i_1] [i_1])) : (673186984)))));
                        }
                        var_34 = ((/* implicit */unsigned char) arr_31 [i_1] [i_5] [i_5] [i_9] [i_9]);
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) (signed char)-2);
                            arr_37 [i_1] = var_11;
                        }
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            arr_41 [i_1] [i_6 + 1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_42 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3411633879598162691LL)) ? (((/* implicit */unsigned long long int) arr_2 [i_5 - 1])) : (((unsigned long long int) arr_40 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]))));
                        }
                    }
                }
            } 
        } 
    }
}
