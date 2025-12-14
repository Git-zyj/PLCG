/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6651
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
    var_10 *= ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3798918149817938556ULL), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_0]))))) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) (signed char)-86)), (arr_2 [i_1] [i_0])))));
                    var_11 ^= ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_0))));
}
