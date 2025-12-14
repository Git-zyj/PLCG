/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93283
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
    var_13 &= ((/* implicit */unsigned int) -3504181017699785959LL);
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((225503876193500197ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : (max((var_7), (((/* implicit */long long int) 4294967293U))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (var_4)));
                            var_17 += ((/* implicit */unsigned char) var_4);
                        }
                        var_18 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_3])))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) <= (((((/* implicit */_Bool) var_8)) ? (var_4) : (0U)))))))));
                        var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_12 [2LL] [i_1] [i_5]) : (arr_12 [i_0] [i_1] [i_5])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5] [i_5]))))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) arr_5 [i_0]);
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_25 [18U] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_20 [(short)1] [(short)1] [17] [i_0] [i_7] [(short)1])) - (15862)))))))), (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned long long int) arr_12 [i_0 - 4] [i_0] [i_0])) : (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24326)))))))))) : (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_1)) << (((((((/* implicit */int) arr_20 [(short)1] [(short)1] [17] [i_0] [i_7] [(short)1])) - (15862))) - (19288)))))))), (((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned long long int) arr_12 [i_0 - 4] [i_0] [i_0])) : (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24326))))))))));
                            arr_26 [i_0] [21LL] [i_0] [i_2] [i_0] [(unsigned short)15] [i_0] = ((/* implicit */unsigned int) min((max((arr_6 [i_0]), (((/* implicit */long long int) (unsigned short)2950)))), (((((/* implicit */_Bool) (short)29047)) ? (arr_17 [i_0] [i_0 - 3]) : (arr_17 [i_0] [i_0 - 1])))));
                            var_20 = ((/* implicit */long long int) ((signed char) min((4294967291U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_6]))))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_21 -= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_15 [i_6])))))) & (((/* implicit */int) arr_19 [i_0] [i_0 + 1]))));
                            var_22 = ((/* implicit */int) var_6);
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (min((((long long int) arr_0 [i_6])), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23353)) << (((((/* implicit */int) (short)30018)) - (30008))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [7U] [i_9])))) : (((/* implicit */int) var_1))));
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((16U) >> (((((/* implicit */int) (unsigned short)49062)) - (49054))))))));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 4294967285U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48050))))));
                            var_26 |= ((/* implicit */unsigned long long int) (+(var_4)));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_37 [(signed char)6] [i_1] [3ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_36 [i_11] [20ULL] [i_2] [19] [i_1] [i_0]);
                            var_27 = ((/* implicit */_Bool) arr_13 [i_2 + 1] [i_9] [i_2 + 1] [i_11 + 1]);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42203)) ? (((/* implicit */long long int) 4294967280U)) : (((long long int) (_Bool)1))));
                        }
                        for (unsigned int i_12 = 4; i_12 < 20; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */short) var_3);
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_1]))));
                            arr_42 [i_0] [i_1] [i_12] [i_9] [i_12] [i_12] [i_2] = ((/* implicit */long long int) (signed char)-75);
                        }
                        arr_43 [i_0] = ((/* implicit */_Bool) (unsigned char)186);
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */int) ((arr_18 [i_0] [i_0 - 4] [i_2 - 1] [i_9 - 2]) ? (arr_1 [i_0] [i_9 + 1]) : (arr_1 [i_0] [i_9 + 1])));
                            var_32 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_19 [8ULL] [i_1]));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_33 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)2950))));
                        arr_49 [i_0] [i_1] [(unsigned char)14] [19LL] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) ? (arr_47 [i_0] [19U] [(signed char)21] [i_2] [i_14] [(signed char)21]) : (((/* implicit */long long int) var_4)))))));
                        var_34 = ((/* implicit */int) min((var_34), ((-(((/* implicit */int) (_Bool)1))))));
                        var_35 -= (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 2] [i_14])));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
    }
    for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        arr_52 [i_15] [i_15] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_15])) ? (arr_51 [i_15]) : (arr_51 [5])))) ? (((((/* implicit */_Bool) 3845134524U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42185))) : (var_7))) : (((/* implicit */long long int) arr_51 [i_15]))))));
        var_37 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (var_10)))) >= (arr_51 [(unsigned char)22])));
    }
    var_38 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)240))))), (var_12))) / (((/* implicit */long long int) 801687432U))));
}
