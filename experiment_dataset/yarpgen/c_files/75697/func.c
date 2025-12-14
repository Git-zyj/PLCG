/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75697
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (2097338958) : (2097338958)))));
        arr_3 [(short)4] = ((/* implicit */unsigned short) 12686710696235776941ULL);
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_4 [i_1 + 2]))), (max((4294967295U), (((/* implicit */unsigned int) arr_5 [i_1] [i_1 + 2]))))))) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) && (((/* implicit */_Bool) arr_1 [i_1])))))));
        var_19 *= ((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) 0U))), (min((arr_4 [i_1 + 1]), (((/* implicit */short) arr_0 [i_1 + 2]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 1197806922U))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) max((((/* implicit */int) min((arr_7 [i_2]), (arr_7 [i_2])))), (((((((/* implicit */int) arr_7 [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_2])) + (5686))) - (9)))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_1))));
}
