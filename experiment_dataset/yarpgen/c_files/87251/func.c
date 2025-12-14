/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87251
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_11 [i_4 - 1] [i_4 - 1] [i_2] [i_0 - 2] [i_1])))));
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (-763995869))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (signed char)80))));
            }
        } 
    } 
    var_18 = min((((/* implicit */signed char) (_Bool)1)), (var_5));
}
