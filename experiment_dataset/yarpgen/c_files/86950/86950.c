/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (3852473163261331098 != var_4);
        arr_2 [i_0] = ((21772 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_12 = 1554053658;
                        var_13 = ((!((((arr_3 [i_1]) ? (arr_4 [i_1]) : (max((-2147483647 - 1), (arr_6 [i_3]))))))));
                        arr_13 [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1] = ((-((((((arr_7 [5] [i_2]) % (arr_8 [i_1] [i_1] [i_1])))) ? ((((arr_0 [i_1]) ? var_6 : -11982))) : 8966210856781421069))));
                        var_14 = (max(var_14, (((2546072969209628202 ? -12522 : -7693640671679525174)))));
                    }
                }
            }
        }
        var_15 ^= (arr_5 [i_1]);
        var_16 = 2145062475;
        arr_14 [i_1] = (max((max(1025054512, 7138878725778578132)), ((max((arr_7 [i_1] [i_1]), (((arr_9 [6] [i_1] [i_1]) + -4143)))))));
    }
    var_17 *= (((!-32743) / 1));
    var_18 = -7649939146791031671;
    #pragma endscop
}
