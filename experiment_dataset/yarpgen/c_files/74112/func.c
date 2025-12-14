/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74112
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) > (4294967283U)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) % (arr_0 [i_0] [(short)5])))))) : ((+(arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) (((-2147483647 - 1)) + ((-(-2147483646)))))), (min((((/* implicit */unsigned int) (+((-2147483647 - 1))))), (min((arr_0 [i_0] [2ULL]), (((/* implicit */unsigned int) -2147483646))))))));
    }
    var_18 = ((/* implicit */int) (((+((-2147483647 - 1)))) >= (((((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
}
