/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88216
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
    var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) min((var_11), (((/* implicit */int) ((arr_2 [(_Bool)0] [14]) <= (((var_11) % (((/* implicit */int) var_0))))))))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_1 [i_0]))));
    }
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_5)));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((unsigned int) ((18446744073709551615ULL) + (var_5)))))))));
}
