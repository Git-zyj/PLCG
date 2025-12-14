/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 *= (~-1);
                                var_12 = 9359096266780427848;
                            }
                        }
                    }
                    var_13 = (!-0);
                }
            }
        }
        var_14 = 18;

        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_15 = (max(var_15, 65529));
            var_16 = var_0;
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_17 = 18446744073709551612;
            var_18 = var_0;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_19 = var_5;
                        var_20 = (!var_1);
                        var_21 = 285978576338026496;
                        var_22 *= 2425554874;
                    }
                }
            }
            var_23 = var_2;
        }
        var_24 = var_5;
        var_25 = 806168310155749183;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_26 = 9048331421306685500;
        var_27 = 65529;

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_28 = var_3;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            var_29 = (min(var_29, (~var_2)));
                            var_30 = (min(var_30, var_1));
                            var_31 = var_0;
                            var_32 ^= var_8;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    {
                        var_33 *= var_9;
                        var_34 = 5026645502650630020;
                        var_35 = 11461;
                        var_36 = var_0;
                    }
                }
            }
            var_37 = 0;
        }
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 3; i_17 < 20;i_17 += 1)
            {
                var_38 ^= var_7;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        {
                            var_39 = var_2;
                            var_40 ^= 1;
                        }
                    }
                }
                var_41 = 2425554872;
                var_42 *= var_7;
            }
            var_43 *= var_1;
            var_44 = -683477685732575489;
        }
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            var_45 ^= 13420098571058921587;
            var_46 *= var_1;
        }
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {
        var_47 = var_6;
        var_48 ^= var_3;
        var_49 = 17200135197580737777;
    }
    var_50 = var_0;
    var_51 *= var_1;
    #pragma endscop
}
