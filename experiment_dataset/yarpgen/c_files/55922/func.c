/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55922
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
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    var_15 = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */signed char) ((short) var_9));
}
