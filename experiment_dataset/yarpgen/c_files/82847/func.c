/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82847
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_1);
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (min((min((var_12), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */unsigned long long int) var_7)) & (var_12)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_18 [i_2] = ((/* implicit */unsigned char) max((var_10), (((/* implicit */short) ((((/* implicit */unsigned long long int) 6374525761499844475LL)) >= (9898360676526003196ULL))))));
                                arr_19 [(signed char)14] [i_1] [i_2] [0U] [i_2] [i_4] [i_5] = ((((((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_5))))))) * (max((max((18446744073709551615ULL), (18446744073709551602ULL))), (((/* implicit */unsigned long long int) max((-2231524671134522385LL), (((/* implicit */long long int) (signed char)93))))))));
                                arr_20 [i_2] [i_2] [i_3 + 1] [(unsigned char)2] [i_2] = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    arr_22 [i_2] [i_2] [i_3] = ((/* implicit */short) ((5ULL) | (((/* implicit */unsigned long long int) 0U))));
                }
            } 
        } 
    } 
}
