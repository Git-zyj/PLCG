/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89152
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
    var_10 = ((/* implicit */long long int) (short)-19768);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((int) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))), (((/* implicit */unsigned long long int) (unsigned char)255)))));
                    var_12 = ((/* implicit */unsigned char) (+((+((-(((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
}
