/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71064
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_4 [(_Bool)1] = (+(min((((/* implicit */int) min(((signed char)-79), (arr_1 [i_0] [(signed char)7])))), ((+(((/* implicit */int) var_8)))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) var_8);
        var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-84)), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21))))));
        arr_9 [i_1] &= ((/* implicit */long long int) var_5);
    }
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31927))))) ? (var_9) : (((((/* implicit */int) (unsigned short)29)) >> (((((/* implicit */int) (unsigned short)65518)) - (65512)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (2149191146U)))) ? (((/* implicit */unsigned long long int) var_6)) : (min((var_10), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) var_3))));
}
