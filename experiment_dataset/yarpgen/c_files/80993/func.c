/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80993
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [(_Bool)1]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1])))) ? (((arr_3 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59479))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_1])), (arr_0 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_1 [i_1])))))) : (arr_5 [(unsigned char)12] [i_1])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */_Bool) (unsigned short)6058);
        var_16 += ((/* implicit */signed char) var_14);
        arr_12 [(signed char)1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3132870148U)));
    }
    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)59467)) : (((/* implicit */int) (unsigned short)6056))));
}
