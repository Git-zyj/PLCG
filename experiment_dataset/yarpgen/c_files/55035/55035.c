/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (((!((min(-102, 127))))) || (!32758));
        var_16 = (((~7) ? 2722307018 : ((((((10 ? 1572660277 : 32767))) ? ((var_6 ? -1 : 7835)) : 32767)))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 |= 1572660288;
        var_18 = ((4908 >> (((~5919192439096161996) + 5919192439096162000))));
        var_19 = (min(var_19, ((min(var_0, (~267386880))))));
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 -= -29656;
        arr_7 [i_2] = (((max(134217728, (!37438))) ^ ((2147483647 ? var_5 : 28098))));
        arr_8 [i_2] = (((~(-127 - 1))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_21 = 37437;
            var_22 = (((((min(var_4, 13)))) == ((~(min(var_2, 2722307018))))));
            arr_11 [i_2] = ((~((~(~-97)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] = (((-32767 || -21727) ^ 147));
            var_23 ^= (28098 & 44936);
            var_24 = (+((max((!var_8), var_1))));
        }
        arr_16 [i_2] [i_2] = ((((1572660295 ? 1572660277 : 32541)) << (((~-18472784616162568) - 18472784616162540))));
    }
    var_25 = (var_0 && var_4);
    #pragma endscop
}
