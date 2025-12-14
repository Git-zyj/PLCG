/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81452
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
    var_19 = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) (-((-((~(((/* implicit */int) arr_4 [i_2]))))))));
                    var_20 ^= ((/* implicit */signed char) (~((+((~(((/* implicit */int) arr_1 [(short)2]))))))));
                    arr_10 [i_0] [i_2] [i_1] [i_0] = (!((!(((/* implicit */_Bool) (-(-7321215398018772661LL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_10)))))))));
}
