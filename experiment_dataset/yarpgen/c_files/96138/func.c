/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96138
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_16 = max((arr_0 [i_2 - 4] [i_4]), (((/* implicit */long long int) ((int) arr_0 [i_2 - 4] [(signed char)1]))));
                                var_17 = ((/* implicit */unsigned long long int) var_8);
                                arr_15 [i_4] [i_2] [7LL] [i_2] [i_0] = ((/* implicit */short) ((long long int) arr_2 [i_2 - 3] [i_2 - 3]));
                                var_18 = ((/* implicit */signed char) ((long long int) arr_13 [i_0] [i_0] [i_0] [(short)3] [i_2] [i_3] [7LL]));
                            }
                        } 
                    } 
                } 
                arr_16 [7] [i_1] = ((/* implicit */long long int) ((unsigned char) ((long long int) -1168969077)));
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_5 - 1] [i_5] [i_6] [i_7] = ((long long int) arr_7 [i_5] [i_1] [9ULL]);
                                arr_24 [3ULL] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((long long int) arr_21 [i_0] [i_1] [i_0] [i_6] [i_7]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) max((((/* implicit */long long int) var_15)), (var_10)))));
}
