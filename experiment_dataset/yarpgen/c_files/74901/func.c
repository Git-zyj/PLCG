/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74901
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */signed char) var_3))))), (((3831917848175545122ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134)))))));
        arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49435))) & (1304727199031974360ULL))));
        var_14 -= ((/* implicit */unsigned long long int) arr_1 [16] [(unsigned short)0]);
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((6860714000362039107ULL), (17142016874677577255ULL)))) ? (min((17142016874677577256ULL), (17142016874677577268ULL))) : (14383162614135356926ULL)));
    }
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15003)) ? (((max((((/* implicit */unsigned long long int) -524292451)), (16775028222232497486ULL))) % (var_4))) : (min((17142016874677577256ULL), (((/* implicit */unsigned long long int) var_9))))));
}
