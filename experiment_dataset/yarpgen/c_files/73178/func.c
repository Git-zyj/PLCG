/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73178
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (~((~(arr_6 [i_1])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                        var_22 = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) | (((/* implicit */long long int) (~(arr_6 [i_1]))))));
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)57281)) : (((/* implicit */int) (unsigned char)197))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_8 [22U] [(unsigned short)1] [i_2] [20ULL])))) ? (((arr_0 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_6)))))));
                        var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_3 - 1] [i_3]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_5);
                        var_27 &= ((/* implicit */long long int) min((((((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1])) >= (var_11))), (((((/* implicit */_Bool) var_14)) && (arr_3 [i_0 - 1] [i_1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) (((-(arr_6 [i_1]))) < (((/* implicit */int) var_16))));
                        arr_16 [i_1] [i_1] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0]))));
                        arr_17 [i_0 - 1] [i_1] [(unsigned short)6] [i_1] [i_2] [i_5] = ((/* implicit */int) var_17);
                    }
                    for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_6 + 1]))))) & (((/* implicit */int) max((var_10), (((/* implicit */short) var_18)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            arr_25 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) + ((+(((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 2]))))));
                            arr_26 [i_1] [i_1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_1])) ? (((/* implicit */int) var_9)) : (arr_18 [i_0] [(unsigned short)0] [i_2] [i_1] [i_7] [i_7])))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */short) (-(((/* implicit */int) ((min((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])), (arr_5 [i_6] [i_0 - 1]))) < (((/* implicit */int) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                            var_30 = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) var_13))) < (arr_2 [i_8]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_6] [i_8])) << (((((/* implicit */int) var_12)) - (98)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_2] [13] [i_0 + 1] [13] [13]))) + (var_2))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_0] [i_1] [i_1] [i_0] [i_0 - 1] [i_0 + 1] [i_6 + 2])))))));
                            arr_30 [i_0] [i_0 - 1] [i_1] [(_Bool)1] [i_6] [i_1] = ((/* implicit */signed char) arr_27 [i_0 - 1] [i_1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) ((arr_6 [i_1]) & (arr_6 [i_1])));
                            var_32 = ((/* implicit */unsigned int) (-(arr_6 [i_1])));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_2] [i_6 - 3] [i_9]))) | (var_15)));
                            arr_34 [i_0] [(signed char)23] [i_2] [i_9] [i_9] [i_1] [i_0] = (-(((/* implicit */int) arr_27 [i_6 - 2] [i_1] [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 1] [(short)18])));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                        {
                            var_35 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) >> (((((/* implicit */int) arr_27 [i_0 + 1] [i_1] [i_0 + 1] [i_6] [i_6 - 1] [i_1] [i_2])) - (8370)))))) ? (((/* implicit */int) max((arr_27 [i_0] [i_1] [i_0 + 1] [11ULL] [i_6 + 2] [i_1] [i_6]), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) arr_27 [i_10] [i_1] [i_0 - 1] [i_1] [i_6 + 1] [i_1] [i_1]))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) >> (((((((/* implicit */int) arr_27 [i_0 + 1] [i_1] [i_0 + 1] [i_6] [i_6 - 1] [i_1] [i_2])) - (8370))) - (20770)))))) ? (((/* implicit */int) max((arr_27 [i_0] [i_1] [i_0 + 1] [11ULL] [i_6 + 2] [i_1] [i_6]), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) arr_27 [i_10] [i_1] [i_0 - 1] [i_1] [i_6 + 1] [i_1] [i_1])))));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_28 [i_0 + 2] [i_0 + 2] [i_2] [i_2] [i_10] [i_1])))) && (((/* implicit */_Bool) var_7))));
                        }
                    }
                    arr_38 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2516701304U)) / (17930721328754402161ULL)));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_8))))))));
}
