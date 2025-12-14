/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57426
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
    var_17 = ((/* implicit */unsigned long long int) (short)11951);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((arr_0 [i_0 + 1]) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-21378)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (short)21377)))))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((short)21377), (((/* implicit */short) (_Bool)1))))), (min((((((/* implicit */_Bool) 144115188075855872ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) + (((/* implicit */int) (short)21377)))))))));
        var_19 = ((/* implicit */signed char) ((int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_0 [i_1 + 1])))));
        var_20 = ((/* implicit */long long int) var_16);
    }
}
