/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75742
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (((long long int) (signed char)-93)))))));
        var_17 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (+(var_14)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
    }
    var_18 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */unsigned short) var_7);
}
