/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79366
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
    var_12 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) var_2);
        arr_3 [5U] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)107)), (max((2501648274U), (((/* implicit */unsigned int) (unsigned char)148))))));
    }
    for (int i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_13 -= ((/* implicit */short) (~(((((/* implicit */_Bool) min(((unsigned char)142), (((/* implicit */unsigned char) (signed char)75))))) ? (-4443930997452504224LL) : (((/* implicit */long long int) ((3U) << (((1793319022U) - (1793318999U))))))))));
        var_14 -= ((/* implicit */unsigned int) arr_7 [i_1 - 2] [i_1]);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) ((short) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))))))));
    }
    var_16 ^= ((/* implicit */short) var_7);
}
