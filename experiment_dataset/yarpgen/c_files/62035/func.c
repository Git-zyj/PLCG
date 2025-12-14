/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62035
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10558)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) != (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2986266824U))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-91)) % (((/* implicit */int) (unsigned short)20849)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_2)) ? (-378672708) : (((/* implicit */int) var_7)))), (((((/* implicit */int) var_3)) << (((var_10) - (13370451036857946899ULL))))))), (((/* implicit */int) var_6))));
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_2))))) * (max((((/* implicit */unsigned long long int) var_4)), (6637816578091315737ULL))))) / (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
}
