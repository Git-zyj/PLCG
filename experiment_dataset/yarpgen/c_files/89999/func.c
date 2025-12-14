/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89999
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
    var_10 = var_4;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (var_9) : (((/* implicit */int) (unsigned char)97)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) > (var_6))))))), (var_5)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) 1758698609U))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])) : (arr_7 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3])));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_13 += ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1 - 2] [i_3 - 2] [i_0]);
                            var_14 = (i_1 % 2 == 0) ? (((arr_6 [i_1 + 2] [i_3 + 3] [i_1] [i_4 - 1]) + (arr_6 [i_1 + 2] [i_3 - 2] [i_1] [i_4 + 1]))) : (((arr_6 [i_1 + 2] [i_3 + 3] [i_1] [i_4 - 1]) - (arr_6 [i_1 + 2] [i_3 - 2] [i_1] [i_4 + 1])));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (var_8)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2536268697U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -8377341918033790845LL)) ? (3600248691U) : (((/* implicit */unsigned int) 2)))))));
                            arr_13 [13] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4])))))) >= (arr_4 [i_1] [i_1 + 2] [i_1 + 1])));
                        }
                        for (long long int i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                            var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [(unsigned char)12] [i_2] [11U] [i_1] [(unsigned char)12]);
                        }
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(arr_15 [i_3 - 1] [i_3] [i_3 + 2] [i_1] [i_1 - 2] [i_1 - 2]))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(arr_6 [i_1] [4U] [i_0] [i_2]))))));
                    }
                }
            } 
        } 
    } 
}
