/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5867
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
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16)))))) & (((/* implicit */int) var_13))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((arr_0 [i_0]) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65517)) || (((/* implicit */_Bool) (unsigned short)65511))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)24))))));
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65511)), (max(((-(((/* implicit */int) (unsigned short)16)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_4))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_7 [(short)9] [(short)9] = ((/* implicit */short) min(((unsigned short)8), (((/* implicit */unsigned short) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */_Bool) var_6);
        arr_9 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_0 [i_1])), (arr_6 [i_1]))) ^ (var_11)));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            arr_13 [i_2] [(_Bool)1] |= ((((/* implicit */long long int) ((arr_11 [i_2 + 1] [i_2 - 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) var_10)))))) * ((((-(2374813344984997272LL))) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_0))))));
            arr_14 [i_1] [i_2] [(unsigned char)0] = ((/* implicit */short) min(((-(((/* implicit */int) arr_12 [i_2 - 1])))), (((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_2 + 1])) - (227)))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) max((max(((~(463949292U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)9424)), ((unsigned short)65512)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-30813)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_25 [i_2] [i_2] [(unsigned char)5] [i_4] [3] = ((/* implicit */short) var_15);
                            arr_26 [i_1] [(unsigned short)5] [i_3] [(signed char)5] [i_5] [i_5] = 463949292U;
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_19 *= ((/* implicit */_Bool) ((long long int) var_15));
            arr_31 [(short)6] [(short)6] = ((/* implicit */short) max(((-(((/* implicit */int) arr_0 [i_6])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_6]))) != (2770430478896368588LL))))));
            var_20 = ((/* implicit */unsigned char) arr_22 [i_6] [i_6] [i_1]);
        }
    }
    var_21 *= ((/* implicit */unsigned int) var_14);
    var_22 = ((unsigned int) max((((/* implicit */int) ((var_11) >= (((/* implicit */int) var_1))))), ((-(((/* implicit */int) var_13))))));
    var_23 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)113)) ^ (((/* implicit */int) (short)-20697))));
}
