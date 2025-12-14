/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91088
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
    var_11 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)218)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) var_0);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)37)), (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */long long int) max((arr_0 [i_1]), (arr_0 [i_1])))) : (arr_1 [i_1])));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (var_3)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (var_8)))))))));
            arr_4 [i_0 - 1] [i_1] [16U] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)232)), (2180213511U))))))), (((((/* implicit */_Bool) (unsigned char)232)) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */int) arr_3 [i_0]);
            var_15 *= ((/* implicit */unsigned long long int) (~(arr_1 [(short)12])));
        }
        var_16 += ((/* implicit */unsigned int) max((max((-883217154), (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0 - 1]), (((/* implicit */short) (unsigned char)215))))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(short)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [0]))))))));
    }
    for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_16 [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) var_6);
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_9))));
                    var_18 *= ((/* implicit */_Bool) (~((~(var_3)))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 + 1]);
                                var_20 -= ((/* implicit */long long int) ((int) max((-8710007352712275142LL), (((/* implicit */long long int) (unsigned char)185)))));
                                var_21 &= min((((var_1) ? (((/* implicit */int) arr_8 [i_3 + 3] [i_4])) : (((/* implicit */int) arr_8 [i_3 + 2] [i_3])))), (((/* implicit */int) (!(max(((_Bool)1), (var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_3] [i_3 + 3] [i_3 - 1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_7)) : (max((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_3 + 1] [i_3] [i_3] [i_3]))), (var_5)))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)0)), (arr_15 [i_3] [i_3] [(short)8] [i_3 + 3])));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    arr_28 [i_3] [i_3 + 1] [i_8] = ((/* implicit */unsigned char) max((max((arr_14 [i_8]), (arr_25 [i_3] [i_3] [i_8]))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_25 [i_3] [i_3] [i_8])))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((int) max(((unsigned char)232), ((unsigned char)218))));
                                var_25 = ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)16)))), (((int) (unsigned char)91))));
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned char) var_4);
                    var_27 = ((((/* implicit */_Bool) (~(arr_0 [i_8])))) ? ((~(arr_0 [i_8]))) : (min((arr_0 [i_8]), (arr_0 [i_8]))));
                }
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_28 &= ((/* implicit */unsigned int) var_3);
        var_29 = ((/* implicit */unsigned long long int) var_1);
    }
    var_30 = ((/* implicit */int) var_10);
    var_31 = ((/* implicit */long long int) (unsigned char)166);
    var_32 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1086359399)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
