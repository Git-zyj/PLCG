/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9355
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
    var_18 = ((/* implicit */_Bool) (-(6603063451563403088ULL)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = arr_5 [i_1 + 3] [i_0 - 1];
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) var_17);
                                arr_13 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) arr_0 [(_Bool)1] [i_1 - 1]);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -907879925)), (1048560U)));
                arr_14 [i_0] [1U] [i_0 + 1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1 + 1]))));
            }
        } 
    } 
}
