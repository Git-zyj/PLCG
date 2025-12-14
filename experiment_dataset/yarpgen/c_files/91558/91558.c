/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 36971;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_20 = (min(var_20, ((((((((~(arr_5 [i_0]))) + var_10))) <= (((arr_9 [i_0] [i_0] [i_2]) ? (arr_9 [i_0] [i_1] [i_2]) : (arr_9 [i_0] [i_1] [i_2]))))))));
                arr_12 [i_1] [i_1] [i_0] = 15;
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_1] [i_0] [8] = ((((arr_0 [i_0]) ? 15 : ((-848181531 ? -104 : 6826)))));

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_21 = ((((((17179869183 ? (arr_20 [i_1] [i_4]) : (arr_7 [i_3] [i_3]))) <= (((arr_19 [i_0] [i_1] [i_0] [i_4] [i_4]) ^ 848181509)))) ? ((((((-1308504649 ? (arr_14 [i_0] [i_1] [i_4] [i_5]) : -848181529))) < var_15))) : ((32762 ? (arr_13 [8] [i_4] [i_5]) : (arr_13 [i_5] [i_1] [i_4])))));
                        var_22 = (min(var_22, (((var_16 ? (min(((var_0 ? var_7 : var_6)), (((32762 ? (arr_15 [i_0] [i_3] [i_4]) : var_14))))) : (arr_13 [i_0] [1] [4]))))));
                        var_23 = (min(var_15, (arr_11 [1])));
                    }
                    var_24 += (arr_1 [i_1] [i_3]);
                    arr_21 [i_0] [i_4] &= ((((((arr_11 [i_0]) - (arr_11 [i_3])))) ? (((((arr_11 [i_1]) < (arr_11 [i_0]))))) : (((arr_11 [i_4]) | (arr_11 [8])))));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = (min(((var_7 / (arr_14 [i_4] [i_0] [i_1] [i_0]))), ((min(-443382862, 58)))));
                    arr_23 [i_0] [i_1] [i_3] [i_1] [i_3] [i_4] = ((((((var_18 ? var_4 : var_5)))) ^ (var_5 & 8479)));
                }
                var_25 *= (arr_10 [i_0]);
                arr_24 [i_0] [i_0] [i_0] [0] &= (((arr_18 [i_3] [8] [7] [2] [7] [i_0]) - ((-(arr_17 [i_0])))));
                var_26 = (arr_13 [i_0] [1] [3]);
            }
            var_27 = ((((min(2008651501, 848181521))) % (((((65530 ? 254 : 17179869183))) ? -848181529 : (arr_15 [i_0] [i_0] [i_0])))));
            var_28 = ((((((((8128 ? (arr_9 [i_0] [i_1] [i_1]) : 6706)) > ((((arr_0 [3]) ? (arr_5 [i_0]) : var_10))))))) < ((((min((arr_0 [2]), (arr_8 [i_1] [1])))) ? ((var_10 ? (arr_8 [i_1] [i_1]) : (arr_11 [i_0]))) : ((((arr_15 [i_0] [i_0] [i_0]) + -1413552112)))))));
        }
        arr_25 [i_0] = ((((-((min(38, (arr_3 [i_0])))))) | ((-231479594 ? -848181529 : (arr_3 [i_0])))));
    }
    #pragma endscop
}
