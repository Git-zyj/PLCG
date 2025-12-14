/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80919
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))))) == (((/* implicit */int) (signed char)-120)))))));
        var_13 = ((/* implicit */unsigned char) max(((((~(24LL))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)123))))), (((/* implicit */long long int) ((signed char) (_Bool)1)))));
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) && (((/* implicit */_Bool) max(((signed char)-22), (arr_1 [i_0]))))));
        var_15 = ((/* implicit */unsigned int) var_5);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 += min((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) 14368590314517991602ULL)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_3 [i_1])), (var_8))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (-(((int) var_11))));
                            arr_15 [(signed char)8] [i_1] [(_Bool)1] [i_3] [(short)14] [(short)14] [i_5] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_7 = 3; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    arr_21 [i_7] = ((/* implicit */int) ((unsigned char) (unsigned char)99));
                    arr_22 [i_1] [i_1] [i_6] [17ULL] &= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_1] [i_2] [i_2 + 3] [i_7 + 2]))))) ? (((long long int) 14368590314517991594ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((9344040199983941515ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [(unsigned short)7] [i_2 - 1] [i_7 - 3]))))))));
                    var_18 ^= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned short)65531))))), (((((/* implicit */_Bool) var_2)) ? (17379755243154681595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)10] [(unsigned short)10] [i_2 - 1]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) ^ (-610453423))))))));
                }
                for (unsigned char i_8 = 3; i_8 < 15; i_8 += 4) /* same iter space */
                {
                    arr_26 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)2981), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) -6LL)) ? (4095365842U) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) max((((unsigned short) arr_3 [i_2])), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) == (var_3))))))))));
                    var_20 += (signed char)121;
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_9))));
                }
                for (unsigned char i_9 = 3; i_9 < 15; i_9 += 4) /* same iter space */
                {
                    arr_29 [i_1] [(unsigned short)16] [i_9] [i_9 + 3] = ((/* implicit */int) min((((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) 1826240433)), (199601453U))))), (var_2)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) var_8));
                        arr_32 [(unsigned short)9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-25LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_1) || (((/* implicit */_Bool) -729125988))))) + (((/* implicit */int) (signed char)-26))));
                    }
                    for (int i_12 = 1; i_12 < 15; i_12 += 3) 
                    {
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (-2025029214) : (-1674022385)));
                        arr_39 [i_1] [i_2] [i_9] [i_9 + 3] [i_1] = ((/* implicit */unsigned short) min((1515173692U), (((/* implicit */unsigned int) (signed char)-17))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_26 += ((/* implicit */short) var_1);
                        arr_42 [i_1] [(unsigned char)6] [i_1] [(unsigned char)6] [i_9] = ((unsigned short) -24LL);
                    }
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)217))))), (min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_10)))))))));
                        var_29 += ((/* implicit */signed char) (+(1826240432)));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) * (min((((((/* implicit */_Bool) 1826240415)) ? (9172303647360285441LL) : (18014398509481983LL))), (((/* implicit */long long int) (signed char)0))))));
                    }
                }
                for (unsigned char i_15 = 3; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_7) & (var_8)))) * (((var_5) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [16] [0ULL] [i_2] [(unsigned char)10] [i_6] [i_15 - 2])) * (((/* implicit */int) var_11))))))))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 3; i_16 < 16; i_16 += 1) 
                    {
                        var_32 = (i_15 % 2 == zero) ? (((/* implicit */_Bool) min(((+(((1515173692U) << (((((/* implicit */int) arr_45 [i_15])) - (23511))))))), (((/* implicit */unsigned int) ((((unsigned int) (_Bool)1)) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [(signed char)13] [(signed char)13] [i_15] [i_15]))))))))) : (((/* implicit */_Bool) min(((+(((1515173692U) << (((((((/* implicit */int) arr_45 [i_15])) - (23511))) - (39186))))))), (((/* implicit */unsigned int) ((((unsigned int) (_Bool)1)) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [(signed char)13] [(signed char)13] [i_15] [i_15])))))))));
                        var_33 = ((/* implicit */short) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)0]);
                    }
                }
                var_34 = ((/* implicit */long long int) arr_7 [i_1] [i_2] [i_6]);
                /* LoopSeq 1 */
                for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    var_35 += ((/* implicit */unsigned short) (signed char)15);
                    arr_55 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) max(((+(261888ULL))), (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (var_8))) < (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))))))));
                }
            }
            for (signed char i_18 = 2; i_18 < 15; i_18 += 1) 
            {
                var_37 += ((/* implicit */unsigned char) min((arr_51 [i_2] [i_2] [i_2] [(unsigned short)9]), (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_1] [i_1] [i_18 + 3] [i_18 - 1] [i_18 + 3] [i_18]))) : (0LL))))));
                var_38 = ((/* implicit */signed char) ((short) ((signed char) (signed char)11)));
            }
            /* vectorizable */
            for (unsigned int i_19 = 1; i_19 < 16; i_19 += 2) 
            {
                arr_62 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [16LL] [(unsigned char)16]))) - (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (-1056810209) : (((/* implicit */int) (unsigned char)176))))) : (arr_34 [i_1] [i_2] [i_19])));
                var_39 -= ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
            }
            arr_63 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (~(2134461734)))) : (((((unsigned long long int) var_4)) + (((/* implicit */unsigned long long int) (-(var_4))))))));
            arr_64 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)33)) << (max((((/* implicit */int) (_Bool)1)), (-1056810209)))));
        }
    }
    var_40 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(var_7)))) <= ((-(var_4)))));
}
