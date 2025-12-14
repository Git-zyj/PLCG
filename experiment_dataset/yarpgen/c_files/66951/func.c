/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66951
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
    var_20 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                    arr_8 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_0 [i_2 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_2 + 1])) + (14986))) - (3))))) > (((/* implicit */int) min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned short) var_19);
}
