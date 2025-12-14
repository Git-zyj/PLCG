/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7820
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
    var_19 = min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) * (16593713407476749866ULL)))) ? (min((11088908146128954420ULL), (7357835927580597196ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)226))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122))))) ? (((/* implicit */int) (unsigned char)30)) : (((((/* implicit */int) arr_5 [7U] [i_2 + 1] [i_2 + 1] [i_2 + 1])) | (((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2] [i_1]))))));
                    var_21 = ((/* implicit */signed char) (+(max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) / (var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)16)))))))));
                }
            } 
        } 
    } 
}
