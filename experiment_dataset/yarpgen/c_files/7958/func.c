/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7958
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
    var_12 = var_10;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */long long int) (unsigned short)22014);
                    arr_8 [i_2] [i_1] [(signed char)10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [i_2] = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        arr_12 [(unsigned char)0] [i_0] [(short)11] [i_2] [8LL] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_3]);
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_16 [i_2] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)22014)) && (((((/* implicit */_Bool) (signed char)71)) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [9U])))));
                        arr_17 [i_2] [i_1] [i_4] [i_4] = ((/* implicit */long long int) 1069719188U);
                        arr_18 [i_0] [(short)2] [i_2] [i_4] = ((/* implicit */signed char) (_Bool)0);
                        arr_19 [i_1] [i_0] [(signed char)6] &= ((/* implicit */signed char) 4294967282U);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        arr_23 [i_2] = ((/* implicit */int) (unsigned short)43521);
                        arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) arr_21 [(_Bool)1] [i_5] [i_5 + 1] [i_5] [i_2] [i_5]);
                        arr_25 [i_2] [(signed char)0] [i_0] |= ((/* implicit */signed char) (unsigned short)43521);
                    }
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -14);
                }
            } 
        } 
    } 
}
