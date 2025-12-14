/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [6] &= (min(18609, (arr_1 [2])));
        var_19 = (i_0 % 2 == zero) ? ((((((arr_1 [i_0]) << (((arr_0 [i_0]) - 1498493945)))) << (((arr_0 [i_0]) ? 0 : (arr_1 [i_0])))))) : ((((((arr_1 [i_0]) << (((((arr_0 [i_0]) - 1498493945)) - 233297495)))) << (((arr_0 [i_0]) ? 0 : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (((((arr_6 [i_1]) ? (-123 | 4466392312112166935) : (20795 ^ -3655))) / ((((arr_4 [i_1] [i_2]) * (arr_4 [i_1] [i_2]))))));
            var_21 = (((arr_7 [i_2]) ? (arr_6 [i_1]) : (min(0, 20795))));
            var_22 &= (arr_5 [8] [8]);
        }

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_23 |= var_16;
            var_24 = ((arr_4 [i_1] [i_3]) ? (arr_11 [i_1] [i_1] [i_1]) : 16961);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_14 [i_1] [10] [i_4] = 3655;
            var_25 = (max(var_25, (((((4830012764665012383 ? 44719 : 1)) ^ ((((((44741 ? -59130820 : 4830012764665012404))) || (!var_2)))))))));
            var_26 = ((((((arr_7 [i_1]) ? (44741 / var_10) : (((arr_4 [i_1] [i_4]) ? 4830012764665012404 : 6619122307004244728))))) ? ((~(arr_7 [7]))) : 20817));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_27 *= (((((3 <= (((var_0 == (arr_10 [i_1] [i_5] [i_5]))))))) | 44741));
            arr_17 [i_1] [i_1] = (((arr_11 [i_1] [i_5] [i_5]) < ((((((44719 ? 44719 : 5210676017900087900)) < 44719))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_25 [i_1] [5] = (((arr_13 [i_1] [i_7] [i_8]) ? (arr_21 [i_8] [i_1] [i_1] [i_1]) : ((+(((arr_24 [i_1] [i_6]) ? 1 : 44719))))));
                        arr_26 [i_1] = (arr_19 [i_1] [i_8] [i_7 - 1]);
                    }
                }
            }
        }
    }
    var_28 = (((((~((-20911 ? var_9 : 1))))) ? var_12 : 0));
    var_29 &= var_0;
    #pragma endscop
}
