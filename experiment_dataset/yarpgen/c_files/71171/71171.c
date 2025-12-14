/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_5));

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 = (max(var_17, (((~(arr_0 [i_0 + 2]))))));
        arr_2 [i_0] = (max((min((arr_1 [i_0] [i_0 - 4]), (arr_0 [i_0 + 1]))), ((max((arr_0 [i_0 + 1]), var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [1] = (((~var_3) ? ((~(~12322898540037331883))) : ((((((~(arr_3 [i_1] [i_2])))) ? (~var_11) : (arr_6 [i_0] [4] [i_0 - 2]))))));
                    var_18 = (min((min(15454157524424779319, 12322898540037331883)), (((!(~1))))));
                    arr_10 [i_0 + 2] [i_0 + 2] [i_1] = min(-var_7, 1);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 *= ((!(arr_11 [i_3])));
        arr_13 [i_3] [i_3] = 1;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_18 [i_4] = (min((min(15853, (arr_11 [i_4]))), var_11));
            var_20 *= var_0;
            var_21 = (max(var_21, ((((1 ? 64476 : 1)) >= ((~((((arr_14 [i_4]) < 1)))))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = (min(var_22, ((max((((-var_12 < (((arr_12 [1]) ? var_11 : (arr_11 [2])))))), (((~(arr_19 [i_4] [i_4] [i_4])))))))));
            arr_21 [i_6] [i_6] = (arr_12 [i_4]);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_4] = (arr_20 [i_4] [i_4] [i_4]);
                var_23 = ((~((-((min(var_13, (arr_17 [i_4] [i_4]))))))));
                var_24 = (max(((max(1, (arr_19 [i_4] [i_6] [i_7])))), (((arr_19 [14] [i_6] [13]) ? (arr_19 [i_4] [i_7] [i_4]) : (arr_19 [i_4] [1] [i_4])))));
            }
        }
        arr_26 [i_4] = ((!(~12322898540037331862)));
        arr_27 [11] [i_4] = ((((((arr_11 [i_4]) < (arr_11 [i_4])))) < (arr_23 [i_4])));
    }
    #pragma endscop
}
