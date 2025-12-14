/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98128
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */signed char) ((int) (~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)33)))))));
                var_11 = ((/* implicit */signed char) 2511850658511934568LL);
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_4 [i_0] [i_1])))));
                var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [9U] [i_1])))))))));
                var_14 = (+(min((7840150685555453300ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) var_7);
}
