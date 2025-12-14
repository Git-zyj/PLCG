/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63373
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
    var_14 = ((((((/* implicit */_Bool) 2097151)) ? (((/* implicit */unsigned long long int) (+(2147483647)))) : (((((/* implicit */_Bool) (unsigned char)160)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 &= ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) & ((((!(((/* implicit */_Bool) 17034485863229891089ULL)))) ? (min((((/* implicit */int) arr_1 [10ULL])), (1791959094))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned short)44573)) : (1113554683)))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */int) min((var_17), ((-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_1)))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((long long int) arr_0 [i_1 + 1] [i_1 + 1])) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_1 - 1]);
    }
    for (short i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */signed char) -1LL);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)44559)))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_21 &= ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [(unsigned char)15]);
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 2]))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_23 [i_6] [i_6] = ((/* implicit */long long int) arr_19 [i_3] [i_4] [i_5] [i_6] [i_5]);
                                var_23 = ((/* implicit */_Bool) (-(arr_10 [i_3 + 2] [i_4] [i_5])));
                                arr_24 [i_7] [i_6] [i_5] [i_4] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3 + 2])) == (((/* implicit */int) arr_9 [i_3 - 1]))));
                                var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_3])) & (((/* implicit */int) arr_17 [i_3]))));
                            }
                        } 
                    } 
                    arr_25 [i_3] [i_3] = ((signed char) arr_6 [i_4]);
                }
                arr_26 [8] [(short)18] = ((/* implicit */int) arr_7 [i_3] [i_3]);
                arr_27 [i_3] [i_4] = ((/* implicit */unsigned short) (unsigned char)250);
                arr_28 [i_3] = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
}
