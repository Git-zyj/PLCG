/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(((min(-1, var_3))), (min(var_1, var_3)))), ((min(((min(-91, var_8))), (min(1, var_12)))))));
    var_19 = (max(var_19, ((min(((max(((min(var_8, 0))), (min(var_4, -59))))), (min((min(223546884889481982, var_6)), ((min(-4664432046323665827, var_4))))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 -= 54;

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = 995060676;
            var_21 = 1;
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = 5791335834610926500;
            var_22 ^= 74;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_23 = 74;

                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_24 = 82;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_16 [i_5] [i_4 + 1] [i_0] [i_0 + 1] [i_0 + 1] = 1;
                        var_25 ^= -6955374589910618322;
                        var_26 = 120;
                    }
                    arr_17 [9] [i_0] = 97;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_27 = 129;
                    var_28 -= 87;
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_24 [i_0] [i_0] [i_3] [i_7] = 31;
                    arr_25 [i_0] [i_2 + 2] [i_0] [i_7] [i_7] [i_3] = 208;
                    var_29 = 54;
                }
                var_30 = 1;
            }
        }
        var_31 = (max(var_31, 37362));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8 - 1] = -15356;
        arr_29 [i_8] [i_8] = 54;
        arr_30 [i_8] = -15352;
        var_32 = (min(var_32, 4294967295));
    }
    #pragma endscop
}
