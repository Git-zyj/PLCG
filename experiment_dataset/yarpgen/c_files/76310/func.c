/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76310
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) arr_1 [i_0 + 3]);
                arr_5 [i_1 + 1] [i_0] [i_0] = ((/* implicit */long long int) ((arr_3 [i_0 - 1]) * (17063407251585769566ULL)));
                arr_6 [i_0] = ((/* implicit */long long int) var_7);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) ? (17063407251585769578ULL) : (72057592964186112ULL)));
            }
        } 
    } 
    var_16 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1383336822123782049ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) : (14024283030154338346ULL)))))) >= (1383630214U)));
}
