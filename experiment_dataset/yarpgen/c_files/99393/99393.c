/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_9));
    var_13 ^= ((var_0 >> (min((33550336 == var_2), var_7))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((!(arr_3 [i_0] [4]))))));
                    var_15 = ((-3716571308 ? (arr_0 [i_0]) : (((arr_0 [i_0]) + (arr_3 [i_0] [i_0])))));
                    var_16 &= (((-1868873620 || var_3) & (((arr_3 [i_0 - 1] [12]) | ((var_2 ? var_3 : -8499843671634188382))))));
                }
            }
        }
        var_17 ^= (!var_5);

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_18 = ((2147483636 ? (max((1 < var_7), (min(7089416177077823133, var_4)))) : ((min(((~(arr_3 [i_0] [i_0]))), (arr_9 [i_0] [i_0 + 1] [i_0]))))));
            var_19 = (min(var_19, ((((((arr_3 [i_0] [6]) % (arr_6 [i_0] [i_0 + 1])))) ? -var_1 : (((arr_3 [i_0] [8]) ? (arr_10 [i_0] [i_0 - 2] [12]) : 1))))));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_20 = (min(var_20, (((-2147483621 ? (max(var_10, (arr_2 [0] [i_4 + 1]))) : 2147483636)))));
            var_21 = (min((((!((min(507904, 28578)))))), ((~(arr_10 [i_0] [i_0 + 1] [i_0])))));
            var_22 = (1 > 1842378964);
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_23 = ((((max(var_9, (arr_15 [i_5 + 3] [i_5])))) >> (((min(-377652894, 8499843671634188382)) + 377652921))));
                        arr_22 [i_0] = ((((!(arr_3 [i_0] [i_0]))) ? ((-(~8499843671634188391))) : ((((((arr_6 [i_0] [i_5]) - var_5))) ? (arr_13 [i_6] [i_0]) : (min(8499843671634188381, -1642891499077041903))))));
                        var_24 += (((((arr_12 [i_7]) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (arr_12 [i_7]))) ^ (((arr_12 [i_7]) ? (arr_6 [i_0 - 2] [i_0 - 2]) : (arr_6 [i_0 + 1] [i_5])))));
                        var_25 = ((arr_14 [i_0 + 1]) << (var_5 + 115));
                        var_26 = ((var_4 ? (((134 < (arr_19 [i_6 + 1] [i_0] [i_0] [i_0 + 1])))) : (!1)));
                    }
                }
            }
        }
        var_27 ^= (max(((((((5 ? 0 : (arr_8 [i_0] [i_0])))) ? -112 : (arr_9 [i_0 + 1] [i_0] [i_0 - 1])))), (((min(var_8, 0)) ^ ((((var_2 && (arr_14 [i_0])))))))));
    }
    #pragma endscop
}
