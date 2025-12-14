/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87944
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [i_3] [5U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0))))))) % (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3] [i_1] [14ULL] [(signed char)3] [i_3])), (((unsigned long long int) arr_6 [i_0] [i_0] [i_3 + 1]))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */int) (~(((((var_9) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((arr_3 [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                                var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)-122)) & (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (signed char)121))));
                                var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) || (((/* implicit */_Bool) arr_8 [i_2 + 1])))))));
                            }
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (_Bool)0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_3))) | ((~(((/* implicit */int) var_9))))))) : (((long long int) arr_10 [7ULL] [i_3 + 1] [i_3] [i_0] [12LL] [i_0] [i_0]))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_0 [i_2])))) ? (((max((((/* implicit */unsigned int) (unsigned short)1618)), (var_3))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (short)4156)) & (((/* implicit */int) (unsigned short)35052))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-4157)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_19 [i_6] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_4 [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_10) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) != (var_8))))))) ? (max((max((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (~(7418445487492764000ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_6] [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [(unsigned char)6] [i_1]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        arr_20 [i_6] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */short) var_3);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(952997642U)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)))))) ^ (max((((/* implicit */unsigned long long int) var_9)), (var_8)))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            arr_25 [i_0] [i_6] [i_0] [i_0] [i_6] = ((/* implicit */signed char) var_10);
                            var_18 = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) (~(0U)))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_5))))));
                        }
                        arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) var_5))), (((((/* implicit */_Bool) arr_4 [i_6] [i_7])) ? (arr_15 [i_0] [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
                    }
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            arr_31 [i_0] [i_6] [i_6] [i_9 + 1] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                            arr_32 [i_0] [(_Bool)1] [12LL] [i_9] [i_1] |= ((/* implicit */unsigned char) ((var_6) ? (arr_4 [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
                            arr_35 [i_6] [(signed char)10] [8U] [3U] [(unsigned char)16] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13713304713292452218ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_1] [6U] [i_9 + 1] [i_9 - 1]))) : (((((/* implicit */_Bool) (signed char)-93)) ? (arr_4 [i_9] [i_9]) : (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)60))) && (((/* implicit */_Bool) ((long long int) var_5))))))));
                        }
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) -451561781)), (-8588095543922765773LL)))) ? (((9979554009493112913ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_6] [i_0] [i_6] [i_1] [i_1])) & (((/* implicit */int) var_9))))))) : ((~(min((((/* implicit */unsigned long long int) arr_18 [i_6] [i_1] [i_6] [i_6])), (arr_0 [i_1])))))));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_34 [i_0] [16ULL] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) arr_30 [i_6] [i_1] [i_1] [i_1] [i_1]))))) / (arr_34 [(signed char)4] [(signed char)4] [i_6])))) : (((((/* implicit */_Bool) min((4017550154U), (((/* implicit */unsigned int) (unsigned char)122))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [15LL] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_15 [i_6] [i_1] [i_6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (arr_4 [i_6] [i_0])))))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 5206786186639297190ULL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (13232133074119153882ULL))) <= (12728311939695777961ULL)))) & ((-2147483647 - 1)))))));
                        var_23 = ((((((arr_24 [i_0] [i_1] [i_6]) & (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) (~(arr_12 [i_1] [i_6] [i_6] [i_1] [i_6] [i_0])))))) - (((/* implicit */unsigned long long int) var_10)));
                    }
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_6] [i_1] [i_13] = ((/* implicit */short) arr_7 [i_13] [i_6] [(unsigned char)0] [(unsigned char)0] [i_6] [(unsigned char)0]);
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) max((((/* implicit */long long int) arr_38 [i_0] [i_1] [i_0] [i_13] [i_13])), (-5398496169846628630LL))))))))));
                        arr_41 [i_6] [(_Bool)1] [i_6] [16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((~(((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_34 [i_1] [i_6] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_34 [i_0] [i_6] [i_13])))));
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
                    {
                        arr_44 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) -8588095543922765773LL)) ? (-5398496169846628635LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_6] [i_1] [i_1] [i_0])))))))) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_6]))) : (var_8))))))));
                        var_25 |= ((/* implicit */short) ((unsigned long long int) arr_34 [i_1] [i_6] [i_14]));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6])) ? ((~(arr_23 [i_6]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)0))))))) ? (var_10) : (((/* implicit */int) (((!(((/* implicit */_Bool) 2147483647)))) && (((((/* implicit */_Bool) arr_39 [(signed char)2] [i_14])) && (((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_15])))))))));
                            arr_47 [i_0] [i_1] [i_6] [i_1] [i_6] = ((/* implicit */short) var_5);
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(arr_3 [10LL]))) : (((((/* implicit */_Bool) arr_3 [i_15])) ? (arr_3 [i_0]) : (arr_3 [i_1])))));
                            var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_6] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8)))))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned int) (~(var_8)));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_3);
    var_32 -= ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)16)) >> (((/* implicit */int) var_6)))))) ? (var_8) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)30)) >> (((var_10) - (962924300))))), (((((/* implicit */int) (signed char)47)) ^ (((/* implicit */int) var_1))))))));
    var_33 = ((/* implicit */unsigned short) min(((short)32759), (((/* implicit */short) var_1))));
}
