/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77500
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) (-(var_8)));
        var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(var_5)))) & (arr_0 [i_0 + 1])));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) max(((_Bool)1), ((((((_Bool)0) || (((/* implicit */_Bool) -5145180808798419507LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1552677864) : (((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */long long int) var_1))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_9))))));
                        var_12 = ((/* implicit */unsigned long long int) (-(-42761719)));
                    }
                    for (signed char i_6 = 4; i_6 < 15; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */signed char) ((unsigned long long int) max((2355608475U), (((/* implicit */unsigned int) -143968569)))));
                            arr_22 [i_7] [i_6 - 1] [i_4 + 2] [i_4] [i_3] [i_2] [i_2 + 1] |= ((/* implicit */_Bool) ((arr_21 [i_7] [i_4 - 1] [10ULL] [13LL] [i_6 - 1] [i_4 - 1] [i_3]) ? (((arr_20 [i_2] [i_3] [i_3] [i_6 - 2] [i_4 - 2]) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)58856)) ? (var_5) : (var_8))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (arr_19 [i_2] [i_2] [i_4])))))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_14 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [11U] [i_6]))));
                            var_15 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned int) 7138531343919007003LL)))));
                            arr_25 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) ((unsigned int) max((-8933789808116348697LL), (((/* implicit */long long int) (_Bool)1)))));
                        }
                        arr_26 [i_2] [i_2] [i_4] [i_6] [i_6] [i_2 + 1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_6 - 3] [i_6 - 1])) ? (((/* implicit */unsigned int) var_7)) : (arr_20 [13] [i_4] [i_4 - 2] [i_6 + 1] [(signed char)4]))), (((/* implicit */unsigned int) arr_23 [15] [0U] [i_4] [i_6 - 3] [i_6] [0U]))));
                        arr_27 [i_4] [i_4] [i_2] = ((((/* implicit */_Bool) var_2)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6))))))));
                    }
                    arr_28 [15] [i_3] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(var_5))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(var_7))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (_Bool)0))))));
                    arr_29 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (((unsigned int) var_9))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_33 [i_9] [(signed char)9] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -2881168724152094985LL)) ? (((/* implicit */unsigned int) -42761719)) : (1106344495U))));
                    var_17 = ((unsigned long long int) arr_19 [i_3] [i_3] [i_3]);
                }
                for (int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    var_18 = 350819351U;
                    var_19 *= ((/* implicit */int) ((((((/* implicit */long long int) ((arr_20 [i_2] [i_2] [(_Bool)1] [i_3] [i_10]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_10])))))) + (((((/* implicit */_Bool) var_3)) ? (arr_15 [14U] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) var_5)))))) >= (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3127217325U))))), (((((/* implicit */_Bool) arr_14 [(short)7] [i_3] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-112)))))))));
                }
                arr_36 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((arr_15 [i_3] [i_2] [i_3] [i_2] [i_2]), (((/* implicit */long long int) var_1)))) / (((-5145180808798419507LL) / (var_4)))))) ? (((/* implicit */int) max((var_3), (var_3)))) : (max((((((/* implicit */int) arr_9 [(signed char)7])) + (((/* implicit */int) arr_18 [i_3] [i_2])))), (223358780)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) 2014095996U)) ? (arr_14 [i_2] [i_2] [i_2 + 1] [i_11]) : (var_8));
                    var_21 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-118)) + (arr_37 [i_2] [i_11] [i_11] [i_3]))))));
                    var_22 = (~((~(((/* implicit */int) arr_13 [(_Bool)0] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (~(arr_4 [i_13] [i_2 + 1])));
                                var_24 = ((/* implicit */int) arr_38 [i_2] [10U] [i_2] [(unsigned short)13]);
                                var_25 = ((/* implicit */int) ((unsigned int) ((arr_23 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 + 2] [i_2 + 2]) + (((/* implicit */int) arr_32 [i_3] [i_3] [i_11] [3ULL])))));
                                arr_47 [i_13] [i_11] [i_11] [(short)9] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) + (2147483647))) << (((var_1) - (4005018194U)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_14 = 2; i_14 < 15; i_14 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((int) ((int) 2280871277U)));
                    arr_51 [i_14] [i_3] [i_14] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_7)) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-1353287481), (((((/* implicit */int) (_Bool)1)) << (((18446744073709551615ULL) - (18446744073709551611ULL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-112)) ^ (-929441515)))) : (((((2458746067803578483ULL) + (11855037153688700741ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))))));
                }
                /* vectorizable */
                for (unsigned int i_15 = 2; i_15 < 15; i_15 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (5241578812955030287LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_5))))) + (arr_20 [i_15 - 2] [i_15 - 2] [i_15 - 2] [(unsigned short)2] [i_15]));
                        arr_57 [i_2] [i_3] [i_15] [i_16] |= (+(((/* implicit */int) var_6)));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 14; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 2; i_18 < 14; i_18 += 2) 
                        {
                            {
                                arr_65 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))));
                                var_30 *= ((/* implicit */short) (~(((/* implicit */int) arr_18 [i_2] [i_2 + 3]))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) arr_56 [14U] [(unsigned char)2] [10] [i_17] [i_15] [i_17 + 1])) == (-5145180808798419507LL)))) & ((+(((/* implicit */int) arr_45 [i_18] [i_17] [(unsigned short)12] [i_3] [i_18]))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_19 = 2; i_19 < 15; i_19 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 3; i_20 < 14; i_20 += 3) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-3)) ? (14336805383901959449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)19))) | (var_4))), (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 1; i_21 < 14; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                        {
                            {
                                arr_78 [i_22] [1U] [i_19 - 1] [i_21] [1U] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))))))));
                                arr_79 [i_21] [i_21 - 1] [i_21] [(signed char)5] [i_19] [i_3] [i_21] = ((/* implicit */unsigned short) (-(max((var_1), (((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_19 - 1]))))));
                                var_34 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_18 [11LL] [(_Bool)1])))))))) | (((/* implicit */int) max((arr_10 [i_21 - 1] [i_2 + 2]), (var_2))))));
                                var_35 &= ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned int) var_2);
                    var_37 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) var_7)) + (arr_61 [i_2] [i_2 - 1] [13U] [i_19 - 1] [i_19 - 1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_2 - 1] [i_2 - 1] [i_19 - 1] [(_Bool)1] [i_19 - 2])))))));
                }
            }
        } 
    } 
}
