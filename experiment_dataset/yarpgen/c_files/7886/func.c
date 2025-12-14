/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7886
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            arr_14 [i_4 - 2] [(unsigned char)14] [i_2] [i_0] [i_1 - 4] [(unsigned char)14] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_0))))));
                            var_13 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((unsigned short) (unsigned char)204))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (-668375013)));
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) arr_2 [i_5]);
                            var_15 = ((/* implicit */long long int) ((((arr_16 [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_3] [i_2] [i_2] [i_0] [i_0]))))) ? (15883605656220714665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61128)))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59436))) / (arr_5 [i_0] [i_0])));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) % (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0 - 3])) / (((/* implicit */int) arr_13 [i_0 - 3])))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        arr_24 [4ULL] [4ULL] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))))), (1332198220706885297ULL)));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-((((-(((/* implicit */int) (unsigned char)219)))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-123)), (var_3)))))))))));
                        arr_25 [i_0] [i_2] [i_0] [i_0] = (-(((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (0ULL))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 - 1]);
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_1] [i_0 + 1] [i_1] [i_0] = var_11;
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0] [i_1 - 1] [i_2] [i_0 - 2])) & (((/* implicit */int) max((arr_26 [11ULL] [i_1 - 2] [i_7] [i_0 - 2]), (arr_26 [i_7] [i_1 - 2] [i_2] [i_0 + 1]))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            arr_34 [(_Bool)1] [i_0] [i_2] [i_0] [i_0 - 2] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) 5133722171460412457LL)) ? (7133046619561832158ULL) : (arr_22 [i_0] [17U] [i_1] [i_0] [i_7] [i_0])))))));
                            var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_8 [i_9 + 2] [i_1 - 3] [i_0 - 3] [(signed char)2] [(signed char)2] [(signed char)2])) ^ (((/* implicit */int) arr_8 [i_9 - 2] [i_1 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_0]))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max(((+((~(arr_21 [i_9]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_0 - 3]))))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (18ULL))))), (((/* implicit */unsigned long long int) var_7)))))));
                            var_22 |= ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63)))))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 22; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((((/* implicit */_Bool) arr_11 [i_2] [i_10])) ? (9223372036854775808ULL) : (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (_Bool)1)), (var_6))), (var_6))))));
                        }
                    }
                    arr_39 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)154)) || (((/* implicit */_Bool) (signed char)120))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 3; i_11 < 14; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            {
                var_25 = arr_23 [9ULL] [i_11] [i_11] [i_11];
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_27 [i_13] [(unsigned short)0] [11U] [i_11 - 3] [i_11 - 3] [i_11 - 3])))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_12] [i_11 - 1] [i_11] [i_11] [i_11]))))) <= (((unsigned int) arr_1 [i_11 - 1] [i_14 + 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            var_28 ^= ((/* implicit */unsigned int) (+(5436195567244457058ULL)));
                            var_29 = ((/* implicit */int) (~(((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_11]))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_14 + 3] [i_13] [i_11])) : (((/* implicit */int) (unsigned char)136)))))))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_9) * (9930227062009326632ULL)))) ? ((~(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_1))))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_11 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14] [i_14 - 1])), (arr_46 [i_14 + 2] [i_14 + 3] [i_13] [i_11 + 1])))))));
                    }
                    for (signed char i_16 = 3; i_16 < 11; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_45 [i_11] [i_12] [i_13] [i_16 + 1])) : (((/* implicit */int) arr_26 [i_11] [i_12] [i_11] [10]))))) - (min((var_11), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2985925020U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)18))))), (((((/* implicit */_Bool) 3040955829U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_10)))))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_12] [i_12]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), (2985925020U))))));
                    }
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
                    {
                        arr_59 [i_17] = ((/* implicit */int) (-(((unsigned int) min((((/* implicit */unsigned long long int) var_5)), (arr_12 [i_12] [i_12] [(unsigned short)20] [(unsigned short)20]))))));
                        var_33 = ((/* implicit */unsigned char) arr_4 [i_11] [i_12]);
                    }
                    for (signed char i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) 4294967291U)), (arr_60 [i_11] [i_12] [i_12] [i_13] [i_13] [i_18]))), (((((/* implicit */_Bool) arr_60 [i_12] [i_18] [i_13] [i_11 - 3] [i_12] [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_60 [i_11 + 1] [i_12] [i_12] [i_12] [i_13] [i_18])))));
                        var_35 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-110)), (var_10)))), (((unsigned long long int) 2571950089059465993ULL)))) - (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_3)))) - ((+(((/* implicit */int) var_5)))))))));
                        arr_64 [(unsigned short)12] [i_13] [i_11] = ((/* implicit */unsigned char) (+((-(min((var_11), (((/* implicit */unsigned long long int) arr_35 [i_18] [i_12] [i_12] [i_12] [i_11]))))))));
                        var_36 = ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43911))))))))));
                    }
                }
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_6))));
            }
        } 
    } 
}
