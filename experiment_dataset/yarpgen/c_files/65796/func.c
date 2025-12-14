/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65796
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)32767), ((short)4468))))));
    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)16))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)18373)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (-5269681474954183888LL))));
        arr_3 [i_0] |= ((((/* implicit */_Bool) 4294967289U)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (17869988259286033846ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))));
        arr_4 [i_0] [14ULL] &= var_5;
        var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (short)7888)) : (((/* implicit */int) var_2)))), ((((!(((/* implicit */_Bool) 8U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)26141)) || (((/* implicit */_Bool) -7255929438287699080LL))))) : (-1182918777)))));
        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)16507))));
    }
}
