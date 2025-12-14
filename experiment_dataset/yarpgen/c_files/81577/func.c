/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81577
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
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((_Bool) var_0))) < ((-(((/* implicit */int) var_10)))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)51658)) > (-434928011)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) min((2198989701120ULL), (((/* implicit */unsigned long long int) (unsigned char)248))))));
        var_15 = ((/* implicit */int) ((((unsigned long long int) ((arr_0 [i_0]) >> (((var_6) - (1728007423)))))) <= (var_5)));
        var_16 &= (((+(((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) * (((/* implicit */unsigned int) var_6)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))))), (((unsigned short) 3564600223U))));
        var_18 += ((/* implicit */short) (-(((/* implicit */int) (unsigned char)185))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_6 [i_2] [i_2]))));
        var_20 = ((/* implicit */short) (+(arr_0 [i_2])));
        var_21 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_11))))));
    }
}
