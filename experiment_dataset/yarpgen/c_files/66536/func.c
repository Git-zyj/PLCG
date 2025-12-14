/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66536
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
    var_20 = ((int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(var_0)))) ? (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (591068584U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) ((18446744073709551612ULL) >= (((/* implicit */unsigned long long int) min((26U), (((/* implicit */unsigned int) -2147483639)))))))))))));
                            var_23 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_1] [i_1 + 1] [i_1 + 1] [i_3 + 1]))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (((-(arr_5 [i_1] [i_0]))) != (((/* implicit */int) max(((signed char)-1), ((signed char)0))))))) >= (var_18)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((var_15) >> (((((/* implicit */int) arr_1 [(signed char)13])) + (103))))) & (((/* implicit */unsigned long long int) ((int) (_Bool)1))))))));
                        var_27 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (9223372036854775800LL) : (((/* implicit */long long int) var_6)))));
                        var_28 = ((/* implicit */unsigned int) ((((unsigned int) 2147483647)) <= (((unsigned int) 4294967295U))));
                        var_29 = ((/* implicit */unsigned long long int) var_14);
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_3 [i_0]))) * (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [(signed char)19]))))))))));
                    var_31 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_13))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [(unsigned short)15]))) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_10)))))));
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0]);
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_21 [i_1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_6] [i_7]);
                        var_33 -= ((/* implicit */int) ((long long int) ((591068584U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
                    }
                    for (signed char i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        var_34 -= ((/* implicit */signed char) var_6);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_35 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_9])))))));
                            arr_27 [i_9] [i_9] [i_9] [i_9] [i_1] [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_8]))) | (var_7))) * (((/* implicit */unsigned long long int) 591068592U))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6435305361450422226ULL)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [i_8] [i_8 - 4] [i_0]))));
                            arr_28 [i_9] [i_8] [i_8] [i_1] [16ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        arr_29 [i_0] [i_1] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 6435305361450422226ULL)) ? ((-(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) | (var_18))))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 4) 
                    {
                        var_37 -= ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))));
                        arr_34 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36622)) || ((!(((/* implicit */_Bool) 3ULL))))));
                        var_38 = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_10 - 2]));
                        arr_35 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_10])) + (2147483647))) >> (((((/* implicit */int) arr_23 [i_1 + 1])) - (56656)))));
                    }
                    for (unsigned short i_11 = 3; i_11 < 17; i_11 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_11] [i_11 + 1] [i_0] [i_1 + 1] [i_0]))));
                        arr_40 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6])) || (((/* implicit */_Bool) (signed char)(-127 - 1))))));
                    }
                    var_39 -= ((/* implicit */unsigned short) (_Bool)1);
                }
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */_Bool) var_13)) ? (4718075726688658124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) max((arr_20 [i_0] [i_0] [i_0]), (var_2))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3703898722U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) - (var_0)))))) : (max(((-(176823155U))), (max((arr_4 [i_15]), (((/* implicit */unsigned int) var_2))))))));
                                arr_53 [i_12] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) min((var_9), (((/* implicit */short) var_14))))))));
                            }
                        } 
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-99)), ((+(max((12011438712259129390ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))));
                var_43 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                arr_54 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((9U), (((/* implicit */unsigned int) arr_6 [i_12] [i_12] [i_12] [i_12])))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((min((4294967283U), (((/* implicit */unsigned int) (signed char)41)))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_13] [(short)16] [i_13] [(short)16])))))))) : ((-((-(var_15)))))));
            }
        } 
    } 
    var_44 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_6)), (var_16)));
}
