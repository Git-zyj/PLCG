/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_4 * (5592402878093846809 == 61789)));
    var_11 = 95;
    var_12 = ((13827874952653482927 ? -5063050853212575017 : 16569158036886134336));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((max((arr_2 [i_0]), (arr_0 [i_0]))));
        arr_5 [i_0] = ((((max(((max(60373, 4068353709))), var_2))) ? (!-7950333303033129428) : ((2736178406 ? -2353884842 : (((7950333303033129451 ? 252 : 11068)))))));
        var_13 &= (((~((var_7 ? (arr_1 [8]) : 2736178391)))) >= (arr_2 [2]));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_3, ((min(var_2, 14728)))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_15 = (~var_5);
            arr_12 [i_2] [i_1] [i_2] = ((2437806210 ? (arr_10 [i_1] [i_2 + 1]) : (var_2 % 8929421749336146285)));
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_16 += (((((arr_8 [i_3 + 1] [i_3 - 1]) != ((((arr_14 [i_1] [i_3]) * 0))))) ? (((((((arr_6 [i_1]) << (124 - 115)))) <= var_5))) : ((max((arr_10 [i_1] [i_3 + 2]), (arr_10 [i_1] [i_1]))))));
            var_17 = ((((((arr_6 [i_1]) ? (arr_6 [i_3 + 1]) : (max(var_3, 7950333303033129408))))) ? var_7 : (min((min(-7950333303033129407, 12775682133852598616)), (((13166 | (arr_6 [i_3 - 1]))))))));
            var_18 = (max(var_18, (arr_10 [i_1] [i_1])));
        }
        var_19 = ((((~3999743118) ? (((min(107, (arr_6 [i_1]))))) : (max((arr_8 [i_1] [i_1]), (arr_9 [i_1]))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_20 = 169;
        var_21 &= (arr_11 [i_4] [i_4] [i_4]);
        arr_18 [10] = min((((var_2 ? ((((17432 >= (arr_7 [i_4]))))) : var_9))), (max(((7950333303033129436 << (1255140505 - 1255140505))), (arr_16 [i_4] [i_4]))));
        var_22 ^= (12232299497058446177 ^ (~-31693));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_28 [i_5] [i_6 + 1] [i_7] = ((3953957936 ? (~10024843666918553467) : (arr_24 [i_5 - 2])));
                    arr_29 [i_7] [i_7] = max(((((arr_9 [i_7]) < (arr_2 [i_7])))), ((9508 ? 11322196263011146085 : (arr_9 [i_7]))));
                }
            }
        }
        var_23 = ((((-var_5 != (arr_14 [i_5 + 1] [i_5]))) ? (arr_0 [6]) : var_9));
        var_24 = (min(var_24, (((2345094337 ? (min(103, 2254387615211384496)) : 80)))));
    }
    var_25 = (max(var_25, ((max(106, var_8)))));
    #pragma endscop
}
