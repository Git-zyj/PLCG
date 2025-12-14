/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57545
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 796176194)) <= (16098302693017902203ULL))) && (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) << (((796176213) - (796176207))))), (((int) (-9223372036854775807LL - 1LL))))))));
                arr_5 [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 2348441380691649413ULL)) || (((/* implicit */_Bool) (signed char)108)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((+(2348441380691649386ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15704))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (!(((_Bool) 2147483392))));
}
