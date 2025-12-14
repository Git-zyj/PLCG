/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91544
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
    var_16 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) var_4);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_4 [i_3]))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_6))));
                                var_20 ^= ((/* implicit */unsigned char) arr_5 [i_4 - 1] [i_0 - 1] [i_0 + 2]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    } 
}
