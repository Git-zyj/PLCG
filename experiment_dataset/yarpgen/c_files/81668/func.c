/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81668
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
    var_10 = ((/* implicit */long long int) var_7);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (11301680562367788781ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) != (((/* implicit */int) var_2))))) == (-2504435)))))));
    var_12 = ((/* implicit */_Bool) max((((((unsigned long long int) var_6)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (17ULL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((unsigned long long int) var_7)))), ((~(-2147483637)))));
            }
        } 
    } 
}
