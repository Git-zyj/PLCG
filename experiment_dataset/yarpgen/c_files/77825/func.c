/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77825
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (_Bool)1;
                    arr_8 [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) (+((((+(227375331))) / (min((((/* implicit */int) (signed char)96)), (1076173286)))))));
                }
            } 
        } 
    } 
    var_19 *= ((/* implicit */_Bool) min(((-((+(((/* implicit */int) (signed char)-97)))))), (max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_14)))), ((+(var_1)))))));
    var_20 = -1076173287;
}
