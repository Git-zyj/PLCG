/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (max(((min(((((arr_1 [i_0]) && (arr_1 [i_0])))), (arr_6 [i_1] [i_1] [i_1 + 1])))), (((arr_1 [i_0]) ? ((((!(arr_2 [1]))))) : (arr_7 [i_0] [i_0] [i_0])))));
                    var_12 = ((!((min(var_5, (arr_6 [i_1] [i_2 - 1] [i_2 - 1]))))));
                }
            }
        }
        arr_8 [0] = (((max(((3 ? 15 : var_6)), (~-4)))) ? ((((((5 / (arr_4 [i_0] [i_0])))) ? (arr_3 [i_0] [i_0]) : (((arr_3 [i_0] [16]) * 6437))))) : (((7732183233517592186 >> 0) ? (-2147483647 - 1) : 896732001483775286)));
        var_13 = (max(var_13, var_9));
        var_14 ^= (((max(122, (((arr_2 [i_0]) ? var_0 : (arr_2 [i_0]))))) >> ((11 ? 5 : 3282831608))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_13 [12] = ((var_1 ? ((((arr_10 [i_3]) < (((arr_10 [i_3]) ? -26508 : (arr_6 [i_3] [i_3] [16])))))) : (arr_0 [6] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_15 = (max(var_15, (((((((((var_4 ? (arr_16 [i_3] [12]) : (arr_5 [i_3] [6])))) ? (((arr_6 [i_3] [i_4] [i_4]) ? 1533556730 : (arr_5 [0] [i_4]))) : 3517867759))) ? ((-2147483634 ? 96 : 32)) : ((17550012072225776330 ? (arr_11 [i_3] [i_3]) : (arr_11 [i_4] [11]))))))));
                    var_16 = (max(var_16, (arr_9 [i_3])));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_17 = (min(var_17, (((-(((var_6 - var_6) ? (arr_22 [10] [i_7]) : 107)))))));
                    var_18 = (max(var_18, (((((min(((194 ? var_3 : (arr_25 [i_6] [i_7] [i_8] [i_8 - 1]))), (arr_20 [i_8 + 2] [i_6 + 1])))) | (min((arr_20 [i_7] [i_8 + 4]), ((~(arr_26 [i_6] [i_7] [i_8 + 2]))))))))));
                    arr_27 [i_6] [i_6] = (((max((arr_23 [i_6] [5] [i_6]), (((arr_21 [i_6] [i_6]) ? -1 : (arr_26 [i_6] [1] [i_8 + 1]))))) > ((((!(arr_25 [i_6 + 1] [i_6 + 1] [i_6 + 3] [20])))))));
                    var_19 ^= (((((arr_26 [i_8 + 1] [i_8 + 1] [i_8 - 1]) ? (arr_25 [i_6] [0] [i_6] [i_6 + 1]) : (((arr_19 [i_7]) ? (arr_21 [i_7] [i_7]) : (arr_23 [i_7] [12] [i_8 + 2]))))) < (((arr_24 [i_7]) ? (arr_24 [i_7]) : (arr_24 [i_7])))));
                }
            }
        }
        var_20 &= (arr_20 [i_6] [i_6]);
        arr_28 [i_6] = (((((!(((arr_21 [i_6] [i_6]) > (arr_19 [i_6])))))) ^ 18));
    }
    #pragma endscop
}
