/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65757
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_8))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [12] [12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) var_4))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)177)))) < (((/* implicit */int) var_7))));
            arr_11 [i_2] = (short)32683;
        }
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((arr_5 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        var_12 = (-(((/* implicit */int) var_5)));
    }
    var_13 = ((/* implicit */short) (unsigned short)65532);
}
