/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6445
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_4)), (var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_2] [i_1]))) & (arr_9 [i_0] [(_Bool)1] [i_3])));
                        arr_14 [i_1] [i_3] [i_1] [i_1] [i_1] = var_11;
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 + 1])) % (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 + 1] [i_1 + 4] [i_0] [i_3 + 2]))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 2] [17] [i_4]))));
                        var_20 = arr_6 [i_0] [i_0];
                        var_21 *= ((/* implicit */long long int) arr_2 [i_1]);
                        arr_19 [i_1] [i_1] [i_1] = ((/* implicit */short) (((_Bool)0) ? (0ULL) : (((/* implicit */unsigned long long int) 62813774020650454LL))));
                        var_22 = arr_8 [i_1 + 3] [i_1 + 4] [i_4 + 1] [i_4 + 1];
                    }
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_11))), (((/* implicit */unsigned long long int) arr_3 [i_1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 8; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) arr_16 [(_Bool)1] [i_6] [i_6 - 1] [i_6 - 1] [(_Bool)1] [(_Bool)1]);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((((/* implicit */_Bool) max((arr_23 [i_9] [i_7] [i_5]), (var_3)))) ? (arr_26 [(unsigned char)2] [i_8] [i_5] [i_8] [i_9] [6LL]) : (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_5] [i_5] [(unsigned short)0] [i_5])) % (((/* implicit */int) arr_27 [i_5] [(short)2] [i_5] [(_Bool)1] [i_5] [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 1] [i_5] [i_6] [i_6 - 1])))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_7] = ((/* implicit */int) arr_29 [i_6] [i_7] [i_7] [i_6] [i_6]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_8);
    var_26 = ((/* implicit */unsigned long long int) var_12);
}
