/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67059
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_3] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) -5128200330429615432LL);
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)39);
                        arr_12 [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)217);
                        arr_13 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = var_6;
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)28);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) 1464887398U);
                            arr_22 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (short)9551);
                        }
                        arr_23 [i_1] [i_1] = ((/* implicit */short) var_5);
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_5);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    arr_29 [i_0] [i_0] = ((/* implicit */int) (unsigned char)209);
                    var_15 ^= ((/* implicit */unsigned long long int) 5128200330429615432LL);
                }
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (unsigned char)109))));
    }
    var_17 = ((/* implicit */long long int) var_12);
    var_18 = (unsigned char)217;
    var_19 = ((/* implicit */unsigned long long int) var_13);
}
