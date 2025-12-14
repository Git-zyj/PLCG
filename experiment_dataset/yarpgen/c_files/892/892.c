/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((!var_10), 154421437));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_12 = (((max(var_6, (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0 + 1]) : (arr_1 [i_0] [i_0]));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                arr_8 [i_0] [i_1] [i_1] [i_1] = (min((arr_5 [i_0] [i_0] [i_0 + 1]), (arr_4 [i_0] [i_2 - 1] [i_0 + 1])));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_13 *= (arr_5 [12] [i_1] [i_1]);
                        var_14 = (arr_7 [i_1]);
                        var_15 *= var_6;
                        var_16 = (((21876 - -21904) << (var_6 - 2918966090)));
                        var_17 = (min(var_17, (arr_1 [i_0] [i_0])));
                    }
                    arr_13 [i_3] [i_0] [i_0] = (arr_11 [i_0] [i_2] [i_2] [i_0] [i_0 + 3]);
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_18 [i_0] [i_1] = ((((((min(var_9, var_5))) + 2147483647)) << (((arr_16 [i_0] [i_0] [i_0]) - 12126789896001714372))));
                    var_18 = (((((var_9 ? (arr_3 [1] [i_0 - 2]) : var_10))) ? (((arr_3 [i_5] [i_0 - 2]) ? (arr_3 [i_0] [i_0 - 2]) : (arr_3 [8] [i_0 - 2]))) : var_6));
                    var_19 = (min(var_19, var_9));
                }
                var_20 = (min(var_20, (((arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]) ? ((~(arr_3 [i_0 - 2] [i_0 + 3]))) : ((min((arr_15 [i_0] [i_2 + 1] [i_1] [i_2] [i_0 - 2] [i_2 - 1]), (arr_15 [i_2] [i_2 - 1] [11] [i_1] [i_0 - 2] [i_2]))))))));
                arr_19 [i_0] [i_1] &= (arr_3 [i_0 - 1] [14]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_21 = (min(var_21, (((((arr_3 [i_0] [i_0 + 1]) ? ((939703545 ? (arr_4 [i_0 - 2] [1] [i_6]) : var_3)) : (((arr_15 [4] [13] [4] [i_0] [i_1] [i_0]) ? var_0 : 7151))))))));
                arr_23 [i_0] [i_0] = ((var_4 << ((((arr_0 [i_0]) >= (min(3251286028, (arr_12 [i_0 + 3] [i_0 + 1] [2] [i_0] [i_1] [9]))))))));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_22 = var_3;
                    arr_26 [i_0] [i_1] [i_6] [i_1] = (arr_10 [i_0] [i_1] [i_1] [i_6] [i_7]);
                    var_23 = (max(var_23, ((max((((arr_21 [i_0 - 1]) % ((-4069081747213183361 ? 1914754978 : 939703553)))), ((((min(57206, var_8))) ? (arr_3 [i_0 + 3] [i_0]) : (arr_2 [i_1] [i_1]))))))));
                }
                for (int i_8 = 4; i_8 < 12;i_8 += 1)
                {
                    arr_29 [i_0] [i_0] [i_1] [3] [i_0] = 1;
                    var_24 = (min(var_24, (((~(arr_22 [i_0] [i_1] [14] [10]))))));
                }
            }
            var_25 &= -var_7;
        }
    }
    #pragma endscop
}
