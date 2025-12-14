/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65473
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_3] [i_1] = max(((-(arr_3 [i_0 + 3] [i_2 - 1]))), (arr_3 [i_3] [i_4 + 1]));
                                var_14 &= (!(min(((_Bool)0), ((_Bool)0))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_1] |= ((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1)))))));
                var_15 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((-(max((var_10), (((/* implicit */int) (_Bool)1))))))));
                arr_14 [i_1] |= ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_0);
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_10))));
}
