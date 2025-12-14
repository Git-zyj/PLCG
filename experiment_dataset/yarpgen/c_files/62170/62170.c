/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 5;
    var_11 = 978649824;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 *= 13202;
        var_13 &= var_7;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (max(var_14, var_2));
            arr_5 [i_0] = ((((((((arr_1 [i_0] [8]) < (arr_0 [i_0])))) * ((-(arr_3 [i_1]))))) & (arr_3 [i_0 - 1])));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [i_2] |= var_7;
            arr_10 [i_0] = ((!(arr_3 [i_0 - 1])));
            var_15 = (min(var_15, (((~(arr_8 [i_0 + 1] [i_0 + 1] [i_2]))))));

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_14 [i_0] = arr_8 [i_0 - 1] [i_2] [i_2];
                var_16 = (((((arr_8 [i_2] [i_2] [i_2]) ^ (~1))) > (((+((var_0 ? (arr_4 [i_0] [i_0] [1]) : var_9)))))));
                arr_15 [i_2] &= ((((!(((arr_0 [i_2]) || (arr_12 [1] [i_2] [1]))))) ? ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : (((!(((1 ? -4 : 944516723))))))));
                var_17 ^= var_6;
                var_18 ^= (max(1, 1));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                arr_19 [1] [1] [i_0] = (((arr_16 [i_0 - 1] [i_0 + 1] [i_4 + 1] [i_4 + 1]) ? 1 : (arr_16 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4 + 1])));
                var_19 = ((0 ? 1 : 232));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_24 [i_0] = (((arr_23 [i_0 - 1] [i_0 - 1]) ? (((((max(var_5, -4))) ? -5118 : ((max((arr_21 [i_5] [i_5] [11] [i_0]), (arr_17 [17] [i_2] [i_0] [20]))))))) : 7796964020193354810));
                arr_25 [i_0 - 1] [6] [i_0] [i_0 - 1] = (-1 && -6674647141686565968);
                arr_26 [i_0] [i_2] [i_2] [i_5] = (~241);
            }
        }
        arr_27 [22] |= -106;
    }
    #pragma endscop
}
