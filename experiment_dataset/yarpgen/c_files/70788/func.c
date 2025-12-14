/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70788
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0] [i_0] [8U])))), (max((var_0), (((/* implicit */unsigned long long int) var_10))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_12 |= ((/* implicit */signed char) max((min((arr_4 [i_1 + 2] [6ULL]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min(((unsigned char)89), (((/* implicit */unsigned char) (_Bool)1)))))));
                                var_13 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_6))))), (min((arr_6 [i_4] [i_4] [i_3 - 2] [i_3 - 2]), (((/* implicit */unsigned int) var_8))))));
                                var_14 |= min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)101)))), (max((((/* implicit */unsigned long long int) (unsigned char)63)), (var_0))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((max((min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2] [i_2])))), (((/* implicit */unsigned long long int) var_8)))), (min((((/* implicit */unsigned long long int) max((var_5), (var_7)))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_2])), (arr_4 [2U] [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((min((min((var_8), (((/* implicit */int) (unsigned short)61767)))), (((/* implicit */int) min((var_3), (var_2)))))), (min((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_3))))), (var_8)))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_3))));
}
