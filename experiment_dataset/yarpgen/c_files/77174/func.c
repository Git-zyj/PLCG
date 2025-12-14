/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77174
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_14)))), (var_7)))) ? (var_13) : (((/* implicit */int) var_17))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                    arr_7 [i_0] = ((/* implicit */long long int) (unsigned short)14969);
                }
            } 
        } 
    } 
}
