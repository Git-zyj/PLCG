/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((max(var_0, var_11))) ? var_9 : (min(var_1, var_4)))), var_7));
    var_15 = (min(5927374570410480522, 3768414820676252138));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += (min((max(((min((arr_1 [i_0]), (arr_1 [i_0])))), (min((arr_0 [i_0]), (arr_2 [i_0]))))), (arr_1 [i_0])));
        var_17 += ((+(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = ((~(((arr_6 [i_0] [i_1]) ? (arr_5 [3]) : (min((arr_5 [22]), (arr_0 [i_0])))))));
            var_19 = (max(var_19, ((!(((max((-32767 - 1), 4294967295))))))));
            var_20 = max((max((((arr_6 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_5 [i_0]))), (arr_1 [i_1]))), ((max((arr_0 [i_0]), (arr_0 [i_0])))));
            var_21 = (arr_5 [i_0]);
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = ((min((((arr_1 [i_2]) ? (arr_2 [18]) : (arr_9 [i_0] [i_2]))), (((-(arr_5 [i_0])))))));
            arr_11 [i_0] = (arr_6 [13] [i_0]);
            arr_12 [i_0] [i_2] [i_0] = ((~(min((max((arr_8 [17] [i_2]), (arr_10 [i_0] [i_0]))), (arr_10 [6] [16])))));
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {

                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            var_23 = ((-(max((((arr_1 [i_3]) ? (arr_3 [i_6]) : (arr_10 [i_3] [8]))), (arr_15 [i_3] [i_3])))));
                            arr_23 [i_4] = ((((max((arr_21 [i_3] [8] [i_5] [8] [1]), (arr_21 [17] [13] [i_5] [i_6] [i_3])))) ? (arr_20 [i_7] [9] [i_7] [i_7 - 1]) : ((max((arr_7 [i_5] [i_7]), (((!(arr_21 [i_3] [i_4] [i_5] [i_7 - 3] [i_7 - 3])))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_26 [i_4] [i_4] [i_5] [i_6] [19] = (arr_22 [i_3] [i_3] [i_3] [i_4] [i_3] [17] [i_3]);
                            var_24 = (arr_15 [i_4] [i_8 + 3]);
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_25 &= (arr_4 [0] [i_6]);
                            arr_30 [i_9] [i_4] [4] [i_4] [i_3] = (((arr_28 [i_6 + 1] [i_4] [i_6] [i_6] [i_6]) ? (arr_20 [i_6 + 1] [i_9] [19] [i_9]) : -3768414820676252138));
                        }
                        var_26 = (arr_8 [i_3] [17]);
                        var_27 *= (min((min((arr_4 [i_3] [i_3]), (arr_19 [i_6] [i_6 + 1] [i_6] [i_5]))), ((max((arr_15 [i_5] [i_6]), (max((arr_25 [i_6] [i_5] [i_4] [4] [i_3] [16]), (arr_15 [i_3] [i_6]))))))));
                    }
                }
            }
        }
        arr_31 [i_3] = (min((max((((!(arr_0 [i_3])))), (min((arr_9 [19] [23]), (arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]))))), (arr_9 [17] [6])));
        var_28 = (1730983884 ? 32060 : ((max(27, (arr_7 [i_3] [i_3])))));
        var_29 = ((max((arr_24 [i_3]), (min((arr_4 [i_3] [i_3]), (arr_9 [i_3] [i_3]))))));
        var_30 = ((~(max(((max((arr_15 [i_3] [i_3]), (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [8] [i_3])))), (max((arr_4 [i_3] [i_3]), (arr_6 [11] [12])))))));
    }
    #pragma endscop
}
