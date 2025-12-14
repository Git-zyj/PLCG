/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96056
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 += ((/* implicit */int) ((unsigned short) arr_2 [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) -861767873));
        var_19 = (unsigned short)58130;
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)58147))))))) ? (var_9) : (min((33554428), (((/* implicit */int) (unsigned short)27529)))));
        var_21 += ((((/* implicit */_Bool) (~(var_4)))) ? (((arr_0 [(unsigned short)16] [i_1]) | (arr_0 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_1] [i_1]) : (-892338958))));
    }
    for (int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) ((arr_2 [i_2 - 1]) != (((-1882366922) / (((/* implicit */int) (unsigned short)44329))))))) : (((((/* implicit */_Bool) 1781488453)) ? (max((((/* implicit */int) arr_6 [5] [i_2])), (var_0))) : (((int) 33554431))))));
        var_23 ^= ((/* implicit */unsigned short) arr_0 [i_2] [i_2 + 1]);
        var_24 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 33554433)) ? ((+(((/* implicit */int) (unsigned short)42319)))) : (((/* implicit */int) ((unsigned short) -33554431))))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)7396)) : (arr_7 [i_2] [i_2 - 1])))) ? (((-1392683820) | (((/* implicit */int) (unsigned short)27540)))) : (((/* implicit */int) arr_1 [i_2 + 1])))) + (1392672829))) - (8)))));
    }
    var_25 = ((/* implicit */unsigned short) ((-1121438231) - (((((/* implicit */_Bool) var_3)) ? (var_12) : (var_17)))));
    var_26 = ((/* implicit */int) ((unsigned short) (~(((67108863) | (((/* implicit */int) (unsigned short)26509)))))));
}
