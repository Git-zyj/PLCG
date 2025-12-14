/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] = (max(1, (min(0, (arr_0 [i_3 + 2] [i_0 - 1])))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((((((var_3 >> 0) ? (arr_5 [i_0 + 1]) : (arr_2 [i_0 - 1])))) ? (arr_2 [i_3]) : 4294967295));
                    }
                }
            }
            arr_12 [i_0] [i_0] = ((((min(((min(-1, var_12))), (~var_1)))) ? ((((9223372036854775807 ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : 9)) ^ (max((-9223372036854775807 - 1), 16481538896731893722)))) : 68349166));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_18 [i_0] [10] = 288230376151711743;
                var_15 = (arr_9 [i_0] [i_0] [i_5] [i_0]);
                var_16 = ((((!(-2147483647 - 1))) ? 3489355880893642240 : ((((arr_9 [i_0] [i_5] [i_4] [i_0]) ? var_3 : (arr_1 [i_4]))))));
            }
            for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0 + 1] [i_4] [i_0] = 65024;
                arr_22 [i_0] [i_0] [i_0] [i_0] = (!18446744073709551615);
            }
            var_17 = var_2;
            arr_23 [i_0] [i_4] [i_0] = (((arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1]) ? (arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1]) : (arr_17 [i_0] [i_0 + 1] [i_0] [i_0 - 1])));
        }
        arr_24 [i_0] = (((arr_19 [i_0 - 1] [i_0] [i_0]) ? 1 : ((((4881774819603880708 ? -3779970483347120523 : 32767)) | (arr_6 [i_0 + 1] [i_0])))));
        var_18 = (max((max(12962226226824464858, (-9223372036854775807 - 1))), var_11));
        var_19 += (max(((-9223372036854775807 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1]))), ((min((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]), ((min((arr_1 [i_0 + 1]), 1))))))));
    }
    var_20 = -1;
    #pragma endscop
}
