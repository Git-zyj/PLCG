/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78843
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3641304310U)))))));
                    arr_6 [(unsigned short)11] [(unsigned short)11] = ((/* implicit */signed char) arr_5 [i_2 + 1] [(unsigned short)5] [i_2 - 1]);
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64007)))))));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5780)) ? (arr_4 [i_2 + 1] [i_2] [i_2 + 4]) : (((/* implicit */int) arr_3 [i_2] [i_2 + 3])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_23 = arr_2 [10LL];
                                arr_11 [15U] [i_3] [i_2 + 4] [i_1] [i_0] = ((/* implicit */unsigned int) max(((~((~(arr_8 [i_0] [(unsigned char)3] [2LL] [i_0] [i_0]))))), (arr_4 [i_1] [i_2] [i_4])));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_25 *= arr_12 [i_5];
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (((/* implicit */int) (unsigned short)2048)) : (((/* implicit */int) (short)5780))));
        var_27 = ((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (4294967295U)))))));
        var_28 = ((/* implicit */long long int) arr_12 [i_5 + 1]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_29 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_6] [i_6])) / (((/* implicit */int) arr_3 [i_6] [i_6]))));
        var_30 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_2 [i_6]) : (arr_2 [i_6])));
        arr_17 [i_6] = ((/* implicit */unsigned int) ((short) arr_8 [i_6] [i_6] [i_6] [6ULL] [i_6]));
    }
    var_31 = max((var_4), (((/* implicit */long long int) var_2)));
    var_32 = ((/* implicit */unsigned int) var_6);
}
