/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90947
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_11 = min(((unsigned char)24), (min(((unsigned char)75), ((unsigned char)219))));
                                var_12 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 1])))) ^ (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (arr_3 [i_0 - 2])));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_14 *= (unsigned char)232;
                                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_13 [i_5] [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_16 [i_1 + 1] [i_5] [i_5]))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1] [i_5] [i_6 - 1] [(unsigned char)16])))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_1])) & (((((/* implicit */int) var_0)) * (((/* implicit */int) var_2))))));
                                arr_19 [i_0] [i_1] [i_5] [i_1] = var_9;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_5] [i_1] [i_5] [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                    {
                        arr_24 [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)43))));
                        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 - 2])) != ((-(((/* implicit */int) arr_18 [i_8 - 3] [(unsigned char)1] [i_1] [i_0] [(unsigned char)1]))))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)17))));
                        var_21 *= ((unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                        arr_27 [i_9 + 3] [i_1] [i_1] [(unsigned char)1] = var_9;
                        var_22 = var_1;
                        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)101)))) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        arr_30 [i_0] [i_1] [i_5] [i_1] = (unsigned char)127;
                        arr_31 [i_1] [i_1] [i_5] [i_5] [(unsigned char)6] = ((unsigned char) (unsigned char)226);
                    }
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_5] [i_5] [i_11])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_5])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0 + 1] [i_1 + 1] [i_1] [i_11]))))));
                        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_5] [(unsigned char)18]))))) ? (((/* implicit */int) arr_26 [i_11] [i_1] [i_11] [i_11])) : (((/* implicit */int) (unsigned char)242))));
                    }
                }
                var_26 = min((arr_20 [i_0 + 1]), (((unsigned char) arr_17 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 - 1])));
            }
        } 
    } 
}
