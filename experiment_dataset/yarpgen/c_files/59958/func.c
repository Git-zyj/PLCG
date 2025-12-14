/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59958
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) -230629089))));
        var_12 = ((/* implicit */unsigned long long int) ((((int) arr_0 [i_0] [i_0])) & (((((/* implicit */_Bool) -230629089)) ? (-230629089) : (230629089)))));
        var_13 -= ((/* implicit */long long int) (short)10899);
    }
    var_14 = ((/* implicit */unsigned long long int) var_2);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10899)) ? (((((/* implicit */_Bool) (short)-10900)) ? (((/* implicit */int) (short)248)) : (2147483647))) : (((((/* implicit */int) (short)-10906)) ^ (((/* implicit */int) (_Bool)1))))))) ? ((~(((-230629089) ^ (((/* implicit */int) (short)-10907)))))) : (2147483647));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((((var_4) ? (((/* implicit */int) (short)10899)) : (2147483647))), (((/* implicit */int) max(((short)-10901), ((short)10906)))))))));
    var_17 -= ((/* implicit */_Bool) ((unsigned int) min(((!(((/* implicit */_Bool) (short)10899)))), (max(((_Bool)1), ((_Bool)1))))));
}
