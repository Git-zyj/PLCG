/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((-(~var_9))))));
    var_14 -= ((-((var_4 ? (~var_5) : ((5919053705789961952 ? var_8 : var_2))))));
    var_15 = (((((((~var_12) || (((var_1 ? -5919053705789961955 : -5919053705789961951))))))) < 5919053705789961954));
    var_16 ^= ((var_3 || ((((((5919053705789961954 / -5919053705789961943) + 9223372036854775807)) >> ((((var_0 ? 26706 : var_8)) - 26660)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((17292795563584990211 ? ((((~var_1) ? ((var_4 ? 1 : -5919053705789961928)) : (~var_1)))) : ((~(var_9 % 14)))));
                var_17 &= (((((~-5919053705789961955) & (var_1 & -5919053705789961939))) >> ((-5919053705789961960 ? (!var_8) : (var_6 * var_10)))));
                var_18 = (((!-5919053705789961951) && ((((!-5919053705789961955) ? var_9 : (!7))))));
                var_19 ^= (((((var_0 << ((((12461978592128939964 ? var_10 : -5919053705789961943)) - 1501457671))))) & 5919053705789961943));
            }
        }
    }
    #pragma endscop
}
