/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = var_10;
                arr_6 [i_0] [i_1] [i_0] = (((((max(0, (arr_2 [i_1]))))) % ((var_9 ? var_3 : (arr_2 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_13 = ((var_7 ? (((30072363101693149 && 1) * (arr_10 [19]))) : ((1 ? var_4 : var_5))));
        arr_11 [i_2] = ((!(((~(!var_8))))));
        arr_12 [i_2] [13] = (var_11 ? (((1 ? (0 || var_5) : (arr_9 [19])))) : (max((arr_7 [i_2]), (arr_7 [i_2]))));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_14 = (min(var_14, ((((((var_9 % ((1 ? var_11 : 45238))))) && ((-1 && (((arr_15 [10] [i_3] [10]) || (arr_8 [i_4]))))))))));
            arr_17 [i_3] [i_4] [i_3] = (((((arr_13 [i_3]) ? (arr_10 [i_4 + 3]) : var_8)) / -50333));
            var_15 = ((min(1, var_10)));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_16 = ((((max(110, (((arr_10 [i_5]) ? var_3 : var_4))))) || (120 % 149)));
                        arr_25 [i_3] [0] [i_6] [i_7] &= (min(((var_2 ? (!var_10) : (arr_13 [8]))), 91));

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_29 [i_5] [i_5] [12] [0] [i_5] |= (((((((var_4 ? var_5 : (arr_7 [i_5])))) && -var_4)) ? (arr_13 [12]) : (arr_27 [1] [i_5] [i_7] [i_8])));
                            var_17 = (max(var_17, (((~((1 ? -2612511891720740294 : 224)))))));
                            var_18 ^= 1;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_38 [i_3] [i_3] = (1 && 1);
                            arr_39 [i_3] [2] [i_11] |= ((((((min(50333, 50333))) && (arr_27 [i_10] [i_9] [1] [i_3]))) || (arr_15 [i_9] [i_10] [i_11])));
                            var_19 ^= 24;
                        }
                    }
                }
            }
            var_20 ^= (~var_6);
            arr_40 [i_3] [i_3] = (!6);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_21 = (arr_31 [i_3] [i_12] [i_12]);
            arr_43 [i_3] [i_3] = (var_11 <= 232);
        }
        var_22 = (min(var_22, (((var_1 ? 1 : 1)))));

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_47 [i_3] = ((65535 | ((max(1, 1)))));
            arr_48 [1] |= ((((((((191 ? (arr_18 [i_3] [i_3] [i_3]) : (arr_16 [i_3] [8])))) % ((4294967293 ? 12438407845329222011 : 56))))) ? (((((arr_23 [i_3] [1]) > 215)) ? (((arr_10 [i_3]) ? -1140601364904212203 : (arr_14 [i_3]))) : 1140601364904212192)) : ((min(((var_3 ? 132244412 : 1)), (arr_42 [i_3] [12] [i_13]))))));

            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                var_23 = (min(var_23, var_11));
                arr_51 [i_14] [i_14] |= (((((var_0 ? 99 : -52))) ? var_8 : (max(var_10, -77))));
            }
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_24 += var_4;
            var_25 ^= var_11;
        }
        for (int i_16 = 1; i_16 < 10;i_16 += 1) /* same iter space */
        {
            var_26 ^= (arr_7 [i_3]);
            var_27 = (((30 + 1) ? ((-(arr_20 [i_3 - 1] [i_3 + 1] [i_3] [i_16 - 1]))) : (arr_20 [i_3 + 1] [i_3 + 2] [i_16] [i_16 + 3])));
            var_28 += (((((arr_45 [i_3 + 2]) || (arr_45 [i_3 + 1]))) ? (arr_32 [2]) : ((min((arr_22 [i_3 - 1] [i_3 + 3] [i_16 + 4] [i_16]), (arr_32 [2]))))));
        }
    }
    #pragma endscop
}
