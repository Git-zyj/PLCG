/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98368
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) min(((short)32756), ((short)0)))))) > (min((var_6), (((/* implicit */long long int) var_4))))));
                    var_10 = ((/* implicit */unsigned long long int) ((long long int) ((short) ((172852675387622708LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) var_7);
    var_12 = ((/* implicit */unsigned int) var_2);
}
