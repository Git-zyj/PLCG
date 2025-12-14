/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max((var_2 && var_7), ((var_9 ? var_6 : 0)))) << (max((var_5 >= var_0), (min(12026185145558072041, var_0))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (min(var_13, (((arr_2 [12]) | 12026185145558072027))));
        var_14 = (min(var_14, (((((arr_0 [1] [i_0]) ? (((arr_0 [i_0] [i_0]) ? 12026185145558072018 : (arr_1 [i_0] [14]))) : (((8388544 << (6420558928151479597 - 6420558928151479595)))))) + (((((min((arr_1 [i_0] [i_0]), (arr_2 [0]))) <= ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [14]))))))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 += ((((((((arr_4 [i_1]) ? (arr_0 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))) < (((arr_2 [14]) << (((arr_0 [i_1] [i_1]) - 73)))))))) - (((((2378 ? 0 : (arr_3 [5])))) ? 6420558928151479597 : (((((arr_3 [i_1]) != (arr_2 [2]))))))));
        arr_6 [i_1] = (arr_3 [i_1]);

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_16 = ((((((((12026185145558072018 ? (arr_7 [i_1]) : (arr_2 [0])))) ? 6420558928151479574 : (arr_5 [i_1] [i_1])))) ? (arr_4 [i_1]) : (arr_1 [i_1] [i_2 + 3])));
            arr_10 [i_1] [2] [i_1] = 1;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_3] [i_3] [i_5 + 3] [i_3] = (((((arr_7 [i_1]) ? (((arr_4 [i_3]) ? (arr_15 [5]) : (arr_4 [11]))) : (min((arr_5 [i_4] [i_4]), (arr_0 [i_1] [i_1]))))) >> ((((((((-2147483647 - 1) ? 6420558928151479574 : (arr_8 [i_4])))) ? (((arr_3 [i_4]) << (441821063 - 441821062))) : (max((arr_5 [1] [1]), (arr_0 [i_1] [i_1]))))) - 71767))));
                        var_17 -= ((1865980760 >= ((-2928363092079856917 ? (max((arr_0 [i_1] [i_1]), (arr_14 [i_1] [10] [i_4]))) : (((arr_0 [i_1] [i_3]) - 1))))));
                        var_18 = (min(var_18, 6420558928151479574));
                    }
                }
            }
        }
    }
    var_19 ^= ((var_11 ? ((((((var_4 ? var_5 : var_1))) ? (var_11 || 6420558928151479623) : (var_8 != 0)))) : (((min(1, 1076615189221309963)) + var_5))));
    #pragma endscop
}
