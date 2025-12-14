/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65388
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
    var_13 = ((/* implicit */unsigned long long int) ((signed char) (signed char)10));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = var_1;
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1])))) + (((arr_4 [i_0 + 1] [i_1] [i_2]) ? (5856047041294579456ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
}
