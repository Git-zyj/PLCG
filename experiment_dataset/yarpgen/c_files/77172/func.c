/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77172
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) ((((arr_3 [i_1 + 2] [i_1 - 4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))) : (var_10))) >> (((((arr_3 [i_1 - 2] [i_1 + 1]) ? (var_6) : (((/* implicit */int) var_2)))) + (469483297)))));
            arr_4 [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
        }
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((arr_11 [i_0]) != (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2 + 2] [0ULL] [i_4] [i_5] [i_5]))))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((+((~(var_7)))))));
                            arr_14 [i_3] [(unsigned char)9] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_12 [1LL] [i_4 - 2] [i_3] [i_2 - 1] [(unsigned short)5] [i_3] [i_0])))))));
                            arr_15 [(signed char)12] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 2] [2LL] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38897))) : (arr_7 [i_2 + 2] [i_2] [(unsigned char)8])))))) && (((((/* implicit */unsigned int) (-2147483647 - 1))) >= (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [0LL])))))))));
                            arr_16 [i_5] [i_0] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_9 [i_4 - 2] [i_4 - 2] [i_4] [i_5])))), (((((unsigned long long int) arr_5 [i_0] [i_4])) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_9 [i_0] [i_2] [i_3] [i_5]))))))));
                        }
                        var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])), (var_7)))) ? (((/* implicit */int) arr_5 [i_4] [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_0])))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3] [(short)8] [i_0] [i_4 + 1] [i_4])) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 - 1] [i_2] [i_3] [i_4 - 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [(short)11] [i_3]))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) > (arr_7 [i_0] [i_2] [(short)11])))))))));
                        arr_17 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_2 + 2] [i_3]);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_3])) ? (((/* implicit */int) var_12)) : ((~(-2147483645)))));
                        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 1] [i_2 + 2]))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4 - 1] [i_2 + 2])) >> (((((/* implicit */int) arr_5 [i_4 - 1] [i_2 + 2])) - (7884))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (short i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_6] [(unsigned char)12] [3LL] [i_0] [i_6]))));
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0]))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_7] [i_2 - 1]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                var_21 |= ((/* implicit */unsigned short) (_Bool)1);
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    arr_31 [i_0] [i_2] [(signed char)7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_2 + 1] [i_2 + 1] [(unsigned char)8]))) / (arr_23 [i_0] [i_2 + 1] [i_8])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [6U]))) & (arr_9 [i_0] [i_2 + 2] [i_8] [i_9]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))) : (arr_28 [i_0] [i_9 + 1] [i_8] [i_2 + 1])));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_0] [i_9] [i_0] [i_0] = ((((/* implicit */_Bool) arr_11 [i_9])) ? (min((((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_8] [i_10]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2 + 2] [i_2 + 2] [i_2] [5LL]))) : (arr_23 [(unsigned char)4] [i_8] [i_10 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_30 [i_9 - 1] [i_9 + 1] [1U] [i_9]), (arr_30 [i_9 + 3] [i_9 + 3] [i_9 - 1] [i_9]))))));
                        var_22 = ((/* implicit */short) min((((/* implicit */int) var_13)), ((-((-(((/* implicit */int) arr_25 [2] [i_2] [i_8] [2]))))))));
                    }
                    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 3) 
                    {
                        arr_37 [i_0] [i_0] [i_2] [i_8] [(unsigned short)12] [i_9] = ((/* implicit */unsigned short) arr_19 [i_0] [i_8] [i_9 + 2] [i_11]);
                        var_23 = ((/* implicit */unsigned int) var_10);
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    var_24 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 8715100800219067289ULL)) ? (arr_32 [i_2] [i_2 + 2] [i_8] [i_12] [i_2 - 1]) : (((/* implicit */unsigned long long int) -2147483636))))));
                    var_25 = ((/* implicit */long long int) max((var_25), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) : (max((((/* implicit */long long int) 1256859915U)), (arr_9 [i_0] [i_2] [12U] [i_12])))))))));
                    arr_40 [i_12] [i_8] [(unsigned short)3] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-1LL)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_2] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_30 [i_8] [i_8] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_0] [i_0] [i_2] [i_8] [(unsigned short)12] [i_2])))));
                    arr_41 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) arr_3 [(short)2] [i_12]);
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_36 [i_2] [i_2] [i_2 + 1] [i_8] [i_12])))) ? (arr_7 [i_2] [i_8] [i_12]) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_25 [i_12] [i_8] [i_2] [i_0])))), (-2147483635))))));
                }
            }
            for (int i_13 = 2; i_13 < 12; i_13 += 3) 
            {
                arr_45 [i_13] = (((+(arr_39 [i_0] [i_2 - 1] [i_13 + 1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_0] [i_2] [i_0])))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_15] [i_14] [i_0] [i_0])) || (((/* implicit */_Bool) var_10))))) >= (((((/* implicit */_Bool) arr_50 [(_Bool)1] [i_2])) ? (((/* implicit */int) var_11)) : (-2147483639)))))), (((signed char) arr_6 [i_2 + 1]))));
                            var_27 |= ((/* implicit */short) ((arr_36 [i_0] [i_0] [i_13 + 1] [13ULL] [i_15]) >= (max(((~(arr_36 [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_14]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : (var_4)))))));
                            arr_51 [i_0] [i_2] [i_13] [i_14] [i_15] = ((unsigned long long int) (-(((/* implicit */int) var_11))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) var_9);
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(var_3)))) - (var_5))))));
            }
        }
        for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 2) /* same iter space */
        {
            arr_55 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)44855)) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_44 [i_16] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (9223372036854775804LL)))))))));
            var_30 = ((/* implicit */_Bool) min((min((arr_49 [i_16] [i_16] [i_16 + 1] [i_0] [i_0] [i_16 + 2] [i_16 + 1]), (((/* implicit */int) arr_24 [i_16 + 2] [i_16 + 2] [i_16])))), (((/* implicit */int) min((var_2), (((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_16] [i_16]))))))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 2) /* same iter space */
        {
            var_31 &= ((/* implicit */unsigned short) ((unsigned int) (+(((arr_7 [i_0] [(signed char)8] [i_17]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
            var_32 = 7730403700462611720LL;
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                var_33 = (~(arr_8 [i_0] [i_17] [i_17 + 2] [i_18]));
                arr_61 [i_0] [i_0] [i_17] [i_18] |= var_9;
                var_34 = ((/* implicit */int) ((signed char) ((((var_8) % (((/* implicit */int) var_9)))) < (((((/* implicit */int) var_0)) - (var_6))))));
                var_35 = (-(18446744073709551615ULL));
            }
            var_36 = arr_27 [11] [10ULL] [i_0] [i_0];
        }
        var_37 = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [(signed char)2]);
    }
    for (short i_19 = 0; i_19 < 11; i_19 += 3) 
    {
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_19] [i_19] [i_19] [i_19])) || (((((/* implicit */int) ((var_4) >= (arr_32 [i_19] [(unsigned char)2] [i_19] [i_19] [i_19])))) < (((/* implicit */int) var_12))))));
        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_54 [(unsigned short)6] [i_19]))));
    }
    /* LoopNest 3 */
    for (unsigned char i_20 = 3; i_20 < 9; i_20 += 2) 
    {
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                {
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) 1539359890))));
                    arr_75 [i_20 - 3] [(short)2] [i_22] = ((/* implicit */unsigned short) ((arr_67 [5ULL] [i_21]) ? (((/* implicit */unsigned long long int) 5680367878785467718LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_20] [i_20 + 1] [i_21] [i_22])), ((unsigned char)66))))) ^ ((~(288230376151711232ULL)))))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((((/* implicit */_Bool) ((((/* implicit */int) min((var_12), (((/* implicit */signed char) (_Bool)1))))) / ((-(var_8)))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_4))) : (((unsigned long long int) var_10))))))));
    var_42 = ((/* implicit */signed char) (((+(max((((/* implicit */int) var_13)), (var_8))))) <= (((/* implicit */int) var_12))));
    var_43 = ((/* implicit */_Bool) 6512300673309385477LL);
}
