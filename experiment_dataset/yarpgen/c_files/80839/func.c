/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80839
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
    var_11 -= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (-157250622) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((var_8), (((/* implicit */unsigned long long int) ((signed char) var_0))))));
    var_12 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2 + 2] [i_2] [i_2 + 2] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) arr_1 [i_2]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */long long int) arr_3 [i_0 - 1])) : (arr_1 [i_1])))))) ? ((+(2305843009205305344LL))) : (((/* implicit */long long int) var_5)));
                    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_3 [i_2]), (((/* implicit */unsigned int) arr_5 [i_2] [i_2] [i_2] [i_2]))))), ((~(13642338513379890207ULL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4804405560329661433ULL)))))) : (((var_10) ? (5577119946563969176ULL) : (var_4)))));
}
