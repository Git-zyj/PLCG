/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((((203278979852826750 & (((~(arr_1 [i_0])))))) & 3288203128));
        var_13 = 512;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = ((!var_1) ? 4294967295 : (((((((arr_4 [i_3]) != (arr_5 [i_4]))))) % 4294966783)));
                        var_15 = (min(var_15, ((max(var_3, 487)))));
                        arr_14 [i_4] = ((((17 <= (arr_3 [i_1 + 2])))));
                    }
                }
            }
        }
        arr_15 [i_1] = arr_6 [i_1] [i_1] [i_1];

        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_16 = (max(((((4294966787 - 516) ? 516 : 516))), (var_9 - 4294966783)));
                        var_17 += var_0;
                        var_18 = (arr_10 [i_1] [i_1 + 3] [i_6] [i_6 + 1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    {
                        var_19 = (((((arr_26 [i_5 - 2] [8] [8] [i_5 - 1]) | ((min(var_6, 49))))) ^ ((~(arr_5 [i_5 - 1])))));
                        var_20 = (max(var_10, (max(var_0, 514))));
                    }
                }
            }
            arr_29 [i_1 + 2] [i_5] = (!195);
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_21 += ((var_1 ? (min((8600681861520712589 - var_0), (((188 ? var_1 : 40635))))) : ((((!((min(0, 24911)))))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        var_22 = 1600793555;
                        var_23 = (max((((172 && (arr_23 [i_1 + 3] [i_1 + 2] [i_1 + 1])))), ((+((min((arr_35 [i_10] [i_11] [i_11] [0] [i_10]), var_4)))))));
                        var_24 = (min((max(4294966798, var_8)), 188));
                    }
                }
            }
            var_25 = ((!(!172)));
        }
        for (int i_13 = 4; i_13 < 12;i_13 += 1)
        {
            var_26 = ((40635 - (((((var_8 ? var_3 : 67))) ? 67 : 497))));
            arr_39 [i_1] [i_1] [i_13] |= ((-(var_5 % 274877906943)));
        }
    }
    #pragma endscop
}
