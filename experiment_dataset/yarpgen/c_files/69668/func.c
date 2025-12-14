/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69668
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_11)), (var_12))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))))))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_18) == (var_2))))))) ? ((~(var_14))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) & (arr_9 [i_0] [i_1] [i_2] [i_1])))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((max((((var_12) + (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) var_15)) : (arr_5 [i_0] [i_0] [i_0])))))) - ((((-(var_3))) + (((/* implicit */unsigned long long int) (+(var_14))))))));
                            var_21 = ((/* implicit */unsigned char) (~(min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_10))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            var_22 |= min(((-(arr_16 [i_0] [i_1] [i_5] [i_5 + 1] [i_5]))), (((/* implicit */unsigned long long int) (!(var_5)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_8 [i_5 + 1] [i_5 + 1])), (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13975)))))));
                            var_24 &= ((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (-9223372036854775794LL)));
                            arr_17 [i_0] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((min((min((((/* implicit */unsigned long long int) var_15)), (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_5 - 1]))))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2]))));
                        }
                        for (int i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) var_18);
                            arr_20 [i_2] [i_1] [i_2] [i_3] [i_6 - 1] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                        }
                        /* LoopSeq 1 */
                        for (int i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_18)) + (((((/* implicit */unsigned int) (~(var_18)))) | (arr_15 [i_1])))));
                            arr_24 [i_0] [i_1] [i_1] [i_3] [i_7] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) max((arr_12 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_1] [i_7 + 1]), (arr_12 [i_7] [i_7] [i_7] [i_7 - 2] [i_7] [i_1] [i_7 - 1]))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_21 [i_7 + 1] [i_3] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */long long int) var_15))))) ? (max((17ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) var_15)))))));
                        }
                        var_28 *= max((((/* implicit */unsigned long long int) ((var_18) < (((/* implicit */int) var_6))))), ((((_Bool)1) ? (7185946154222010372ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))));
                        arr_25 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((int) var_13)) != (((((((/* implicit */int) (unsigned char)227)) + (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_19 [i_3] [i_1] [i_2] [i_3]))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) max(((+((-(((/* implicit */int) var_7)))))), (((int) (+(((/* implicit */int) var_1)))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_8] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_8] [i_9] [i_10 + 2] [i_11]))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_12 [i_0] [i_8] [i_9] [i_10] [i_11] [i_8] [i_11]))))));
                            arr_37 [i_0] [i_10] [i_9] [i_10] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) | (var_12)))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_11] [i_10 + 1])) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((arr_16 [i_10] [i_10] [i_10 - 1] [i_10] [i_10]) - (16163014994797894060ULL)))))));
                            var_32 |= ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                arr_38 [i_0] [i_8] [i_8] = (-(arr_15 [i_8]));
            }
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(14U)))) && (((/* implicit */_Bool) var_13))));
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_34 = min((((((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_0] [i_0])) ? (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_12] [i_12]) + (((/* implicit */long long int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (~(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) arr_5 [i_0] [i_12] [i_12])))))))));
            var_35 |= ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_12]), (arr_4 [(signed char)6]))))) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 1) 
    {
        for (signed char i_14 = 2; i_14 < 23; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_53 [i_13] [i_13] [i_14 - 2] [i_13] = ((/* implicit */unsigned char) min((((arr_44 [i_13 + 2]) ? (((/* implicit */int) arr_50 [i_13 + 1])) : (((/* implicit */int) arr_44 [i_13 - 1])))), (((/* implicit */int) ((((long long int) var_0)) != (((/* implicit */long long int) ((/* implicit */int) ((arr_44 [i_13]) || (((/* implicit */_Bool) var_18)))))))))));
                    var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_43 [i_13 + 1] [i_14 - 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_16)))) : (arr_48 [i_14 - 2] [i_14 + 1] [i_14]))) * (((((((/* implicit */_Bool) arr_45 [i_13 - 1])) || (arr_44 [i_13 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) && (var_11))))) : (min((var_12), (((/* implicit */unsigned long long int) arr_49 [i_13] [i_14] [i_14] [i_15]))))))));
                    var_38 = (i_13 % 2 == 0) ? (max(((+(((/* implicit */int) arr_51 [i_13] [i_14 - 2])))), (((((/* implicit */int) arr_51 [i_13] [i_14 - 1])) >> (((((/* implicit */int) arr_51 [i_13] [i_14])) - (29397))))))) : (max(((+(((/* implicit */int) arr_51 [i_13] [i_14 - 2])))), (((((/* implicit */int) arr_51 [i_13] [i_14 - 1])) >> (((((((/* implicit */int) arr_51 [i_13] [i_14])) - (29397))) + (11768)))))));
                }
            } 
        } 
    } 
}
