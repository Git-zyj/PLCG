/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [1] = ((-(-32767 - 1)));

        for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_11 = (~4035225266123964416);
                var_12 = (min(0, (-32767 - 1)));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_13 += ((~(-32755 <= 32763)));
                            var_14 = ((-((-(-32764 % var_7)))));
                        }
                    }
                }
                var_15 = (((var_4 - var_6) ? ((~((min(-32759, 32767))))) : ((((((var_3 ? 32757 : 1587449469955815464))) || (-32767 - 1))))));
            }
            var_16 = ((-32763 ^ (((32763 ^ var_1) ^ (32751 & 0)))));

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                arr_16 [i_0] [i_0] [i_5] = var_8;
                var_17 += (~-65517);
            }
            var_18 = (!9223372036854775807);
        }
        for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
        {
            var_19 ^= (~32763);
            var_20 = (((((((-32767 - 1) - var_1)) / -32763))) / ((((-127 - 1) ? var_6 : 32767))));
            arr_20 [i_6] [i_6] [i_6] = ((32763 || ((max(-32760, 28927)))));
            var_21 = ((((max((~2602198290), 0))) ? ((~(6690 ^ 19))) : 1));
            var_22 &= 0;
        }
    }
    for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_23 = (min((((var_6 / var_0) * var_7)), (max(5950036379038586352, ((((-127 - 1) - -25031)))))));
        arr_23 [6] = -32764;
        var_24 = (min(var_24, var_1));
        var_25 = (min(var_25, (((!(!41))))));
        arr_24 [8] = 0;
    }
    var_26 = 5950036379038586352;
    var_27 += ((var_6 != (-12496707694670965263 <= var_0)));
    #pragma endscop
}
