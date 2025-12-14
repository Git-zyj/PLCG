/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76065
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) max((min((((/* implicit */short) var_0)), (min((((/* implicit */short) (unsigned char)3)), ((short)-1024))))), (((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_1 [(_Bool)1] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */int) (+(max((((/* implicit */long long int) (unsigned char)245)), (arr_0 [i_0])))));
        var_11 -= ((/* implicit */signed char) ((unsigned short) arr_1 [(signed char)4] [(signed char)4]));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_5 [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) min((var_1), (((/* implicit */short) var_0))))))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1])) : (((/* implicit */int) var_7)));
    }
    var_12 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1731243672)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (var_3) : (var_3))) : (((/* implicit */int) var_8)));
}
