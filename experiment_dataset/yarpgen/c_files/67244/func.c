/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67244
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
    var_19 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (~(var_2)))), (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_3))));
    var_20 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_12);
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_10)))));
        var_21 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3])) > (var_10)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7152)))))))) ? ((-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)56723)) : (((/* implicit */int) (unsigned short)8812)))))));
        arr_9 [i_1 + 1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_17) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21424))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))) ? ((~(((/* implicit */int) (short)32747)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_1 - 3])) : (((/* implicit */int) ((signed char) (unsigned short)8807)))))));
    }
}
