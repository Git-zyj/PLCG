/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65233
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
    var_18 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) != ((~(281472829227008ULL)))));
        var_20 = max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = arr_3 [i_1];
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((arr_8 [i_3 + 3] [i_3 + 2] [i_3] [i_1]), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)112)) + (((/* implicit */int) (signed char)-91)))))))));
                    var_22 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_23 += ((((/* implicit */_Bool) -3039429908889257854LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) : ((+(-3039429908889257854LL))));
                                var_24 = ((/* implicit */signed char) arr_11 [(unsigned char)8] [i_2] [i_3] [i_3] [i_5]);
                                var_25 += ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_10 [i_2] [i_3 - 1] [(unsigned char)12] [i_2]))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) != (var_12))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_20 [i_1] [i_2] [i_3 + 3] [i_6] [i_6]);
                        arr_21 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_3 + 2] [i_6] [i_6 - 2] [i_1]))));
                        var_27 = (-((~(3578719721005717911LL))));
                    }
                    for (short i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        var_28 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_3 + 2] [i_7] [i_7])) + (2147483647))) << (((3039429908889257834LL) - (3039429908889257834LL))))))))) : (((((/* implicit */int) (unsigned char)254)) - (((((/* implicit */int) var_5)) & (((/* implicit */int) var_2))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_3] [i_1] [i_3 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_3 + 2] [i_7] [i_7])) - (2147483647))) + (2147483647))) << (((3039429908889257834LL) - (3039429908889257834LL))))))))) : (((((/* implicit */int) (unsigned char)254)) - (((((/* implicit */int) var_5)) & (((/* implicit */int) var_2)))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_3 + 3] [i_3] [i_1]))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [(signed char)2] [i_7])))))))));
                        arr_25 [i_1] [(short)12] [i_1] [i_7] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 15589762295367846907ULL)))))));
                        var_30 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [i_1] [i_2] [i_1] [i_1])) + (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_2] [i_1]))))) ? (arr_8 [i_1] [i_3 + 2] [i_3] [i_7 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_3 + 4] [10LL])) * (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_7] [i_7]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))))));
                        var_31 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_16 [i_1] [(short)0] [(short)0])) < (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned long long int) var_16)) : (var_13))) >> (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((arr_12 [i_7] [i_3] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_32 = (~(((arr_23 [i_3 + 1] [i_2] [i_3 + 1] [i_3 + 3]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)0))))));
                        arr_29 [i_8] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_3] [(short)2]);
                        arr_30 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 15421573731041146866ULL));
                    }
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_10 = 4; i_10 < 16; i_10 += 3) 
        {
            arr_35 [i_9] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_10 - 4] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */int) arr_13 [i_10 - 4] [i_10 - 2] [i_10] [i_10])) : (((/* implicit */int) arr_13 [i_10 - 4] [i_10 + 1] [(unsigned char)1] [i_10])))) + (((((/* implicit */_Bool) arr_13 [i_10 - 2] [i_10 - 3] [9LL] [i_10])) ? (((/* implicit */int) arr_13 [i_10 - 2] [i_10 - 2] [i_10] [i_10])) : (((/* implicit */int) (unsigned char)244))))));
            arr_36 [i_10] = ((/* implicit */long long int) var_1);
            arr_37 [i_9] [i_10] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) ((unsigned char) (short)2152)))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_14 = 4; i_14 < 13; i_14 += 4) 
                        {
                            var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) ((((/* implicit */int) arr_32 [i_11 - 1])) != (((/* implicit */int) arr_32 [i_11 - 1])))))));
                            var_34 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_41 [i_11] [i_12] [i_14 - 2])) ? (((/* implicit */int) arr_41 [i_13] [i_12] [i_11 + 3])) : (((/* implicit */int) arr_41 [i_9] [i_11 + 2] [i_11])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_9])))))));
                            arr_50 [i_14 - 1] [i_11] [i_12] [i_13] [i_14 - 1] [i_11] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_31 [i_11 + 1] [i_14 + 1])))) / (((15589762295367846907ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108)))))));
                            arr_51 [i_11] = ((/* implicit */short) arr_14 [15ULL]);
                        }
                        var_35 |= ((/* implicit */unsigned char) arr_20 [(signed char)0] [i_9] [i_11] [i_13] [i_13]);
                        var_36 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)7)) & (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) (unsigned char)7))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
        arr_55 [2ULL] [i_15] &= ((/* implicit */unsigned char) (-(8846002972785694845LL)));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */short) arr_42 [i_15] [i_15] [i_15] [i_15])), (arr_44 [i_15] [i_15] [i_15])));
    }
}
