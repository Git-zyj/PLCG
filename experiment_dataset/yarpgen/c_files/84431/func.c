/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84431
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) max((var_10), (((/* implicit */unsigned long long int) (unsigned char)48)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) & (-6498011221900687812LL)));
                    var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)39)), (var_6))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_1] [i_1] [(unsigned char)3] = ((/* implicit */long long int) (signed char)-113);
                                arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)32757);
                                var_15 = ((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_1] [(_Bool)1] [i_3]);
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (short)-30141);
                                var_16 = arr_4 [i_0] [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
