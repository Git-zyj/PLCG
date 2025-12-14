/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57354
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) -8129837966300139267LL));
                var_12 = ((/* implicit */unsigned int) arr_0 [i_1 - 2]);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (((((-(11946929836989270355ULL))) / (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_0 [i_0]))))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) % (var_1)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((unsigned char) var_9))), (min((((/* implicit */unsigned long long int) var_2)), (var_0))))))))));
}
