/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73617
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-((+(arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_2 [1U] [i_0] = ((/* implicit */unsigned char) (~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_22 = ((/* implicit */int) arr_4 [i_1] [i_1]);
        var_23 -= ((/* implicit */unsigned long long int) 1006127310U);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [13]);
    }
    var_24 = ((/* implicit */int) min((var_24), (max((min((((int) var_9)), (var_18))), (var_16)))));
    var_25 = ((/* implicit */signed char) (+(max((((var_0) & (((/* implicit */unsigned int) var_17)))), (min((var_0), (var_9)))))));
    var_26 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_2] [i_2]));
        var_27 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 8829516305217255658ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (1903713768U))));
    }
}
