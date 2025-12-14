/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92814
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
    var_15 += ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))));
    var_16 = ((/* implicit */signed char) (unsigned short)30160);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((9223372036854775797LL) - (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)10325)), (var_9)))))));
                arr_7 [i_0] |= ((/* implicit */short) arr_2 [i_0]);
            }
        } 
    } 
}
