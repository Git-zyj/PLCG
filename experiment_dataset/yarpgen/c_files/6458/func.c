/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6458
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
    var_13 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)85)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11848))))))))));
        var_15 = (unsigned char)97;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) 3003607854U))));
            var_17 = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)17377))))));
        }
        arr_6 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11848))));
    }
}
