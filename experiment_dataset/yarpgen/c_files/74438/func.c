/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74438
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (-(min((8411694388132742977ULL), (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (((arr_3 [i_0] [i_1]) - (arr_3 [i_0] [i_0])))))));
                arr_7 [(signed char)1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 168379617845553000LL))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) 2390752786U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (168379617845553000LL))))));
    var_13 = ((/* implicit */signed char) var_1);
}
