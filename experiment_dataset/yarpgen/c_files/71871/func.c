/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71871
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
    var_17 = ((/* implicit */_Bool) var_6);
    var_18 = ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_19 = (-(min(((-(arr_9 [i_2] [i_2] [(_Bool)1] [(unsigned short)11]))), (((/* implicit */int) var_0)))));
                                var_20 = ((/* implicit */_Bool) var_4);
                                arr_14 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_2]))));
                                arr_15 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned short)1] [(unsigned char)7])) >> (((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_5] [i_0])) - (2163))))) == (((/* implicit */int) min((arr_7 [i_6 - 1] [i_5] [i_0] [i_1] [i_0]), (arr_7 [i_6 - 1] [9] [9] [i_0] [i_0]))))));
                                var_21 = ((/* implicit */int) max((var_21), (min((((/* implicit */int) ((arr_17 [(short)0] [i_6 - 1] [(short)0] [(short)0]) || (arr_17 [i_0] [i_6 - 1] [8] [(short)1])))), (var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_22 += ((/* implicit */unsigned short) max((((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) ^ (((/* implicit */int) arr_21 [i_7])))), (((/* implicit */int) ((((/* implicit */int) var_5)) < (min((arr_22 [i_7] [i_7]), (((/* implicit */int) arr_21 [(unsigned short)3])))))))));
        arr_23 [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_12)), (var_3)));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_21 [i_7])) + (((/* implicit */int) arr_21 [i_7]))))))), (var_11)));
        arr_24 [i_7] [i_7] = ((/* implicit */_Bool) min((arr_21 [i_7]), (arr_21 [i_7])));
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((arr_22 [i_8] [i_8]), ((~(((/* implicit */int) var_1))))));
        var_25 = ((/* implicit */unsigned short) var_16);
        var_26 = ((/* implicit */_Bool) arr_22 [i_8] [i_8]);
        arr_28 [(short)7] [(short)7] = ((/* implicit */int) arr_21 [i_8]);
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            arr_31 [i_9] [i_8] = var_16;
            arr_32 [i_8] [i_8] = ((/* implicit */_Bool) var_0);
            arr_33 [i_8] [i_9] = ((/* implicit */_Bool) arr_29 [9] [9] [9]);
            var_27 = ((/* implicit */unsigned long long int) arr_22 [i_8] [i_9]);
        }
        /* vectorizable */
        for (unsigned short i_10 = 2; i_10 < 11; i_10 += 4) 
        {
            arr_37 [3ULL] [i_10] = ((/* implicit */unsigned long long int) var_8);
            arr_38 [(unsigned short)5] [i_10 + 2] [i_8] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_1)))) | (((/* implicit */int) var_3))));
            arr_39 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_35 [i_10 - 2] [i_10 - 2] [i_10 - 2]);
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) var_13);
                            arr_49 [i_8] [i_8] [i_11] [i_8] [2] = ((/* implicit */short) ((arr_22 [(unsigned short)6] [i_10 - 1]) == (((/* implicit */int) var_16))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((arr_48 [i_8] [i_10 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (short i_16 = 4; i_16 < 11; i_16 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_12))));
                            arr_59 [3ULL] [i_14] [3ULL] [i_15] [3ULL] [i_14] [i_15] = ((/* implicit */short) ((((arr_48 [i_8] [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_14] [i_15] [(unsigned short)8]))))) ^ (((/* implicit */unsigned long long int) var_14))));
                            arr_60 [i_14] [i_15] [i_14] [i_16 - 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >= (var_13)));
                            arr_61 [i_14] [(_Bool)1] [i_14] [i_10] [i_14] = ((/* implicit */short) (-(16237460214385820261ULL)));
                        }
                    }
                } 
            } 
        }
    }
    for (int i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) arr_22 [i_17] [i_17]);
        arr_64 [i_17] &= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_51 [i_17] [i_17] [i_17] [i_17]), (var_0)))) ^ (((/* implicit */int) max((arr_51 [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned short) var_2)))))));
    }
}
