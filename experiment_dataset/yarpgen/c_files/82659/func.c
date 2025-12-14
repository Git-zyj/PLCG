/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82659
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_2 [i_1]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                                var_21 += ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) arr_14 [16ULL]);
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned int) arr_20 [i_5] [i_5]);
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_24 [i_6] [i_6] [i_5] [i_8] [10ULL]))));
                            }
                        } 
                    } 
                } 
                arr_26 [i_6] [i_6 - 3] = ((/* implicit */long long int) arr_15 [i_5]);
                arr_27 [i_5] [i_6] = ((/* implicit */unsigned short) arr_17 [i_6] [i_6]);
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_16 [i_5]))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_1);
    var_28 &= ((/* implicit */short) var_11);
}
