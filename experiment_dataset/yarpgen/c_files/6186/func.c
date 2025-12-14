/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6186
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
    var_18 = ((/* implicit */unsigned int) max((var_0), ((unsigned short)54731)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) ((unsigned char) var_1))))));
        var_19 &= ((/* implicit */unsigned char) max(((~(17705399027040731713ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) > (((((/* implicit */unsigned long long int) var_13)) / (17705399027040731697ULL))))))));
        var_20 |= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((131210943U) > (3761630910U)))), (((17705399027040731701ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * ((~(((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24283)))))))));
    }
}
