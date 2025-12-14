/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87246
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */unsigned int) var_10);
                    arr_7 [(unsigned char)15] [(_Bool)1] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((short) var_3)), (((/* implicit */short) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)86)))))))) : (((((/* implicit */int) var_2)) / ((+(((/* implicit */int) (unsigned short)10022))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), ((((_Bool)1) ? (((/* implicit */int) (short)-2977)) : (((/* implicit */int) var_10))))))) > (max((var_6), (((/* implicit */unsigned long long int) (-(1052747034))))))));
}
