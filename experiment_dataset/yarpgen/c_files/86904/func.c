/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86904
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 2147483647);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) var_3);
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [(unsigned char)3]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((2147483647) / (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_15)))));
                            var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) -2147483646)))), (((((/* implicit */_Bool) -2147483642)) && (((/* implicit */_Bool) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((unsigned short) ((-2147483646) - (((-2147483646) - (-2147483640)))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483643)) ? ((+((-(var_3))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)74)), (1405573689U))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned long long int) 0U)))));
                    arr_17 [i_6] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) (unsigned char)64);
                }
            } 
        } 
    } 
}
