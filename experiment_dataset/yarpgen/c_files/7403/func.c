/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7403
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_2 [i_2]))) != (arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])));
                        arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (+((-(-6487939191705861827LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) var_9);
                            var_19 = ((/* implicit */unsigned char) 6487939191705861827LL);
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) -6487939191705861836LL);
                            var_20 *= (((~(arr_2 [i_3]))) >> (((110797175U) - (110797116U))));
                        }
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((min((arr_14 [i_0] [i_0] [i_6 - 1] [i_6] [i_6 - 1]), (arr_14 [i_3] [i_3] [i_6 - 1] [6] [i_6 - 1]))), (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [12] [i_3] [i_6 - 2] [i_6 - 2])), (arr_3 [i_0] [i_6 - 3] [i_2])))));
                            arr_19 [i_0] [i_0] [i_2] [10LL] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) | (((/* implicit */int) (_Bool)0)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_6 [i_0]))))) > (max(((+(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((4184170121U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (arr_1 [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8 - 2] [i_8 + 1])))))));
                            arr_30 [i_0] [i_7] [i_7] [i_10] [8LL] [5ULL] [i_10] = ((_Bool) ((((/* implicit */unsigned long long int) arr_28 [i_9] [i_8 + 1] [i_8 + 2] [i_0])) & (8606005022402861770ULL)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 3) 
                        {
                            var_23 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (((unsigned int) var_11))))), (((long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_35 [i_11] [i_11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_5 [i_0] [i_7] [i_8]))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_5 [22] [i_7] [i_11 - 1]))))));
                        }
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_3 [i_0] [i_7] [i_9]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            arr_38 [i_0] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (((((((-2099132688) | (var_0))) + (2147483647))) << (((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_6)))) - (18446744073709527336ULL)))))));
            var_25 = arr_37 [i_0] [i_12] [i_0];
            arr_39 [(_Bool)1] = ((/* implicit */unsigned char) ((((arr_3 [i_0] [i_12] [i_12]) + (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_12])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                var_26 = ((/* implicit */short) ((var_14) < (((/* implicit */unsigned long long int) (~(arr_37 [i_0] [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_47 [i_0] [i_0] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((max((max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_13] [i_14] [i_14] [i_14])), (5080712804931855189ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_13] [i_0]))))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_46 [i_0] [i_14] [i_0])) == (((/* implicit */int) (_Bool)1))))))))))));
                }
                /* vectorizable */
                for (long long int i_16 = 3; i_16 < 22; i_16 += 3) 
                {
                    var_29 = ((/* implicit */long long int) var_13);
                    var_30 += (!(((/* implicit */_Bool) arr_9 [i_16 - 3] [i_16] [i_16] [i_16])));
                    var_31 ^= ((/* implicit */long long int) arr_46 [i_0] [i_13] [i_13]);
                    var_32 = var_13;
                    var_33 = ((((/* implicit */_Bool) arr_49 [i_14] [i_14] [i_16] [i_16])) ? (932601556) : (arr_8 [i_16 + 1] [i_16] [i_16] [i_16] [i_16] [i_16 - 3]));
                }
            }
            arr_50 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_13] [i_13]))));
        }
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 22; i_17 += 4) 
        {
            for (long long int i_18 = 1; i_18 < 22; i_18 += 2) 
            {
                {
                    arr_58 [i_0] [i_17 + 1] [i_18] = ((/* implicit */unsigned int) ((max((var_14), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [20ULL] [i_17 - 1] [i_18] [(unsigned short)5])))) - (((unsigned long long int) var_2))));
                    arr_59 [(_Bool)1] [i_18] [i_18] [i_18] = ((((unsigned long long int) min((((/* implicit */unsigned short) arr_57 [i_0] [i_0] [i_18] [i_0])), ((unsigned short)57679)))) - (((arr_14 [i_18] [i_17 + 1] [i_17] [i_17] [i_0]) + (arr_14 [i_0] [i_17 + 1] [i_18 + 1] [i_17] [i_17]))));
                    arr_60 [i_0] [i_18] [i_0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_18] [i_18] [i_0] [i_18] [i_0])) * (var_2)))) ? (arr_27 [i_0] [i_17] [i_18 + 1] [i_18] [i_17 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_27 [i_0] [i_0] [i_17 + 1] [i_18] [i_18]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_19 = 1; i_19 < 15; i_19 += 2) 
    {
        for (long long int i_20 = 2; i_20 < 14; i_20 += 3) 
        {
            {
                var_34 = ((/* implicit */long long int) 8606005022402861762ULL);
                arr_65 [i_19 + 1] [3ULL] [i_20] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_21 = 2; i_21 < 15; i_21 += 4) 
    {
        for (long long int i_22 = 3; i_22 < 14; i_22 += 3) 
        {
            {
                var_35 = ((/* implicit */unsigned short) (signed char)111);
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_74 [i_22] [i_22] = ((/* implicit */unsigned long long int) max((((arr_37 [i_21] [i_22 - 1] [i_23]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_21] [i_22 + 1] [i_22 + 1] [i_23] [i_23]))))), (((var_8) ? (arr_31 [i_22 - 1] [i_22 - 1] [22ULL] [i_22 + 1] [i_22]) : (arr_37 [i_23] [i_22 + 3] [i_22 + 3])))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_22 - 1] [i_22])) ? (((/* implicit */int) ((((/* implicit */int) arr_40 [i_22 - 1] [i_21 + 2])) != (((/* implicit */int) arr_40 [i_22 - 1] [i_21 + 2]))))) : (((((/* implicit */_Bool) arr_44 [i_22 - 1] [i_22])) ? (((/* implicit */int) arr_44 [i_22 - 1] [i_22])) : (((/* implicit */int) arr_44 [i_22 - 1] [i_22]))))));
                    arr_75 [i_21 - 1] [i_22] [i_23] [9ULL] = ((/* implicit */unsigned long long int) arr_62 [12LL]);
                }
                /* vectorizable */
                for (unsigned char i_24 = 1; i_24 < 14; i_24 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) ((var_9) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_21] [i_21] [i_22] [i_22])) / (((/* implicit */int) arr_40 [i_22 + 3] [i_21])))))));
                    arr_79 [i_22] [i_24] [i_22] [i_22] = ((/* implicit */short) (+(((/* implicit */int) arr_57 [i_21 + 2] [i_24 + 1] [i_22] [i_24 - 1]))));
                }
                var_38 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_21] [i_21 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_21 + 1] [i_21 - 1] [i_21] [i_22]))) : (arr_4 [i_21] [i_21 - 2]))) == (((/* implicit */long long int) (~((-(((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}
