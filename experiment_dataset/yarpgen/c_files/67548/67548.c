/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (~(59 | 2007688074));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_16 = (~((~((~(-32767 - 1))))));
            var_17 = (max(((186 & (var_1 < var_11))), var_7));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_18 = -2007688104;
            var_19 &= 1;
            var_20 = ((+(min((-2147483647 - 1), 10357))));
            var_21 = (min(var_21, ((max(var_0, (var_12 && var_0))))));
            var_22 = 255;
        }
        arr_9 [i_0] = ((((((((var_3 ? var_5 : var_10))) ? 14 : var_5))) == ((~(var_13 & 0)))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                var_23 = (max(var_23, (((((((16005 % 1) < (var_4 & var_10))))) / ((((var_11 ? var_9 : var_12)) * var_0))))));
                var_24 |= max(-10358, (536608768 == 536608768));
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                var_25 |= -var_4;
                arr_18 [i_0] [i_0] [i_3] [i_5] = var_1;
                var_26 = var_9;
            }
            arr_19 [i_0] = 2227;
            var_27 = 11358351405714297687;
            arr_20 [i_0] = var_6;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_28 = (var_7 + var_6);
            var_29 = (max(var_11, (!var_12)));
            var_30 *= var_3;
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_31 = ((var_4 * (14494 < var_1)));
            var_32 = (max(var_32, (~var_10)));
            var_33 = var_7;
        }
    }
    #pragma endscop
}
