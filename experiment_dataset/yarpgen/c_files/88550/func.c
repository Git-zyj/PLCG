/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88550
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 6; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 746579754U)) ? (2785577340U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11916)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (3548387541U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967288U)) && (((/* implicit */_Bool) 1490649003U))))) : (((/* implicit */int) min((arr_8 [i_4] [i_3 + 1] [i_2 + 1] [i_1]), (arr_8 [i_0] [i_0 - 3] [i_0 - 1] [i_0]))))));
                                var_20 = ((/* implicit */unsigned short) 100663296U);
                                var_21 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */long long int) 2903793480U)), (-1579244141280337275LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_15))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (_Bool)0);
    var_23 = ((/* implicit */unsigned short) var_10);
}
