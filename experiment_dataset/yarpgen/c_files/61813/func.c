/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61813
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
    var_18 = ((/* implicit */unsigned int) (-(min((var_16), (((/* implicit */long long int) var_11))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((max((((/* implicit */short) (unsigned char)196)), (var_0))), (((/* implicit */short) (!(((/* implicit */_Bool) var_13))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_3))))), (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) (+(-857394543)))), ((((-(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) (-(var_9)))))))))));
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-16))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_23 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) + (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_16))))) != (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
            arr_5 [20U] |= ((/* implicit */short) max((((((/* implicit */int) (unsigned short)64150)) + (((/* implicit */int) (short)(-32767 - 1))))), ((-(((/* implicit */int) arr_4 [i_0]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_8 [i_2] [i_1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)29739)) && (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))) : (((unsigned long long int) var_10))));
                arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508))) | (4294967272U)));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((var_10) - (var_10))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2])) % (var_5))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                arr_18 [i_0] [i_0] [(unsigned char)0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (arr_0 [i_0] [i_0])))), ((short)(-32767 - 1)))))));
                arr_19 [i_0] [i_1] [i_1] [(unsigned short)12] |= max((((/* implicit */unsigned short) max((arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]), (arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])))), ((unsigned short)31032));
                arr_20 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned short)4] [(unsigned char)20] [i_5] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_16))))));
                var_26 = ((/* implicit */int) var_17);
            }
            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) < (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
            arr_21 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])), (min((max((var_13), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [14ULL] [i_1])))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) var_0);
                    arr_31 [i_0] [i_6] [i_0] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65515))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_29 = ((/* implicit */long long int) ((unsigned long long int) var_13));
                    var_30 = ((/* implicit */unsigned char) ((unsigned short) arr_29 [i_9]));
                }
                var_31 *= ((/* implicit */unsigned char) min((((unsigned long long int) arr_4 [i_7])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    arr_36 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                    var_32 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) max((arr_17 [i_0] [i_0] [i_0] [i_0]), (var_15))))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (min((((/* implicit */unsigned long long int) var_16)), (arr_35 [i_10 + 2] [i_10] [i_10] [i_10] [i_10] [i_10])))))));
                    var_33 = ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]);
                }
                var_34 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) var_8))));
            }
            for (long long int i_11 = 4; i_11 < 18; i_11 += 3) 
            {
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_37 [i_11 - 2] [i_11]), (((((/* implicit */_Bool) arr_37 [i_11 - 3] [i_11])) ? (arr_37 [i_11 - 3] [i_11]) : (var_16)))));
                arr_42 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((long long int) max((((/* implicit */unsigned long long int) var_15)), (arr_38 [i_0] [i_6] [i_11])))), (((/* implicit */long long int) ((unsigned int) 1392127214U)))));
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_34 [i_0] [i_0] [9ULL] [i_0])), (arr_16 [i_6] [i_11 - 3]))), ((-(var_16)))))), (min((arr_33 [i_11 + 3] [i_11 - 1] [i_11 + 1] [i_11 - 1]), (((/* implicit */unsigned long long int) var_9))))));
                    arr_45 [i_6] [i_6] [i_6] [(unsigned short)2] |= min((var_16), (min((((/* implicit */long long int) ((unsigned char) var_14))), (min((((/* implicit */long long int) var_12)), (arr_32 [i_0] [i_0] [i_0] [i_11] [i_0] [i_12]))))));
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_22 [i_11] [i_6]))));
                }
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_32 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 3]))))));
                    var_38 = ((/* implicit */short) ((max((min((arr_32 [i_11] [i_11 + 3] [i_11] [i_11] [i_11 - 4] [i_11]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((var_12), (((/* implicit */int) var_17))))))) >> (((((/* implicit */int) (unsigned short)65515)) - (65501)))));
                }
                for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    arr_52 [i_0] [i_6] [i_11 - 1] [i_0] [i_14] = ((/* implicit */unsigned long long int) arr_1 [i_11 - 4] [i_0]);
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [i_11 - 1] [(short)12] [i_11] [i_11] [i_11 - 1]) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_16))))))) % (max((max((var_12), (((/* implicit */int) (unsigned char)166)))), (((/* implicit */int) var_15))))));
                    arr_53 [i_0] [i_6] [i_0] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)16));
                }
            }
            for (int i_15 = 1; i_15 < 19; i_15 += 2) 
            {
                var_40 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)65513)))) >= (((/* implicit */int) var_7))));
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) min((var_1), (((/* implicit */short) arr_50 [i_0] [i_0] [i_6] [i_0]))))))))))));
                var_42 *= ((/* implicit */unsigned short) min(((((-(arr_22 [i_0] [i_0]))) >> (((arr_13 [i_15] [i_15] [i_15 - 1] [i_15] [i_15] [i_15 - 1]) - (14251972942653185177ULL))))), (((/* implicit */unsigned int) arr_27 [i_15 + 2] [i_15 + 1] [i_6]))));
                arr_56 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((arr_30 [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_15)), (arr_7 [i_0] [i_0] [i_0]))))))));
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 17; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) (short)0)))) - (((/* implicit */int) arr_55 [i_17 + 3] [i_17 + 1] [i_17 + 2] [i_17 + 2])))))));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_17 + 4] [i_17 + 2] [i_17 + 4])) <= (((/* implicit */int) var_14))));
                            arr_64 [i_16] [i_17 - 1] [i_0] = ((/* implicit */unsigned char) 787708684768140540ULL);
                        }
                    } 
                } 
                arr_65 [i_0] [i_16] |= ((/* implicit */signed char) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_6 [i_6] [i_6] [i_6] [i_6]))))) - (min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_6])), (arr_48 [i_6] [i_6] [i_6]))))), (((/* implicit */unsigned long long int) max(((~(var_12))), (((/* implicit */int) min((var_0), (var_2))))))))))));
        }
    }
    var_46 = ((/* implicit */signed char) ((int) var_3));
}
