/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6525
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
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((short) min((arr_1 [i_0 + 3]), (((/* implicit */unsigned long long int) var_3))));
                var_13 = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_14 ^= 7938981306063199970ULL;
                                var_15 = ((/* implicit */int) max((max((15425850709187226690ULL), (7938981306063199970ULL))), (((((/* implicit */_Bool) (signed char)68)) ? (10507762767646351645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (var_10) : (((/* implicit */unsigned long long int) var_3))))) ? (((37077244) / ((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)15410)) >= (((/* implicit */int) arr_2 [i_3 - 2] [i_3 - 1] [i_3])))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) 2113044230U))))))));
                            var_17 -= ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
}
