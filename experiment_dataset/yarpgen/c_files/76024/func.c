/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76024
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
    var_11 -= ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [4ULL] [4ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [2] [9ULL]))))) : (((/* implicit */int) max((arr_2 [i_0 - 1] [i_1] [i_1]), (arr_2 [i_0 - 1] [i_0 - 1] [4U]))))));
            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0 + 1]))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0])) * (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_1]))))));
        }
        for (int i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_15 *= ((min((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_2 + 1])), (max((arr_0 [i_3]), (((/* implicit */unsigned int) (unsigned char)154)))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0])))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)102))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned short)2] [i_2] [i_3] [i_0 - 3] [i_3])) > (var_6))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1])) <= ((-2147483647 - 1))))) + (((/* implicit */int) arr_3 [i_0] [i_0]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((12389376098792547503ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                        var_18 *= (unsigned short)0;
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 1]);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */int) var_10))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)102))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 3; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_17 [i_6] [i_6] [i_6] [i_6 + 2] [i_2 - 1] [i_2 - 1])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) arr_10 [i_0] [(unsigned short)2]);
                        var_24 = ((/* implicit */unsigned long long int) (+(arr_21 [i_0] [i_2] [i_2] [i_6 - 3] [i_2 + 2])));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_7] [i_7] [i_7]))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 6; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((469704293) & (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)6] [i_2 - 1] [i_6 - 2]))))))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5] [i_2] [9] [i_6] [i_8 + 4])) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) ((unsigned char) arr_12 [i_0 - 1] [i_0 - 1])))));
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)154))));
                    }
                    for (unsigned short i_9 = 2; i_9 < 6; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 18446744073709551615ULL))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (max((var_2), (((/* implicit */int) arr_10 [i_0 + 1] [i_6])))) : (((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_20 [i_0] [i_2 - 1] [i_2 - 1] [i_6 - 1])) : (((/* implicit */int) var_10)))))) ^ (((int) var_6)))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 3; i_10 < 8; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 3; i_11 < 8; i_11 += 2) 
                    {
                        var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_11 - 2] [i_2 + 2] [i_2 + 2] [i_11 - 2] [i_11] [9]))) : (arr_9 [i_11 - 2] [i_2 + 2])));
                        var_32 = (-(((int) arr_13 [i_0 - 2])));
                    }
                    var_33 = ((/* implicit */unsigned int) var_6);
                    var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)153))));
                }
                for (unsigned short i_12 = 3; i_12 < 8; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 2; i_13 < 9; i_13 += 1) 
                    {
                        var_35 = arr_7 [i_0 - 1] [0];
                        var_36 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))))))));
                        var_37 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0 - 1])) ? (max((arr_19 [i_0 + 1]), (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153)))));
                    }
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (-(((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2]))))))))))))));
                    var_39 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (arr_21 [i_12] [i_2] [i_2 - 1] [i_2] [i_0 - 1]))) ? (arr_21 [i_12] [i_2] [i_2 + 2] [i_2] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154)))));
                    var_40 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((arr_28 [i_0 - 2] [2U] [i_5] [0U]), (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))) : (((/* implicit */int) ((unsigned short) var_10)))))) && (((/* implicit */_Bool) 33554431U))));
                    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((1806480687), (var_1)))))) ? (max((arr_34 [i_0 - 3] [i_0] [i_0 - 3] [(unsigned short)9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_2])) ? (((/* implicit */int) arr_29 [i_5] [i_2 + 2] [i_0 - 3] [i_2 + 2])) : (((/* implicit */int) arr_10 [i_0] [i_12]))))))) : ((-(arr_23 [i_2 + 2] [i_2 + 2] [i_2 + 2] [(unsigned char)9])))));
                }
                var_42 = ((/* implicit */int) max((var_42), (min((min((((/* implicit */int) ((var_5) == (var_1)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)34187)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))))))));
                var_43 *= arr_12 [i_0 - 3] [i_2];
            }
        }
        var_44 = ((/* implicit */unsigned long long int) ((819081966U) == (((/* implicit */unsigned int) -176110926))));
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [6ULL]))) - (arr_12 [i_0 - 2] [i_0 - 3]))) : (max((((/* implicit */unsigned int) arr_16 [i_0] [2] [i_0])), (arr_0 [i_0])))))) ? (176110925) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1694221502U) : (4294967295U)))))))));
    }
}
