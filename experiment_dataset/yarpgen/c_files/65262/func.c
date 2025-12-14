/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65262
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] = ((/* implicit */long long int) ((((2610776870U) & (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))) | (2610776870U)));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (short)6228))))), (arr_1 [i_0])))) ? (var_2) : (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_3)) << (((1565179176182757607LL) - (1565179176182757595LL))))) & ((-(((/* implicit */int) (signed char)97)))))), (0)));
        var_16 = ((/* implicit */unsigned int) var_5);
    }
}
