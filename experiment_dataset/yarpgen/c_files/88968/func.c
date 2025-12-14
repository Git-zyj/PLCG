/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88968
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) ((signed char) 1ULL));
        var_11 *= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) 18446744073709551615ULL))))), (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_2 [i_0] [10U]))))));
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_1 [1U])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_2))))) == (var_2))))));
        var_13 = ((/* implicit */_Bool) (((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)238)), (arr_2 [i_0] [i_0])))))) % (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))));
    }
    var_14 = ((/* implicit */unsigned char) var_5);
    var_15 = ((/* implicit */signed char) var_0);
}
