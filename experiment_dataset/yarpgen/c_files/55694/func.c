/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55694
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0 - 2] [i_0 - 1]) : (arr_1 [i_0]))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (_Bool)0))))) - ((+(arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_2]))));
                        var_21 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) : (var_15))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_12))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((16341421962867433258ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))))) < ((~(var_7)))));
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (137438953471ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15038)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
                    }
                    arr_11 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0])) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63384))) > (var_8)))))) >> ((((+(((unsigned int) var_3)))) - (4294967173U)))));
                    var_24 += ((/* implicit */unsigned short) (signed char)12);
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)36))) ^ (arr_1 [i_4])))) && (arr_4 [i_4])));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_12 [i_4]))) - (max((arr_12 [i_4]), (arr_12 [i_4])))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])))) ? (((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) : (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (unsigned short)63387)) : ((-2147483647 - 1))))));
                            var_27 = ((/* implicit */long long int) var_10);
                            /* LoopSeq 4 */
                            for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                            {
                                arr_29 [i_7] [2LL] [i_7] [2LL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) max((((/* implicit */long long int) var_0)), (arr_16 [i_9]))))) == (((/* implicit */int) ((short) arr_2 [i_7 - 1] [i_5 - 1])))));
                                var_28 ^= ((/* implicit */int) var_8);
                            }
                            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                            {
                                arr_33 [i_5] [i_7] [i_10 + 1] [i_8] [i_10 + 1] = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) -512329420)) ? (arr_17 [i_6] [i_8]) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (signed char)-16))));
                                var_29 = ((/* implicit */_Bool) ((2923380643U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))));
                            }
                            for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                            {
                                var_30 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_3 [i_7] [i_7 - 1] [3])) && (((/* implicit */_Bool) (signed char)65)))));
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 4169216233U)) && (((/* implicit */_Bool) ((signed char) var_2)))))))))));
                                arr_36 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) > (var_19))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) > (((/* implicit */long long int) 1681600941)))))) : (arr_7 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                            }
                            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                            {
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (18446744073709551615ULL)));
                                var_33 |= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_39 [i_5] [4ULL] [i_7] [i_8] [0])) ? (arr_20 [i_5] [i_6]) : (((/* implicit */long long int) 2147483647)))) / (var_8))) >> (((((arr_21 [i_5 - 1] [i_6 + 3] [i_7 - 1] [0ULL]) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_6]))) : (arr_26 [(short)2] [i_6] [i_6] [i_6]))) : (((/* implicit */long long int) max((((/* implicit */int) arr_3 [12LL] [i_8] [i_5])), (-943795438)))))) - (69LL)))));
                            }
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_17 [i_5] [i_5]) : (((/* implicit */int) (unsigned short)9506))))) ? (((((/* implicit */_Bool) (signed char)93)) ? (2105322110842118358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [12] [i_5] [i_5] [i_6 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (unsigned short)63449)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (short)17307)) ? (((/* implicit */long long int) -512329430)) : (696567417981349202LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-87)))))))))));
            }
        } 
    } 
}
