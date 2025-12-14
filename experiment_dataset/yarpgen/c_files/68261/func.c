/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68261
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)96))));
        var_15 -= ((/* implicit */short) (+(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */int) ((((((unsigned long long int) (unsigned short)1485)) + (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64051))) : (263173062669586361ULL))))) - (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)1485))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_1)))))));
    }
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -117518562)) & (2860694378U)))) ? (((var_5) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)97)), (var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (117518559) : (((/* implicit */int) (unsigned short)1485))))) ? (((((/* implicit */unsigned long long int) -1528722018)) | (263173062669586343ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))));
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 -= min((((((/* implicit */_Bool) ((unsigned long long int) (signed char)-4))) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (((var_0) << (((((/* implicit */int) (unsigned short)26498)) - (26479))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 337371277)))))));
}
