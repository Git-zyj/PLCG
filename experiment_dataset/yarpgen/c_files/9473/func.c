/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9473
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = ((/* implicit */int) ((((long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_15))))) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_3 + 2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (3569416990U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                        arr_11 [i_1] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)31)) ? (13485725237846233360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), ((short)5)))))))) : (((/* implicit */int) var_4))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((((/* implicit */int) var_15)) >= (((/* implicit */int) (short)5)))))))));
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) + (((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != (var_1))))))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_1] = var_2;
                        var_18 = max((max((var_5), ((-(10164416645037409082ULL))))), (max((((/* implicit */unsigned long long int) var_15)), (10164416645037409082ULL))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_6] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) min((var_11), (((/* implicit */short) var_4))))), (max((((/* implicit */unsigned int) (unsigned char)0)), (var_1)))));
                            arr_25 [i_1] = ((/* implicit */short) (~(min((0U), (((/* implicit */unsigned int) (signed char)-17))))));
                            arr_26 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) 13485725237846233360ULL))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_29 [i_0 + 2] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) max((13485725237846233357ULL), (var_5)));
                        arr_30 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */long long int) (short)-6);
                    }
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (signed char)-5))));
                            arr_35 [i_1] [i_1] [i_2] [i_8] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                            arr_36 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10164416645037409079ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (signed char)-6)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) var_16))))));
                        }
                        var_21 -= max((max((((/* implicit */long long int) var_13)), ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))))))), (((/* implicit */long long int) (+(var_6)))));
                    }
                    arr_37 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)73))));
                }
            } 
        } 
        arr_38 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_9))))));
    }
    var_22 = ((/* implicit */int) max((((long long int) min((var_5), (var_5)))), (min((min((4830956576444359556LL), (var_8))), (((/* implicit */long long int) min((((/* implicit */int) var_11)), (1635407585))))))));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
    var_24 = var_0;
}
