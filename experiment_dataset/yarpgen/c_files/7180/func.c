/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7180
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
    var_16 = var_6;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned char) min((min((min((((/* implicit */int) var_6)), (arr_6 [i_0] [i_1] [i_2 - 1]))), (((/* implicit */int) var_3)))), (((/* implicit */int) (short)30720))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        arr_12 [i_1 + 1] [20] |= ((/* implicit */int) max((arr_10 [i_0] [3] [i_2 - 1] [i_3]), (max((arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_3 + 1]), (arr_10 [i_0] [10ULL] [i_2 - 1] [i_3 - 1])))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1 - 1] [i_3] [i_3 + 1] [i_4] = ((/* implicit */_Bool) (+(((int) (unsigned short)1024))));
                            arr_16 [i_3] [i_3] [i_2] [i_1 - 1] [i_3] = var_15;
                            var_17 -= ((/* implicit */int) (((~(-8680081772178127560LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11611)))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */unsigned long long int) var_4)) & (var_0)))));
                            arr_20 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) var_5);
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 6983446982190524135ULL))));
                            arr_24 [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((var_1) < (var_14)));
                            arr_25 [i_6] [i_3] [(_Bool)1] [i_2 - 1] [i_3] [i_0] = ((/* implicit */int) var_12);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_28 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(((int) var_9))));
                            arr_29 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] [i_7] = ((/* implicit */short) arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_3 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_8] [i_1 + 1] [i_8] = ((/* implicit */unsigned char) arr_27 [(unsigned short)20] [i_1] [i_1] [i_8]);
                        arr_33 [i_2 - 1] [i_1 + 1] [i_0] &= ((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */unsigned int) ((arr_13 [i_8 - 2] [i_1 + 1]) + (((/* implicit */int) var_6)))))));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */int) max((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3)))))))));
                        var_20 *= ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_4)))) >= (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))))), (var_11)));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1]))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 20; i_10 += 4) 
                    {
                        arr_38 [i_1 - 1] [i_10] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 3813924610654668285LL)), (11463297091519027480ULL)));
                        arr_39 [i_2 - 1] [i_1] [i_10 - 1] [i_10] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                        var_22 ^= ((/* implicit */unsigned char) ((min((max((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_1)))) >> (((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0])) ^ (max((((/* implicit */unsigned long long int) 406345102)), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) - (1052597905063250254ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((long long int) var_14)) >= (((/* implicit */long long int) ((unsigned int) 11463297091519027474ULL)))))) % ((-(((((/* implicit */_Bool) 11463297091519027474ULL)) ? (((/* implicit */int) var_7)) : (var_11)))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(11463297091519027481ULL)));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 6983446982190524141ULL))));
                        }
                        arr_44 [i_10] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((min((min((6983446982190524128ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11463297091519027480ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_1 + 1] [i_2] [i_10] [i_10 - 2]))))))), (((min((var_0), (((/* implicit */unsigned long long int) (_Bool)0)))) - (((/* implicit */unsigned long long int) var_4))))));
                    }
                    var_25 ^= ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 6983446982190524116ULL)) && (((/* implicit */_Bool) 6983446982190524134ULL))))))))));
                    var_26 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))) : (11463297091519027468ULL)))));
                    var_27 ^= ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    } 
    var_28 = 6983446982190524134ULL;
}
