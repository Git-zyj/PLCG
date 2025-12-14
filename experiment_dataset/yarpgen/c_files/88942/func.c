/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88942
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
    var_10 = (+(((/* implicit */int) var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)16748))))) / (((unsigned long long int) (unsigned short)17557))));
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (2498551735U)));
                var_12 ^= ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (unsigned short)17559)) : (((/* implicit */int) (short)-1)));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-26)) ? (var_5) : (-351001628)));
    var_14 = ((/* implicit */signed char) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((276986989U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
    var_15 |= ((/* implicit */unsigned char) var_0);
}
