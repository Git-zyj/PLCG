/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86643
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((min((var_4), (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)124))) ? ((+(((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */unsigned long long int) 252);
    var_14 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_9))))), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) (~(((/* implicit */int) ((var_4) >= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) min((arr_12 [1ULL] [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_0] [i_0]), (((/* implicit */unsigned char) var_5))))) : ((+((+(((/* implicit */int) var_8))))))))));
                                var_16 ^= ((/* implicit */long long int) arr_0 [i_2] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) (~(var_4)))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */short) arr_8 [i_5] [i_1] [i_1] [i_6] [i_0] [i_5]);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_24 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3838347191049249987ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8192))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                        {
                            var_20 ^= var_8;
                            var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) arr_5 [i_8 + 1] [i_5]))))));
                        }
                    }
                    arr_27 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >> (((((var_0) | (((/* implicit */unsigned long long int) (-2147483647 - 1))))) - (18446744073257385770ULL)))));
                }
                for (long long int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-3751532462872119237LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((var_7), (((/* implicit */unsigned long long int) (signed char)-20)))))) ? (((/* implicit */int) arr_18 [i_9] [i_1] [2LL] [i_10])) : (((/* implicit */int) (((+(arr_25 [i_0] [i_0] [i_0] [i_1 - 1] [i_11] [i_1 - 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [13] [2ULL] [i_9] [i_10] [i_11] [i_11 - 1])))))))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-2))))))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_9] [5])))) >> (((/* implicit */int) ((var_2) > (min((((/* implicit */int) var_9)), (var_2))))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_10))));
                }
                for (int i_12 = 4; i_12 < 17; i_12 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (arr_7 [i_12] [i_12])));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        for (long long int i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            {
                                var_27 = 1216164547U;
                                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (min((arr_21 [14] [i_14] [i_14 + 2] [i_14 + 1]), (var_2))))))));
                                var_29 = min((var_0), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((var_0) % (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_14 - 1])))))));
                                arr_44 [i_0] [(unsigned short)3] [8ULL] [i_12] [i_13] [i_1] [i_14 - 2] = ((/* implicit */long long int) min((((/* implicit */int) (!(((var_10) && (((/* implicit */_Bool) -1652158543))))))), (((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) ((arr_35 [i_0] [i_1 - 1] [12U] [i_0] [i_12 - 2]) ? (var_7) : (144115153716117504ULL)))) : (((/* implicit */unsigned int) ((var_4) % (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)15360))))) ? (2422827423675380984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15361))))));
                                var_32 = ((/* implicit */int) 10773469703948299904ULL);
                                arr_49 [i_1] [i_15] [i_15] [i_15] [i_15] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_12 - 1] [i_16 + 2] [i_16 - 1] [i_16] [i_16]))) & (((((/* implicit */_Bool) var_2)) ? (var_0) : (var_7))))), ((~(18446744073709551615ULL))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_17 = 4; i_17 < 17; i_17 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12929837016410026143ULL)))))));
                    arr_53 [i_1] = ((/* implicit */unsigned short) var_0);
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)30496))))))))));
                    var_35 = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            {
                                arr_60 [7ULL] [i_1 - 1] [i_17] [i_1] [i_19] = ((/* implicit */unsigned short) -1652158515);
                                var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((var_0) - (2152274007109173026ULL)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_17] [i_18])) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_42 [i_0] [i_1 + 1] [i_1 + 1] [i_18] [i_19]))));
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (6895021547022659484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0])))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
