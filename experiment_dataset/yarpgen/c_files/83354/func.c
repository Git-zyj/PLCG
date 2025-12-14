/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83354
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
    var_18 = ((/* implicit */unsigned long long int) ((((var_2) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned short)35866)))) : (((/* implicit */int) ((unsigned char) var_13))))) % (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */unsigned char) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 0ULL))), ((unsigned short)49780))))) | (max((((unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) -7331459681240389119LL)) + (var_16)))))));
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) arr_5 [i_0] [i_0] [i_1]))), (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-69)))) >> ((((((_Bool)0) ? (1747534568) : (1740663958))) - (1740663933)))))));
            }
        } 
    } 
}
