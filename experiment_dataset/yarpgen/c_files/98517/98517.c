/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_14 = (min((((442 == (arr_0 [i_0] [i_1])))), ((min(((max(26, 159))), (arr_0 [i_1 - 1] [i_1 + 1]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_15 = 35102;
                            var_16 -= ((~(max(var_9, -var_8))));
                        }
                    }
                }
            }
            var_17 = 17172;
        }
        for (int i_5 = 4; i_5 < 7;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                var_18 = 30433;
                var_19 = (((max((1337234261795642514 >> 14), 79))) ? (((var_6 || (arr_0 [i_5 - 3] [i_6 - 1])))) : ((((arr_0 [6] [i_6]) == ((1879048192 ? (arr_10 [i_5] [i_5]) : (arr_1 [i_0] [0])))))));
                var_20 = (max((12459784607024049624 != 16212998614118126896), (min((arr_0 [i_5 - 4] [i_5 - 4]), (arr_0 [i_5 + 2] [i_5 + 1])))));
            }
            /* vectorizable */
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                var_21 = (~16212998614118126894);
                var_22 = 1;
                var_23 += (arr_7 [i_5 + 2] [i_5] [i_5 + 1] [i_5]);
                var_24 = ((17168 ? 262016 : (arr_11 [i_5 - 1] [i_7 - 2])));
                var_25 = (((var_5 ? var_6 : 48345)));
            }
            var_26 = (min(((-(arr_1 [i_5 + 3] [i_5 - 2]))), ((min((arr_3 [i_5 - 4] [i_5 + 3] [i_5 - 3]), (arr_15 [i_5 + 1] [i_5 + 4] [i_5 - 4] [i_5 - 4]))))));
            var_27 &= ((!(arr_18 [i_5 + 3] [i_5 - 4] [i_5] [i_5])));
        }
        var_28 = ((79 ? 16212998614118126894 : -16824));
    }
    var_29 = (max(var_29, var_10));
    #pragma endscop
}
