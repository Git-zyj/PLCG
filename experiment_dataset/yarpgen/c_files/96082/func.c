/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96082
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))));
                    var_11 = ((/* implicit */int) arr_0 [i_2 + 2]);
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 1]))))), (((((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 1] [i_4 + 1] [i_4 + 1]) / (arr_11 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0] [i_2])));
                                var_13 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34519))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [(unsigned char)7] [i_2] [i_5] = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_2 - 2] [i_2 + 2] [i_5] [(unsigned short)14] = -589350372;
                            arr_20 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 2] [(unsigned short)21] [i_2] [i_0] [i_6] [i_0] [(unsigned short)0])))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_14 = var_2;
                            arr_24 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)23276)) << (((((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned char)4] [i_5] [i_7])) - (23))))) & (((/* implicit */int) arr_9 [i_0] [i_0] [5] [i_5]))));
                            var_15 = ((/* implicit */unsigned char) (unsigned short)35100);
                            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_2 - 1]))));
                            var_17 = ((/* implicit */unsigned char) arr_9 [i_1] [i_2 - 1] [i_2 - 2] [i_5]);
                        }
                    }
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (min((((/* implicit */unsigned long long int) 4294967295U)), (17130957794453687618ULL))));
    var_19 = var_9;
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 6; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 8; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [2ULL] [i_10 - 1] [i_10] [i_12] [i_12] [i_12])) > (((/* implicit */int) arr_9 [i_10] [i_10 - 1] [i_10 - 1] [i_10]))));
                                arr_38 [i_11] [i_11] [i_11] [i_8] [i_11] = ((/* implicit */unsigned long long int) ((((arr_11 [i_8 + 1] [i_8 + 1] [i_8 + 3] [i_8] [i_8 + 2] [i_8 + 4] [i_8 + 2]) / (arr_11 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 4] [i_8 + 4] [i_8 - 1]))) * (arr_11 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 4] [i_8 + 2])));
                                arr_39 [i_8] [i_11] [i_10 + 1] [i_8] [i_8] = ((/* implicit */signed char) 1315786279255863984ULL);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 589350367)) || (((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_5))));
}
