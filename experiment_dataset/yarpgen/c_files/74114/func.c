/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74114
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
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)208)), ((short)(-32767 - 1))));
                var_20 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1 - 3])))));
                arr_4 [i_1] = max((max((-145870629), (((/* implicit */int) (signed char)-75)))), (var_14));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) max((-1120299342), (var_14)));
}
