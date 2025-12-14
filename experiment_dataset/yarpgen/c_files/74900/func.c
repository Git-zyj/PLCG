/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74900
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
    var_12 = ((/* implicit */int) (unsigned char)5);
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */short) (+((~((-(((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((0U) << (((max((((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)4096)))))) - (4294967243U)))));
        var_16 = ((/* implicit */signed char) min((var_16), (var_2)));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((9223372036787666944LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)74))))), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_4))))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) ((-994570246) <= (((/* implicit */int) var_6)))))))));
}
