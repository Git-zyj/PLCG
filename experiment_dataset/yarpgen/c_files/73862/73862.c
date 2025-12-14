/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-((((63649 >> 1) <= (max((arr_0 [i_0 - 2]), var_2)))))));
                var_10 = ((((-(arr_2 [i_0 - 3]))) >> (((arr_2 [i_0 + 1]) - 1010790161))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_11 = ((-((-((min(1, 63649)))))));
                    var_12 = (((arr_10 [i_2] [i_2]) | (min(1887, 520940703))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_13 = (((5984392573310212850 % 1907) ? ((1 ? (arr_2 [i_6 - 1]) : var_3)) : var_9));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [7] = (max(((((0 != var_7) <= var_1))), ((32767 / (~-27584)))));
                                var_14 = 1240;
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_5] = (max((1 ^ 23947), (((((arr_22 [i_7] [i_8] [14] [i_5]) && (arr_19 [i_5] [i_5]))) ? var_1 : ((-(arr_2 [i_9])))))));
                                var_15 = (max(var_15, ((max((((2080651592 ? (((!(arr_10 [i_5] [i_5])))) : (!1)))), ((-(arr_2 [i_7]))))))));
                            }
                        }
                    }
                    var_16 = ((((((arr_25 [i_5] [i_6] [i_5] [i_6 + 1] [i_7]) ? (max(var_0, (arr_19 [i_5] [i_5]))) : ((1885 ? (arr_4 [i_5] [i_6]) : 0))))) - ((6 | (~227517473)))));
                    var_17 = 4294967295;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 24;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            {
                                arr_47 [i_10] [i_10] [i_12 + 1] [i_13] [i_13 + 3] [i_14] = -0;
                                var_18 = (((((arr_35 [i_10 + 2]) ? var_5 : (var_9 + 255))) + (arr_37 [i_10])));
                                arr_48 [i_10 + 3] [i_10 + 3] [i_10] = (((((0 ? var_6 : (15400168894767530753 || 4294967290)))) ? (((!(-1 >= 1)))) : 28263));
                            }
                        }
                    }
                    arr_49 [24] [i_10] = ((15188 ? 4294967295 : 4294967293));
                    var_19 = ((!(~105)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 21;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            {
                                var_20 = 114;
                                arr_62 [i_15] [i_16] [i_16] [i_16] [i_16] [12] = (((var_0 ? -27576 : (max(13, 40318)))) | ((((((4294967295 ? (arr_51 [i_15]) : 2080651596)) >= 145)))));
                            }
                        }
                    }
                    arr_63 [i_15] [i_15] [i_15] [i_15] = (((((min(13, 4294967295))) ? (arr_46 [i_17 - 1] [i_17 - 1] [i_17] [i_17 + 1] [i_17 + 1]) : (((var_2 ? (arr_57 [i_15] [i_16] [16] [i_15] [i_15]) : (arr_36 [i_15] [i_15] [i_17])))))));
                }
            }
        }
    }
    #pragma endscop
}
