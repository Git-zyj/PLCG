/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81664
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
    var_18 = ((/* implicit */signed char) min((var_1), (((/* implicit */long long int) (short)-23678))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_14), ((unsigned short)7070)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)165), ((unsigned char)215))))) : (min((var_0), (((/* implicit */long long int) (signed char)-33)))))) << (((((((/* implicit */_Bool) var_17)) ? (var_2) : (((/* implicit */long long int) (-(((/* implicit */int) var_17))))))) + (3652881794673157250LL)))));
        arr_4 [i_0] &= ((/* implicit */long long int) var_3);
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (unsigned short)14336))))))));
    }
}
