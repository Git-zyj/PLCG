/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6317
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) (~(0U)))) != ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((var_10), (((/* implicit */unsigned int) var_13))))))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min(((short)-26610), (((/* implicit */short) var_5)))))))) << (((/* implicit */int) ((max((var_0), (((/* implicit */unsigned int) var_11)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    }
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(2231984068U))))));
}
