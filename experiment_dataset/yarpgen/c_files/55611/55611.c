/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [4] = ((((max(598433983, var_12))) ? (((23936 < var_11) ? (max(2147483647, 818583844653498372)) : 23936)) : var_15));
        arr_5 [1] = var_2;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_18 [i_2] [i_4] = ((!(1140126882 - 23952)));
                        arr_19 [i_1] [i_4] [i_4] [i_4] = ((~var_15) ? (!var_12) : 0);
                    }
                }
            }
        }
        arr_20 [9] = (max(0, ((max((arr_16 [i_1] [11] [17] [1] [i_1] [i_1]), 75)))));
        arr_21 [i_1] = var_0;
        arr_22 [4] = (75 || (var_1 + var_5));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_27 [1] [i_5] = ((!(((var_13 ? 2147483647 : 520093696)))));
        arr_28 [i_5] = ((var_10 ? (arr_15 [i_5] [i_5]) : 5609));
    }
    for (int i_6 = 3; i_6 < 7;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 6;i_8 += 1)
            {
                {
                    arr_35 [i_7] = ((((min(64969, (4539628424389459968 % 4539628424389459968)))) ? ((((-54 || (((56 ? 1 : -25454))))))) : -2083260945425636034));
                    arr_36 [i_7] [i_8] [i_8] = arr_3 [i_7];
                    arr_37 [i_7] [6] = ((((max(((((arr_17 [i_6] [i_7]) || -4539628424389459975))), ((1073741823 ? var_3 : -16807))))) ? (~var_3) : ((6861469438387523861 ? 14093044283954805019 : 23927))));
                    arr_38 [i_6 - 1] [i_7] [i_6 - 3] = ((11663213909141267804 ? (((max(var_0, 3584)))) : (min((arr_33 [i_8 + 4] [i_8] [1] [i_7]), (arr_11 [i_8 + 4] [4] [i_8 - 1])))));
                }
            }
        }
        arr_39 [i_6 - 1] = ((-1547028333 ? -1 : 1));
        arr_40 [i_6] = ((((((arr_15 [i_6 - 2] [i_6 + 3]) - 227))) ? (max((arr_13 [i_6 + 1]), ((var_4 ? -4539628424389459984 : var_7)))) : ((var_13 ? (arr_32 [1] [i_6] [i_6 - 1]) : ((-4539628424389459959 ? var_3 : 128))))));
        arr_41 [i_6 - 1] = ((var_11 > (arr_9 [i_6] [i_6])));
    }
    var_16 = var_15;
    var_17 = (((min(((var_14 ? var_8 : var_5)), (var_13 || var_15))) > (max((min(72, var_8)), (32 && -50)))));
    #pragma endscop
}
