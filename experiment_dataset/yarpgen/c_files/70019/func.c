/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70019
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0] [i_1]);
                                arr_11 [11LL] [i_1 + 2] [i_2] [i_3 - 1] [i_1] = arr_5 [i_0] [i_1 + 2] [i_2] [i_4];
                            }
                        } 
                    } 
                    var_15 |= min((arr_8 [i_0] [i_0] [i_1] [i_1] [i_2 - 2]), (arr_0 [i_0] [(_Bool)1]));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (signed char)38)), (2013166836U))), (max((((/* implicit */unsigned int) (unsigned short)6363)), (var_13)))));
    var_18 = ((/* implicit */unsigned long long int) min((max((var_12), (min((var_6), (var_12))))), (((/* implicit */long long int) var_3))));
}
