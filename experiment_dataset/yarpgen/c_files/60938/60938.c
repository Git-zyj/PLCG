/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((max((min(4120702200293894602, 113)), 4120702200293894604)) != 1));
        var_18 = ((+((-(min((arr_1 [19] [19]), (arr_1 [i_0 + 4] [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = -61;
        arr_5 [i_1 - 3] = (((((-61 + 2147483647) >> (var_0 - 2449337748))) ^ ((((-10724 && var_6) == 4087204921)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = (((arr_1 [i_2] [i_2]) ^ (arr_7 [i_2])));
        arr_11 [i_2] = ((22 ? 233 : 1));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((((arr_9 [i_3] [i_3]) % var_3)))) ? (max((var_15 / var_14), (arr_0 [i_3] [i_3]))) : (max((max((arr_4 [i_3] [i_3]), var_11)), (arr_8 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [i_4] [i_6] [5] [5] [i_4] [i_4] [i_4] = (arr_23 [i_6] [i_4] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 1]);
                                arr_25 [i_4] [i_4] = (max((((~((-(arr_20 [i_3] [i_3] [2] [i_3])))))), (max(((((arr_7 [i_4]) ? (arr_13 [i_6]) : (arr_20 [i_3] [i_4] [i_5] [8])))), (arr_3 [i_4])))));
                                arr_26 [i_3] [i_3] [i_4] [i_6] [i_7] [i_3] [i_3] = ((((7 ? ((-(arr_7 [i_3]))) : (-86 == 1)))) ? 1 : ((~(arr_4 [i_6 - 1] [i_5 - 2]))));
                                var_20 = (max(var_20, ((min(var_8, (((arr_17 [i_5] [i_6 - 1] [i_5]) ? (arr_17 [i_3] [i_6 - 1] [i_3]) : 8015)))))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((~((((max(-3330584772466742680, var_1)) != var_4)))));
                            }
                        }
                    }
                    var_21 = -var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_34 [i_3] [i_3] [i_4] [9] [i_3] [i_8] = ((!(-120 ^ 1)));
                                var_22 = var_2;
                                var_23 = ((8021 ? 61 : 3330584772466742688));
                            }
                        }
                    }
                    var_24 = (max(var_24, (((~((30 ? -1 : 1887208802)))))));
                }
            }
        }
        var_25 = ((((var_10 ? 28 : 239))));
    }
    #pragma endscop
}
