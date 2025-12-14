/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83120
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1483670981908020579LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) 2147483624);
                                arr_15 [0U] [(unsigned short)14] = ((/* implicit */unsigned int) 934134515);
                                var_21 = ((/* implicit */int) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) 2147483624)) || (((/* implicit */_Bool) (+(var_19)))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_18))));
}
