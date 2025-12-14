/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9640
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((min((var_11), (((/* implicit */int) var_14)))) + (2147483647))) << (((((min((((/* implicit */int) (unsigned char)93)), (var_11))) + (2044168465))) - (15)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)4095)) << (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13))))) : (max((3499840951U), (((/* implicit */unsigned int) var_9))))))));
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) ((((/* implicit */_Bool) -1281121405049470237LL)) ? (((/* implicit */int) (short)-23080)) : (((/* implicit */int) var_13)))))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_7)), (max((17314049705022100734ULL), (((/* implicit */unsigned long long int) var_9)))))) - (17314049705022100715ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((long long int) arr_0 [i_0 + 1] [i_0]));
        arr_4 [i_0] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (i_1 % 2 == 0) ? (((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)152)))) - (15507))))) : (((((/* implicit */int) var_0)) << (((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)152)))) - (15507))) - (7673)))));
        arr_9 [i_1] = ((_Bool) 6765074153104220278LL);
    }
}
