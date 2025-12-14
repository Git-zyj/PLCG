/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94039
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = (+(((((/* implicit */long long int) ((((/* implicit */int) (short)27060)) - (((/* implicit */int) (short)-7258))))) / (max((var_7), (((/* implicit */long long int) (short)7257)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_3))));
                var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2] [i_1])))) >> (((/* implicit */int) arr_0 [i_0 - 2]))));
                var_18 |= ((/* implicit */short) arr_3 [i_0] [10U]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) arr_13 [(unsigned char)11] [i_3 - 3] [(unsigned char)11] [i_5] [i_6 - 1]);
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_6 - 1] [i_4]))))), (((unsigned int) arr_7 [(short)12] [i_5]))))) ? ((-((+(arr_1 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_3 - 2] [i_4 + 2])))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6 - 1] [i_3]))) < (arr_8 [i_6] [i_2] [i_4] [i_2]))))))), (var_7)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) var_2);
                        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (max((var_12), (((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 2]))))));
                        var_24 = ((/* implicit */unsigned int) (+(min((var_4), (arr_8 [i_3] [i_8 - 3] [i_8 - 4] [i_8])))));
                        var_25 |= ((/* implicit */long long int) max((1012417801U), (((/* implicit */unsigned int) ((short) (+(((/* implicit */int) arr_11 [i_3]))))))));
                        var_26 = 458752;
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 13; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) (+(arr_17 [i_2] [i_2] [i_2] [i_2])));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((arr_0 [i_9 - 3]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10])))))) : (var_12))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_18 [i_3 - 2] [i_3 + 2]))))));
                    var_30 = var_11;
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 14; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_2] [(short)11] [i_11] [i_12 - 2] [0LL]))))))))));
                                var_32 = ((/* implicit */int) var_2);
                                var_33 = ((/* implicit */long long int) var_0);
                                var_34 = ((/* implicit */unsigned long long int) max((458774), (((/* implicit */int) (short)-7262))));
                                var_35 = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
