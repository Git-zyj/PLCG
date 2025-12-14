/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81259
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
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((short) (~(-2226228146258726977LL))));
                        arr_10 [i_0] [i_1] [7] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7420)) ? (((/* implicit */unsigned long long int) ((int) 7077369775479156836LL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (arr_5 [(unsigned short)15] [i_1] [i_2 + 4])))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        arr_13 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)28935)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(unsigned short)17] [i_4]))) != (12938993286116394750ULL))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2 - 1])) ? (((((/* implicit */int) (unsigned char)197)) & (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5])))) : (((((/* implicit */int) (unsigned char)142)) % (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_5] [16ULL]))))));
                        arr_17 [(short)14] [i_2 + 4] = ((/* implicit */short) arr_5 [i_2 + 3] [i_2 - 1] [i_2 - 1]);
                        arr_18 [(unsigned char)16] [(short)11] [i_2 + 4] [i_2 + 4] [i_1] [i_0] &= ((((/* implicit */int) (short)8904)) - (((/* implicit */int) arr_12 [i_0])));
                    }
                    arr_19 [i_0] [i_1] [17LL] = arr_14 [i_1];
                    var_22 -= ((/* implicit */unsigned int) arr_7 [(short)16] [i_1] [i_2 + 3] [i_1]);
                }
            } 
        } 
    } 
}
