/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78325
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
    var_20 = var_12;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [4LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1569621493343013180LL)) : (10658486477833650544ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14801)) ? (((/* implicit */int) (short)-14817)) : (((/* implicit */int) var_3)))))));
                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (unsigned short)17729)) ? (((/* implicit */int) (unsigned char)140)) : (((((/* implicit */_Bool) (short)-14801)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)38))))))));
                arr_5 [(unsigned short)4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2618238240176410271LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (1336602822)))) : (12976563322781968764ULL)));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_9);
}
