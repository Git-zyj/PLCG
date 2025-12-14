/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 &= (((((((~(arr_1 [i_0]))) <= var_15))) <= ((1 * (!-2204405943257291334)))));
        var_20 = (max(var_7, (((arr_1 [i_0]) ? 32746 : 1))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = (arr_5 [i_1] [i_2] [1]);
            var_22 = ((~(~18446744073709551615)));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_23 *= ((((((1 != (arr_5 [i_2] [i_2] [i_2]))))) & ((222 ? -11062 : (arr_2 [i_2] [i_3])))));
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_3] = 1;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_23 [i_1] [i_2] = ((1 ? ((~(((arr_21 [i_1] [i_5 + 3] [i_6 - 2]) ^ (arr_6 [i_5]))))) : (!1)));
                            arr_24 [i_5] [i_5] [i_5] [i_2] = ((-16 <= (arr_8 [i_6] [i_2] [i_6])));
                            var_24 = ((~(min((max(-2, (arr_14 [i_7] [i_2]))), (2204405943257291327 != var_8)))));
                            arr_25 [i_6] [i_2] [i_5] [i_2] [i_2] = (!247);
                        }
                    }
                }
            }
            var_25 = 1;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_26 = (max(var_26, 960));
            var_27 &= (((480 ? (max(1, -928100529)) : (((!(arr_9 [i_8] [i_8] [i_1] [i_1])))))));
        }
        var_28 = (((((((1 ? 1 : 482))) ? ((2204405943257291334 ? -2204405943257291331 : 3)) : 6)) != (!11061)));
    }
    #pragma endscop
}
