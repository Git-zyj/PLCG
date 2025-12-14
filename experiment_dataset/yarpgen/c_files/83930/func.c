/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83930
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
    var_11 = ((/* implicit */unsigned int) var_0);
    var_12 = max(((-(var_5))), (((/* implicit */long long int) (+((+(14)))))));
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1 - 1] [(unsigned char)7] [i_0] = ((/* implicit */long long int) var_9);
                            var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 520192)) && ((_Bool)1))))));
                            var_15 = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (-(arr_8 [6LL] [i_0] [i_0] [i_0])))) ^ (((((/* implicit */_Bool) arr_9 [i_0] [24ULL] [24ULL] [i_1 - 1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) : (20ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (-(-1)));
}
