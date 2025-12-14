/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73996
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (var_9))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)14288)) : (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_22 |= ((/* implicit */short) 16389081568079942539ULL);
        var_23 = ((/* implicit */unsigned int) max((arr_5 [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-14280)) & (((/* implicit */int) var_17))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        var_24 = ((/* implicit */int) (-(arr_9 [i_2 - 1] [i_2 - 1])));
        var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) arr_3 [i_2 + 1])) * (((/* implicit */int) var_6))))));
    }
    var_26 = ((/* implicit */int) (+(var_4)));
    var_27 *= ((/* implicit */unsigned int) var_10);
    var_28 = ((/* implicit */unsigned int) -866181252);
}
