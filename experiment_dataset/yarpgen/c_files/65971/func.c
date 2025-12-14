/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65971
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
    var_20 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_17)))));
                                var_22 ^= ((/* implicit */unsigned short) ((((min((3823747572009744925LL), (((/* implicit */long long int) var_19)))) & (((1907855443451136310LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))));
                                arr_11 [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                                var_23 = ((/* implicit */signed char) var_17);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_0] [i_0] = max((2147483647), (((((/* implicit */int) var_13)) << (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
}
