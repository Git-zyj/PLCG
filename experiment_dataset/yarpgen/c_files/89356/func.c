/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89356
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
    var_14 = ((/* implicit */unsigned int) ((int) (~(((var_13) >> (((((/* implicit */int) var_4)) - (27948))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(arr_1 [i_0 - 1])));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (499686858)));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */long long int) max((((/* implicit */short) ((arr_5 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))), (var_1))))));
        arr_6 [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) (-(arr_4 [(_Bool)1]))))), (((((arr_5 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((_Bool)1), (arr_1 [i_1]))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = arr_8 [i_2];
        var_17 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2] [(_Bool)1])))) ? (2834997009U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))));
        var_18 = ((/* implicit */unsigned short) var_3);
    }
    var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) var_0))))) ? ((~(((((/* implicit */_Bool) var_12)) ? (-6579845856679886704LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_20 &= ((/* implicit */long long int) ((_Bool) ((unsigned int) var_9)));
}
