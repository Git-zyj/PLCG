/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96115
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [6] [i_2] [6] |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) max((var_1), (var_1)))) > (((/* implicit */int) arr_1 [i_0])))));
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((int) arr_1 [i_2]));
                }
            } 
        } 
    } 
    var_10 = (-(((/* implicit */int) (unsigned short)806)));
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) max((var_1), (var_4)))), ((unsigned short)76)))) >> (((long long int) (_Bool)0))));
}
