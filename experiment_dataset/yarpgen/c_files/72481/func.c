/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72481
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
    var_12 = ((/* implicit */long long int) ((((min((((/* implicit */long long int) var_7)), (36028797018963967LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != ((~(((/* implicit */int) var_5))))))) : (((/* implicit */int) var_4))));
    var_13 = ((/* implicit */unsigned long long int) var_10);
    var_14 |= ((/* implicit */int) min((((unsigned short) (+(((/* implicit */int) var_4))))), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (short)-678));
                arr_5 [i_0] = ((/* implicit */unsigned short) (short)678);
            }
        } 
    } 
}
