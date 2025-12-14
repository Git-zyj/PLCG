/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~(-32767 - 1)))) || -var_2));
    var_15 = (max(var_15, (!-3351)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_16 |= (((min(12998192528961555704, 1)) ^ ((((-32767 - 1) / ((min(45666, 192))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_3] [i_3 - 1] [i_3 - 2] [i_1] [9] = ((!(3608029850 && 255)));
                            arr_13 [i_0] [i_2] [i_1] = 2683637486;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_5] [0] [i_6] [0] &= ((-(0 > -1)));
                        arr_26 [i_5] [i_5 + 4] [i_5 + 2] = ((((((max(32767, 12)) >> (((max(-1, 2039558996155912648)) - 2039558996155912636))))) && (((~(!15))))));
                    }
                }
            }
        }
        var_17 = ((-6416972535831280499 >> (488048816 - 488048786)));
        var_18 = (max(50036, (max(44, (62178 | 2421554849222643505)))));
        arr_27 [i_4] [i_4] = (((((-(50036 + -32765)))) || ((max((16848441810426272921 >= 1), (-1 ^ 50015))))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_19 &= 55787;
        var_20 = (max((((~(2147483641 < 8935141660703064064)))), (min((~455646228), -65519))));
    }
    var_21 |= ((!((max(-24997, 488048816)))));
    #pragma endscop
}
