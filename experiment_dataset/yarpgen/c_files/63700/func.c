/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63700
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                var_11 += ((/* implicit */long long int) 67419004U);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(arr_7 [i_2 + 1] [i_2 + 1] [i_2])))), (min(((-(18446744073709551603ULL))), (arr_5 [i_2])))));
                }
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3 - 2] [i_1] [i_3 - 2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_10 [i_0] [i_1] [12LL])) : (((/* implicit */int) (short)-3872))))) ? (((long long int) arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) % (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) (-(max((arr_9 [i_1] [i_0 - 2] [i_0] [i_3 - 2]), (((/* implicit */unsigned int) var_4))))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (arr_13 [i_0 - 1] [8ULL] [i_1] [i_0 - 1] [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((var_6) ? (6072892522737816478LL) : (4137741467795755491LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)63)))))))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10521)))))));
                        var_15 &= (((!(((/* implicit */_Bool) ((unsigned char) 0LL))))) ? ((-(((((/* implicit */int) arr_6 [i_0 - 2] [i_1] [0ULL])) * (((/* implicit */int) (signed char)-64)))))) : (((/* implicit */int) var_3)));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_5 - 1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (short)10521)), (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-10521))))))))));
                            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) ((unsigned int) var_0))) : (max((5810562393796547653LL), (((/* implicit */long long int) (_Bool)0))))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) (~(max((((var_7) ? (((/* implicit */long long int) 1896163785U)) : (1889524735786980631LL))), (((/* implicit */long long int) ((unsigned short) arr_5 [i_4])))))));
                            var_17 = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_1] [i_1] [i_4] [i_6 + 2] [i_1])) ? (arr_2 [i_3 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_3] [i_6])))))))));
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (max((((/* implicit */long long int) var_3)), (7480316580424348340LL))) : (((/* implicit */long long int) ((unsigned int) var_9)))))));
                            var_19 = ((/* implicit */signed char) var_9);
                        }
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1889524735786980627LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0]))) : (arr_21 [6ULL] [i_1] [i_0] [i_1] [i_3]))))))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_1] [i_3] [i_0] [i_7]))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-10521)) ? (15279032709090211382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 6072892522737816478LL)))))) : (((/* implicit */unsigned long long int) 1889524735786980626LL)))))));
                            arr_27 [i_4] [i_1] [8] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) ((long long int) -1621576687))), (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 2] [i_3 - 1]) * (arr_2 [i_0 - 2] [i_3 - 1])))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_9]);
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~((~(790979305U))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 3; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    var_25 |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((arr_31 [i_0] [i_0] [i_10 - 3] [i_0]) ? (arr_7 [i_0] [i_1] [i_10]) : (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) (-(var_5)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 += ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 857615740)) - (arr_2 [i_0] [i_0])))));
                        var_27 = ((/* implicit */unsigned int) (-((-(arr_15 [i_0] [i_1] [i_10 - 2] [i_11])))));
                        var_28 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_11])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_10] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) (unsigned short)3032)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_15 [i_11] [i_10 - 3] [0] [i_0])))))) | (max((((((/* implicit */_Bool) var_0)) ? (1960830847205922050ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)18619)), (2239301665503646046LL))))))));
                        var_29 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((arr_14 [i_0] [(unsigned short)6] [i_10] [i_10] [i_11] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0]))))))))));
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_33 [i_0] [i_1]))));
                    arr_39 [i_1] [(_Bool)1] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_10 - 1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : (2499475531295867411ULL)))) && (((/* implicit */_Bool) ((arr_14 [i_1] [i_0 - 2] [i_0 - 2] [(unsigned short)2] [i_0 - 2] [i_0 - 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27149)) / (((/* implicit */int) arr_32 [i_10] [i_0 - 2] [i_1] [i_1] [i_0] [i_0 - 2]))))))))));
                }
                var_31 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) (!(var_4))))), (((((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0] [i_0] [i_0 - 1] [i_1]))) << (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                var_32 = ((/* implicit */long long int) arr_22 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) var_9);
}
