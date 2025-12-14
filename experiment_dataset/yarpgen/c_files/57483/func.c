/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57483
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0 + 1] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (arr_3 [i_0 - 2]))), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~((-(((arr_8 [i_0] [i_1] [i_3]) - (((/* implicit */unsigned int) arr_7 [i_3] [i_2] [2U] [i_0 - 1]))))))));
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_3]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) ^ (var_13)));
                        arr_16 [i_5] [i_4 + 1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)65535);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) arr_0 [i_1]);
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (var_2)));
                        arr_21 [i_4 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_15 [i_0 + 1] [i_0 - 2] [i_1 - 2] [i_4 + 1]))) ? (arr_17 [i_1] [(signed char)5] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_15 [i_4] [i_4 + 2] [i_0 - 2] [2LL]))))));
                        arr_22 [i_6] [i_4] [i_1] = ((/* implicit */int) (-((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0 + 1]))) - (var_12)))))));
                        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_5 [i_6] [i_6])) : (((/* implicit */int) arr_1 [i_1 - 1]))))))), (arr_18 [i_0] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_0);
                        arr_25 [i_4] = ((/* implicit */unsigned short) arr_0 [1U]);
                        var_22 = ((/* implicit */short) arr_13 [9]);
                        var_23 &= ((/* implicit */signed char) (-(((((/* implicit */int) (short)11)) % (((/* implicit */int) (short)-32760))))));
                    }
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_24 = var_3;
                        arr_29 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_17 [i_0 - 2] [i_1 - 2] [i_1 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((-29LL) & (-56LL))) > (((/* implicit */long long int) arr_19 [i_8] [i_8] [i_8] [i_4] [i_1 - 1] [i_0])))))) : (var_3)));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2530273392U)) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (arr_28 [i_0] [i_0 - 2] [i_1] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))))));
                    arr_30 [i_4 + 1] [i_1] [i_0] = max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 2] [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 - 2])) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_5 [(signed char)2] [i_1]))))) : (arr_13 [i_1 + 1]))));
                }
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        var_26 &= ((/* implicit */int) ((short) min((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) -1006133598)) ^ (arr_31 [i_10] [i_9] [i_1 - 2] [i_0]))))));
                        arr_35 [i_9] [i_1] [i_9] [i_10] [i_10 + 1] [i_10 - 2] = ((/* implicit */int) arr_33 [i_1 - 3] [i_9] [i_10]);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_12))));
                        var_28 = ((/* implicit */signed char) arr_20 [i_11] [i_11] [i_11] [i_9] [i_1] [i_0 + 1]);
                    }
                    var_29 = (short)21457;
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_4 [i_1 - 1]))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11)) == (((/* implicit */int) (short)-21))));
    var_33 = ((/* implicit */unsigned short) ((short) var_9));
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((unsigned long long int) var_5)))));
}
