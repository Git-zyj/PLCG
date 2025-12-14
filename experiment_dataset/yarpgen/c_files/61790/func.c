/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61790
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) min((7036882466734328799ULL), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), ((+(((((/* implicit */_Bool) 11701491838987609867ULL)) ? (6745252234721941745ULL) : (4953747606559931027ULL)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_2))));
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */int) var_6))));
}
