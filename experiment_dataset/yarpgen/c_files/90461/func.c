/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90461
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_1 [i_0]))))) != (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) arr_1 [i_0]))))))))));
                arr_5 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1] [i_0] [i_1])) + (20293))) - (12)))))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) - (2147483647))) + (2147483647))) << (((((((((/* implicit */int) arr_3 [i_1] [i_0] [i_1])) + (20293))) - (12))) - (43010))))))));
                var_18 = ((/* implicit */unsigned short) var_13);
                var_19 ^= ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_9 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) - (var_14)));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 *= arr_10 [i_2] [i_2] [i_2];
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_21 &= ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))))) - (arr_11 [i_4]));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14)) || (((/* implicit */_Bool) 4294967279U))));
                arr_15 [i_3] = ((/* implicit */_Bool) ((1152921504606846960ULL) + (((/* implicit */unsigned long long int) 2895599601U))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) arr_14 [i_7] [i_7] [i_7] [i_3]);
                            arr_25 [20] [i_3] [i_5] [i_3] [20U] = ((/* implicit */unsigned long long int) ((var_10) || (((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_6 - 2] [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_8 = 2; i_8 < 22; i_8 += 2) 
                {
                    arr_30 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) arr_28 [i_2] [0] [i_5] [i_5] [0] [10]);
                    arr_31 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) var_10);
                    arr_32 [(unsigned short)13] [i_5] [i_3] = ((/* implicit */unsigned short) ((arr_17 [(short)6] [i_3] [i_3] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(short)11] [i_5] [6ULL] [i_2] [i_5])))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) ((4275083787U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57471)))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8087)) != (((/* implicit */int) (unsigned short)57433)))))));
                    }
                }
                arr_35 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) != (((/* implicit */int) arr_26 [i_2] [i_3] [i_3] [i_3] [i_5] [i_5]))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_10 = 2; i_10 < 20; i_10 += 2) 
            {
                arr_38 [i_10] [i_3] [i_2] = ((/* implicit */short) arr_26 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 - 2] [i_10] [i_10 - 2]);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((arr_16 [8U] [i_3] [i_3]) & (((/* implicit */int) var_3))))) < (arr_33 [i_2] [i_10 + 2] [i_10 + 3] [i_10] [i_2] [i_2])));
            }
            var_27 = ((/* implicit */short) var_16);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (unsigned short i_12 = 3; i_12 < 18; i_12 += 2) 
        {
            {
                arr_44 [i_11] = ((/* implicit */short) arr_23 [i_11] [i_11] [i_12 + 2] [i_12] [i_12 - 3]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    arr_47 [i_13] [i_12 - 1] [i_12 - 1] [i_11] = ((/* implicit */_Bool) var_15);
                    var_28 += ((/* implicit */unsigned short) arr_23 [i_13] [i_12] [5] [i_12 - 2] [i_11]);
                }
                var_29 = arr_6 [2U];
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                var_30 += ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)9)) << (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_18 [i_11] [i_12 + 2] [(_Bool)0] [i_16]))));
                                var_31 = ((arr_29 [i_12] [i_12 + 2] [i_14] [(_Bool)1] [i_16] [i_12]) & (((((/* implicit */unsigned int) var_14)) / (arr_48 [i_11] [i_12 + 2] [i_14]))));
                            }
                            for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                            {
                                arr_58 [i_15] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_11] [i_11] [i_14] [i_14] [i_17])) == (((/* implicit */int) arr_24 [i_12] [i_12 - 3] [i_12] [i_12 + 3] [i_12 + 3]))))) < (((/* implicit */int) ((((arr_17 [i_11] [i_11] [i_11] [i_11]) & (((/* implicit */unsigned long long int) var_13)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_12] [i_11] [5ULL] [i_15] [i_17]))))))));
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((((/* implicit */int) arr_21 [i_11] [i_12] [i_14] [i_17])) ^ (((arr_43 [i_11] [i_11] [i_11]) << (((((/* implicit */int) var_7)) - (14973))))))) < (((/* implicit */int) var_16)))))));
                            }
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (((arr_13 [i_11] [i_11] [(unsigned short)6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) * (((/* implicit */unsigned int) arr_23 [i_11] [i_11] [i_11] [i_11] [(_Bool)1]))))));
                            arr_59 [i_15] = ((/* implicit */unsigned long long int) arr_57 [i_11] [i_11] [15ULL] [i_12 + 3] [i_12 + 3]);
                            arr_60 [i_15] [i_12 + 1] [i_15] [i_12] = ((/* implicit */short) ((((/* implicit */int) arr_54 [i_12 + 1] [i_11] [i_15] [i_15] [i_11] [i_11])) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_12 - 3] [i_11] [i_15] [i_15] [i_11] [i_11]))) < (var_12))))));
                            arr_61 [i_15] [i_14] [(unsigned short)17] [i_15] = ((((/* implicit */_Bool) ((arr_20 [i_12 + 1] [i_15] [i_12] [i_15] [i_12 - 2]) - (arr_20 [i_12 + 1] [i_15] [i_12 - 3] [i_15] [i_12 - 3])))) || (((19883515U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8082))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
