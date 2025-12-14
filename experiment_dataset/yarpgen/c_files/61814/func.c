/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61814
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
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_7)) + (104)))))))));
    var_13 = ((/* implicit */unsigned short) min(((-((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (_Bool)0))));
    var_14 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(-1851617476)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_3 [i_1] [i_1 - 1])) ^ (((/* implicit */int) arr_3 [i_1] [i_1 - 1]))))));
        var_16 ^= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL)))));
        var_17 = ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (min((((/* implicit */int) arr_3 [i_1] [i_1])), (-258750694))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1 - 1]);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2 - 1] = min((min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_3 [i_2] [i_2])))), (((/* implicit */int) arr_3 [i_2] [i_2 - 1])))), (min((((/* implicit */int) arr_7 [i_2 - 1])), (max((951732812), (((/* implicit */int) (unsigned char)97)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((short) (+(arr_8 [i_2 - 1])))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) (-(3934081668U))));
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)97)))) <= ((-(((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))))));
    }
}
