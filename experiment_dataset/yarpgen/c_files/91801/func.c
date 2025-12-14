/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91801
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_3))));
                arr_4 [4U] [4U] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max((-1080884048), (((((/* implicit */int) (_Bool)1)) << (((549755813887LL) - (549755813881LL)))))))), (max((max((((/* implicit */long long int) (unsigned short)11736)), (-549755813888LL))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) max((min((((/* implicit */unsigned int) (short)-30843)), (var_11))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))) != ((-(549755813886LL)))));
}
