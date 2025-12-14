/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/819
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
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)-76)), (1581464097U))), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_1) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (arr_1 [i_0]))) : (max((((/* implicit */int) arr_4 [i_0] [i_1])), (arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((min((var_0), (((/* implicit */unsigned short) arr_4 [i_0] [i_1])))), (((/* implicit */unsigned short) var_10)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) arr_4 [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
            var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        arr_7 [16] [16] &= ((/* implicit */unsigned long long int) arr_0 [(signed char)22]);
        var_15 = ((/* implicit */_Bool) var_3);
        var_16 &= ((/* implicit */int) var_1);
    }
}
