/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9131
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
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(0))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */long long int) var_3);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_4] [i_4] [(signed char)8] [i_4] = 2567641120U;
                                var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) -5542426837352163786LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : ((~(4260777519U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_2);
    var_19 = ((/* implicit */int) -3667572727209638649LL);
}
