/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56686
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
    var_10 += ((/* implicit */unsigned char) ((unsigned long long int) var_4));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3179888517U)))) ? (((/* implicit */unsigned int) (~(arr_8 [i_1] [i_0 - 2] [i_0 + 1] [i_0 + 2])))) : (max((1115078773U), (3179888494U)))));
                    arr_10 [i_2] = ((/* implicit */int) ((min((134215680ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_2 [i_2]) : (((/* implicit */int) var_0))))))) < (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
                    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_1] [i_0] [i_1] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (1115078779U)));
                }
            } 
        } 
    } 
}
