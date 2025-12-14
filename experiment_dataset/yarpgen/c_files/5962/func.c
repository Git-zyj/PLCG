/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5962
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) var_4);
                            arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0] [i_0])))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */_Bool) var_10);
                    var_13 ^= ((/* implicit */signed char) var_10);
                    var_14 += ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) 2008937447)) | (((((/* implicit */long long int) ((/* implicit */int) (short)25394))) - (var_6)))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned short) var_11)))));
                    }
                    for (int i_6 = 3; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_9))))));
                        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */int) var_3))))) >= (((arr_18 [i_6] [i_4] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [(unsigned char)0] [i_4] [i_0] [14] [i_0]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) var_6);
                            arr_23 [i_1] [i_0] [1LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [i_1] [i_0] [i_1] [i_0]))) < (var_4))))));
                            arr_24 [i_0] [22LL] [23U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -2008937438)) : (var_4)));
                            var_19 = ((/* implicit */short) var_2);
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_6 - 1] [i_8])) + (((/* implicit */int) var_3))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_8] [i_0] [i_0] [i_1])) < (((/* implicit */int) (_Bool)1)))))) % (((long long int) -2008937418))));
                        }
                        for (short i_9 = 3; i_9 < 23; i_9 += 4) 
                        {
                            var_22 = (~((~(((/* implicit */int) var_3)))));
                            arr_32 [i_0] [i_0] [i_4] [i_6] [(unsigned short)14] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_31 [i_6 - 1] [8LL] [i_9 - 2] [i_0 - 1] [i_6 - 1]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((_Bool)1))))))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        arr_35 [i_0] [i_1] [i_0] [i_10 - 3] = (unsigned char)255;
                        var_23 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (int i_11 = 3; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        arr_38 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_37 [i_11 - 1] [i_0 - 1] [i_4] [12U] [(short)14] [i_1]));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            arr_41 [i_11] [7] [i_11] [i_0] = ((/* implicit */unsigned long long int) arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned long long int) ((var_5) <= (((/* implicit */int) var_9))))))));
                            arr_42 [i_0] [i_11] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [13LL] [19] [i_11] [i_12]))))) && (((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1] [i_0 + 1]))))) | (var_5)));
                            arr_43 [i_0] [i_0] [19ULL] [i_1] [i_4] [i_11] [i_12] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_4] [i_11 - 2] [i_0] [i_12])) ? ((~(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20907)) ? (((/* implicit */int) (short)20)) : (((/* implicit */int) var_8)))))))));
                            var_25 = ((/* implicit */long long int) var_10);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_0] [(short)23] [i_11] [i_4] [i_4] [i_1] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_25 [i_4] [i_0] [i_4])) : ((~(var_5))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))))));
                            arr_49 [i_0] [(unsigned short)9] [i_4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_11] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)));
                            arr_50 [(short)22] [i_0] [i_4] [i_11] [i_4] [17LL] = ((/* implicit */unsigned char) var_4);
                        }
                        arr_51 [i_0] [i_1] [17] [i_0] = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) var_11);
                            arr_54 [12ULL] [i_1] [i_1] [i_4] [0U] &= ((/* implicit */unsigned long long int) var_9);
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            arr_58 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((unsigned short) var_3)))));
                            arr_59 [i_0] [(short)2] [i_0] [i_0] = var_10;
                            arr_60 [i_0] = (short)-42;
                            arr_61 [(unsigned short)13] [i_0] [i_4] [i_11] = ((unsigned char) var_5);
                        }
                        for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                        {
                            arr_65 [i_0] [i_0] [i_4] [i_0] [i_16] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_4] [i_11] [(signed char)22]);
                            var_29 = ((/* implicit */unsigned short) var_11);
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                        {
                            arr_68 [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_10)))));
                            arr_69 [i_0] = ((/* implicit */unsigned int) var_10);
                        }
                        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                        {
                            arr_72 [i_0] [i_11 - 1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_4] [i_1] [i_4]);
                            arr_73 [(unsigned short)8] [i_1] [i_0] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_18] [i_11] [i_0] [i_0] [(short)12] [i_0]))));
                            arr_74 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */signed char) var_7);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1552782674))))) != (((/* implicit */int) arr_6 [(_Bool)1] [i_0 - 1] [i_0] [i_1]))));
                        }
                    }
                }
                arr_75 [i_0] [i_0] = (~(((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0]))))) % (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | ((~(((/* implicit */int) var_7))))))) | (var_4)));
}
