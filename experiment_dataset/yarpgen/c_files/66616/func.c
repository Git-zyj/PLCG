/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66616
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (unsigned char)133))))));
        var_18 = ((/* implicit */unsigned char) var_0);
        var_19 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_1 [(unsigned short)17] [(unsigned short)17])))), (((/* implicit */int) min((arr_1 [i_0] [(unsigned char)18]), (((/* implicit */unsigned short) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
    }
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 = ((/* implicit */unsigned long long int) var_9);
}
