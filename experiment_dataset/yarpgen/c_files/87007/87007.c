/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, ((!(((-664378755 | ((-106 ? 1 : 14001002457351321570)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [1] [i_1] [1] [i_1] = (max((248 + var_17), (((!(arr_1 [i_3 + 1]))))));
                        var_19 = ((!(((~(1 / 2))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] = (min(4294967295, ((((min(106, 106))) ? (max((arr_6 [i_2] [i_1] [i_1] [i_1]), 4256210426760831446)) : (12431167278905427474 & 1)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_20 = ((12431167278905427482 ? (arr_12 [i_4 - 3]) : 1207305351081905179));
            arr_17 [i_4] [i_4 - 3] [i_4] = ((((min(var_1, ((-87 ? (arr_2 [i_4] [i_4] [18]) : 7332))))) ? -12431167278905427480 : (((+(((-32767 - 1) | (arr_6 [i_5] [i_5] [i_5] [i_4 - 1]))))))));
        }
        arr_18 [12] = (((((((((0 * (arr_15 [i_4])))) <= 9)))) * (((((max(-64, 0)))) ^ (arr_16 [i_4 - 3] [i_4])))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_21 = (max(var_21, (((!(79 * 1))))));
                        var_22 = 1;
                        var_23 += 0;
                        var_24 = (min((max((arr_16 [i_9] [i_9]), (((1 ? (arr_20 [i_7]) : -525))))), (((!(arr_16 [i_7 - 1] [i_7 + 2]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_25 = (min(var_25, (((((22 ? 0 : 2147483630)) / ((~(arr_22 [i_6] [i_6] [i_6]))))))));
                        arr_35 [i_6] [i_11] [i_11] [i_6] [i_6] = ((~(((!(arr_14 [i_6] [i_10] [i_6]))))));
                        arr_36 [i_6] = (min(64424509440, (((((((arr_8 [i_6] [i_10] [1] [i_11] [2] [i_12]) ? -32760 : 8151017080934239571))) && -1)))));
                    }
                }
            }
        }
        var_26 &= (arr_7 [i_6] [i_6] [18]);
    }
    var_27 = var_16;
    var_28 = (((769390236 ? 36028796884746240 : 6015576794804124140)) != -1);
    var_29 = (~(min(0, 12431167278905427474)));
    #pragma endscop
}
