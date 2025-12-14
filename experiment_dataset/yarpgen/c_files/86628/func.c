/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86628
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) 4294967280U);
        arr_4 [4ULL] = ((/* implicit */signed char) arr_0 [i_0]);
        var_19 -= max((((/* implicit */int) ((unsigned char) max((arr_2 [i_0]), (arr_2 [8U]))))), (((int) 535822336U)));
    }
    var_20 = ((/* implicit */int) var_13);
    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((2097151U) >> (((((((/* implicit */_Bool) 3759144960U)) ? (var_17) : (var_3))) - (3649104U)))))) & (((((long long int) var_5)) | (((/* implicit */long long int) (~(535822336U))))))));
}
