/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6891
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 ^= (+(var_1));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned char) var_3);
                        var_17 = ((/* implicit */unsigned char) max((((unsigned int) (+(((/* implicit */int) arr_10 [i_0] [(unsigned char)7] [i_2] [i_1] [i_2] [(unsigned char)15]))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)208)) << (((((arr_7 [i_2] [i_0] [i_0]) + (9086133123017715983LL))) - (13LL))))))))));
                        var_18 = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_19 -= ((/* implicit */unsigned char) ((arr_5 [i_0]) > (arr_5 [i_4])));
            var_20 |= ((/* implicit */long long int) ((unsigned char) ((arr_1 [i_0]) >> (((((/* implicit */int) arr_0 [i_0] [i_4])) - (183))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)13] [i_4] [(unsigned char)13] [11U] [i_4])) : ((~(((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                {
                    arr_20 [i_5] [i_5] [i_0] [i_6] &= ((unsigned int) (-(((/* implicit */int) arr_0 [i_6] [i_5]))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3923825938371829675LL)) && (((/* implicit */_Bool) (-(4294967267U))))));
                    var_23 = ((/* implicit */unsigned int) ((arr_6 [i_4] [i_5] [i_4]) / (((/* implicit */long long int) arr_2 [i_0] [i_4] [i_0]))));
                }
                for (long long int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((arr_18 [i_7] [i_5] [i_4] [i_4] [i_0]) / (((/* implicit */long long int) 4294967295U)))) * (((/* implicit */long long int) 0U))));
                    arr_23 [i_0] [(unsigned char)18] [i_0] [i_5] [(unsigned char)18] &= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_13 [i_0]))))));
                    arr_24 [i_0] [i_4] [i_0] &= var_14;
                }
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4607182418800017408LL) >> (((var_6) + (8418075494143271305LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [1U] [i_4] [1U])))))) : (((((/* implicit */long long int) 0U)) | (var_0)))));
                    var_26 ^= ((/* implicit */long long int) (unsigned char)117);
                }
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) ^ (4607182418800017408LL)))) ? (((((/* implicit */long long int) arr_12 [(unsigned char)16] [i_4] [(unsigned char)16])) | (arr_6 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_26 [i_0] [13U] [i_5] [i_9])) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (arr_8 [i_4] [i_4] [i_4] [i_4])))));
                    arr_31 [i_0] [i_4] [i_5] [i_9] = (~(var_14));
                    var_28 &= ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [18LL] [i_4])) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_5] [i_9] [i_9]));
                    arr_32 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_30 [13LL] [i_4] [i_4] [i_0]);
                }
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_29 = ((((/* implicit */long long int) ((((/* implicit */_Bool) 2305772640469516288LL)) ? (var_1) : (0U)))) / (arr_1 [i_10 + 2]));
                            arr_39 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((long long int) arr_4 [4U] [7U])) ^ ((-(var_0))));
                            var_30 = ((/* implicit */unsigned char) 4607182418800017408LL);
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) arr_15 [i_0])));
                    var_32 &= 2146435072U;
                    var_33 = ((-4607182418800017409LL) ^ (((/* implicit */long long int) arr_5 [i_13 + 3])));
                    arr_45 [i_0] [i_0] [i_4] [i_0] [i_12] [(unsigned char)6] |= ((/* implicit */unsigned char) ((unsigned int) ((long long int) arr_13 [i_0])));
                    arr_46 [2U] [2U] [i_12] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */long long int) 4048602252U)) / (var_3)))) ? (((var_9) / (1716144491U))) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (arr_3 [i_0] [i_4]))));
                }
                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                var_35 = ((/* implicit */unsigned int) var_8);
            }
            var_36 = ((/* implicit */unsigned char) arr_21 [i_4]);
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) 
        {
            var_37 = ((/* implicit */unsigned char) (((-(1427812301U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93)))));
            arr_51 [i_14] [4LL] [i_0] = ((/* implicit */long long int) ((((130048U) >> (((((/* implicit */int) (unsigned char)245)) - (243))))) | (arr_44 [i_0] [i_0] [i_14])));
        }
        /* LoopSeq 1 */
        for (unsigned int i_15 = 3; i_15 < 18; i_15 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_16 = 2; i_16 < 20; i_16 += 1) 
            {
                var_38 = ((/* implicit */unsigned char) arr_53 [i_0] [i_15 + 3] [i_0]);
                var_39 = ((/* implicit */unsigned int) (unsigned char)69);
            }
            arr_56 [i_15] [i_0] = ((/* implicit */long long int) (unsigned char)1);
        }
    }
    var_40 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) var_12)), ((~(var_2))))));
    var_41 = var_11;
}
