/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86738
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) ((int) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0])));
                    arr_7 [i_0] [6LL] [i_2] = ((/* implicit */long long int) ((unsigned char) ((int) arr_4 [(_Bool)1] [i_1] [(signed char)1])));
                    var_17 = ((/* implicit */int) ((long long int) ((short) arr_2 [i_0] [7])));
                }
            } 
        } 
    } 
}
