/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98256
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */long long int) (signed char)15);
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] = (((+(arr_3 [i_1]))) / (((/* implicit */int) ((signed char) arr_3 [i_1]))));
        var_18 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (min((arr_4 [6ULL] [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_19 += ((/* implicit */int) arr_6 [i_1]);
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_7] [i_6] [i_5 - 2] [i_5 + 1] [i_4] [i_4] [5] |= ((/* implicit */signed char) (~(arr_14 [3ULL] [i_4])));
                            arr_23 [i_1] [i_4] [i_5 - 3] [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */int) min((arr_21 [i_1] [i_4]), (((/* implicit */unsigned short) (signed char)-15))))), (max((((/* implicit */int) (signed char)5)), (arr_10 [i_7] [i_5] [i_4] [i_1]))))) != (((var_7) / (max((arr_16 [i_4] [11ULL] [i_4] [i_7]), (arr_16 [i_4] [i_7] [i_5] [i_6])))))));
                            arr_24 [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((long long int) arr_4 [i_1] [i_1])), ((+(arr_12 [i_5] [i_6]))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_19 [i_1]);
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (signed char)14)) ? (var_0) : (((/* implicit */int) arr_19 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))) ? (((((/* implicit */_Bool) max((-1480710740695066946LL), (arr_12 [i_4] [i_5])))) ? (min((arr_17 [i_1] [i_4]), (((/* implicit */long long int) arr_11 [11ULL] [i_8] [(signed char)10])))) : (((11LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) != (18446744073709551615ULL)))) : (((/* implicit */int) (signed char)-15))))))))));
                            var_22 = ((/* implicit */unsigned char) arr_26 [i_1] [i_4] [i_4] [i_6] [i_8]);
                        }
                        var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_16 [i_6] [0LL] [i_4] [i_1]) : (((/* implicit */int) (unsigned short)7155))))));
                        arr_28 [(signed char)3] [4] [4] [i_4] [i_5] [i_6] = ((/* implicit */short) var_11);
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) % (((unsigned long long int) ((((/* implicit */_Bool) 801243057U)) ? (arr_14 [i_4] [i_4]) : (((/* implicit */int) var_1)))))));
                        var_25 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((unsigned long long int) arr_7 [10LL] [i_4] [i_1])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((1125899906842368LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))))), (((((/* implicit */unsigned int) arr_14 [i_5 - 3] [i_5 + 2])) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) * (6U)))))));
                        arr_33 [2] [2] [i_5 - 3] [i_9] [8LL] = ((/* implicit */unsigned char) (-(((((-7528462958393656469LL) + (9223372036854775807LL))) >> (((1480710740695066974LL) - (1480710740695066925LL)))))));
                    }
                    arr_34 [i_5] [i_4] [7LL] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) % (arr_29 [i_1] [i_4] [i_4] [i_4] [i_5] [i_5]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 651819744198968805ULL))))))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~((-(1480710740695066976LL))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2047735228)))) ? (((/* implicit */long long int) -2047735228)) : (1480710740695066974LL)))) ? (((((((/* implicit */long long int) var_7)) % (9223372036854775807LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57463)))))))) : (((/* implicit */long long int) min((2047735228), (((((/* implicit */int) (short)12288)) * (((/* implicit */int) (unsigned short)20997)))))))));
}
