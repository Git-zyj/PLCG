/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92453
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)14063)) : (((/* implicit */int) (unsigned short)14051))))));
        var_15 = ((/* implicit */_Bool) ((unsigned short) var_13));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((short)-29574), ((short)4706))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) + (var_12))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_1 [(unsigned char)5])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((arr_2 [i_1]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (_Bool)1)))))));
        arr_8 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_9 [i_1] [i_1] = arr_2 [i_1];
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned long long int) arr_10 [i_2]));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2]);
    }
    var_18 = ((/* implicit */unsigned short) var_11);
}
