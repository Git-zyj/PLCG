/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((arr_0 [i_0]) + (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_18 += 39126;
        var_19 = (min(var_19, ((((arr_0 [i_0]) ? 409855290253211049 : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 -= -2;
        var_21 -= (1245749286 ? 1 : 198651710634061775);
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_22 = (~2578682485043067995);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_11 [i_2] [i_3] [i_4] = ((-(6104590662864524968 % -1366571790)));
                    arr_12 [i_2] [i_3] [1] [i_4] = (((0 && 8127549314145962191) == 25443));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 &= (((arr_1 [i_2]) ? (arr_16 [i_2 - 4] [i_2]) : ((var_13 ? 1 : -6104590662864524953))));
                                var_24 = 1;
                                arr_17 [i_5] [i_5] [i_5] [i_4] [i_5] [i_5] [i_6] = (--47);
                                var_25 = ((arr_13 [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 1]) == var_6);
                            }
                        }
                    }
                    var_26 += 15868061588666483620;
                }
            }
        }
        arr_18 [i_2] [i_2 + 1] = (((arr_3 [i_2 + 1]) ^ (arr_3 [i_2 + 3])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_22 [i_7] = ((-1033738914 ? ((var_11 ? var_3 : 1)) : (1 && 11085133403143979622)));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_27 = (max(var_27, (((6104590662864524968 || (arr_19 [i_7] [i_9]))))));
                var_28 = ((8095102659508699315 ? 1 : 1));
            }
            var_29 = (~11927457451793301821);
        }
        var_30 ^= var_9;
    }
    var_31 = ((var_13 ? ((((min(var_1, var_1))) ? ((var_6 ? 6519286621916249795 : -29330)) : (((var_11 ? var_1 : 11795))))) : (~var_11)));
    var_32 = (((((-6104590662864524958 ? 639718951 : var_1))) ? (((~(~6104590662864524958)))) : (~var_13)));
    #pragma endscop
}
