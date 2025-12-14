/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63412
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
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (_Bool)1);
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_1]))))), (min((((/* implicit */unsigned int) var_9)), (var_8)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned int) 0LL);
                            arr_13 [i_3] [i_1] [(unsigned short)10] [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) max((min((((/* implicit */int) arr_6 [i_0] [(unsigned char)7] [(unsigned char)6])), (var_6))), (((/* implicit */int) (unsigned char)49)))));
                            arr_14 [i_0] [(signed char)12] [i_3] [i_3] [7] = ((/* implicit */_Bool) ((unsigned long long int) min((((((/* implicit */long long int) arr_1 [i_1])) / (-8840895912676239786LL))), (((/* implicit */long long int) ((int) -3238450326684031791LL))))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                            {
                                arr_19 [i_0] [i_0] [i_3] [(unsigned char)10] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) 4U))));
                                arr_20 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0LL))));
                            }
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3] [i_1] [6ULL] [(signed char)10] [(signed char)15] [18ULL]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_1] [12U] [i_5] [i_1] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                                var_16 = ((/* implicit */int) max((0LL), (-8384841513740586764LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_17 ^= ((signed char) ((((/* implicit */_Bool) arr_17 [16] [i_1] [8LL] [16] [8LL])) ? (((/* implicit */int) arr_2 [(unsigned char)19] [i_1])) : (((/* implicit */int) (unsigned char)223))));
                        var_18 = ((/* implicit */int) arr_21 [i_0 + 2] [i_0 + 2] [i_5] [(unsigned short)0]);
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_19 &= ((/* implicit */short) arr_32 [i_0] [i_1] [i_1] [i_9]);
                        arr_37 [(unsigned short)14] [(unsigned short)14] [(unsigned short)16] [(unsigned short)16] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(arr_32 [i_0] [i_1] [i_5] [i_9])))) ? (((/* implicit */int) arr_10 [i_0] [(unsigned short)2] [i_5] [i_9] [i_0])) : (((/* implicit */int) arr_29 [i_9] [i_9] [i_5] [i_1] [i_0])))), (((((/* implicit */_Bool) ((arr_24 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9] [i_5] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])) || (var_3)))) : (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_5] [i_9])))))));
                        arr_38 [i_0] [8U] [i_5] [8U] = ((/* implicit */_Bool) ((((max((var_6), (((/* implicit */int) (unsigned char)106)))) > (((/* implicit */int) var_2)))) ? ((-(var_6))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)206)), ((short)7463))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) (unsigned short)53884)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5))))))));
                            var_21 = ((/* implicit */unsigned int) -3238450326684031791LL);
                            arr_42 [i_0] [(short)4] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((+(arr_15 [i_0]))) : (arr_33 [i_9])))), (min((var_8), (((/* implicit */unsigned int) var_10))))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            arr_46 [i_0] [i_1] [i_5] [(unsigned short)8] [13] = ((/* implicit */unsigned short) arr_15 [i_5]);
                            var_22 = ((/* implicit */unsigned char) (((-(arr_24 [i_11]))) <= (max((((/* implicit */long long int) var_3)), (((((arr_24 [(_Bool)1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (37257)))))))));
                            var_23 = ((/* implicit */unsigned int) max(((+(0LL))), ((+(max((-6407007194869444645LL), (((/* implicit */long long int) arr_25 [10LL] [(_Bool)1] [i_5] [i_9]))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_25 [i_1] [i_5] [i_9] [i_12])) % (((/* implicit */int) (unsigned short)47992))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11056))) : (max((((/* implicit */unsigned long long int) ((int) arr_27 [(signed char)0]))), (var_0))))))));
                            var_25 = ((/* implicit */_Bool) max((min(((-(arr_24 [i_12]))), (((((/* implicit */long long int) (-2147483647 - 1))) & (arr_12 [i_12] [10LL] [i_1] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_48 [(signed char)9] [i_12] [i_1] [i_9] [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)44)))) : (((/* implicit */int) var_4)))))));
                            arr_49 [i_0] [i_0] [i_12] [i_0 - 1] [i_0] = ((/* implicit */signed char) max(((+((+(12U))))), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) var_6);
                        var_27 += ((/* implicit */short) (~(min((((arr_45 [i_0] [(unsigned short)20] [i_5] [10] [i_5]) ? (((/* implicit */int) arr_35 [i_0] [(signed char)19] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_47 [i_0] [i_0] [(unsigned short)17] [8LL] [i_1] [i_1] [i_1])))), (((/* implicit */int) var_2))))));
                        arr_52 [i_5] [i_13] = ((/* implicit */int) 10046919819601000500ULL);
                    }
                }
                arr_53 [i_1] = ((/* implicit */short) arr_5 [i_0 - 1] [(signed char)2]);
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)223)) ? (var_8) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        for (unsigned short i_15 = 1; i_15 < 24; i_15 += 1) 
        {
            {
                arr_60 [0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_58 [24LL])), (arr_54 [20U] [i_15]))))))) ? ((-(((/* implicit */int) arr_59 [i_14] [i_14] [(short)20])))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_54 [i_14] [(_Bool)1])), (arr_57 [i_14] [i_14])))) && (((/* implicit */_Bool) ((signed char) arr_54 [4U] [i_15]))))))));
                arr_61 [i_14] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) arr_58 [(unsigned short)10])))) : (((/* implicit */int) var_9)))));
                arr_62 [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [(signed char)11] [i_15 + 1])) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7464))) | (var_8)))), (max((((/* implicit */long long int) arr_55 [i_14])), (6407007194869444647LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0))))));
            }
        } 
    } 
}
