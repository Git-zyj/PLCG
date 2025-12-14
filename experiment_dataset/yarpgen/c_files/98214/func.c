/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98214
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
    var_10 &= var_6;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = -5980655617393370105LL;
                var_12 = var_1;
                arr_5 [i_0] [i_0] [i_0] = min((4294967295LL), (arr_0 [i_1] [i_1 - 3]));
            }
        } 
    } 
    var_13 = ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_2)) ? (var_6) : (var_4))) % (((long long int) var_6)))) : ((~(((7795402019241876925LL) - (4600089737506239611LL))))));
    var_14 = var_8;
}
