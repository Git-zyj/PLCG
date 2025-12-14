/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (var_6 >> var_6);
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((!(max((!9223372036854775807), (((arr_6 [i_0] [i_1 + 1]) || (arr_8 [i_0] [i_1 + 1] [i_2] [i_0])))))));
                }
            }
        }
    }
    var_12 = (min((((((var_4 ? var_5 : var_5))) ? 9223372036854775807 : (max(-9223372036854775807, 56)))), var_3));
    var_13 = ((min(var_7, -var_4)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_16 [i_4] [i_4] = ((!((((min((arr_12 [i_3] [i_4]), (arr_5 [i_3] [i_3]))) + ((((arr_12 [i_3] [i_4]) ? (arr_4 [7] [16] [i_4]) : (arr_8 [i_3] [i_3] [i_3] [i_3])))))))));

                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_14 = var_7;
                    arr_20 [i_3] [i_4] = (((!(arr_7 [i_3] [i_4]))));
                    var_15 |= (((((~(arr_6 [i_5] [i_4])))) | ((((min(67, var_9))) ? (max(-9223372036854775786, 150)) : (1895709809 / var_9)))));
                    var_16 += ((((max((min((arr_1 [i_3]), 1895709809)), -2147483634))) ? ((((((26 % (arr_2 [i_4])))) ? 36470 : (!var_8)))) : ((((min(var_0, (arr_5 [i_3] [i_4])))) ? (((1 ? 58 : (arr_8 [i_5] [i_5] [i_4] [i_3])))) : 9223372036854775807))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, (arr_9 [i_3] [4] [i_4] [i_6])));
                    var_18 = ((+(((arr_7 [i_4] [i_6]) ? (arr_7 [i_3] [i_4]) : var_1))));
                }
                var_19 &= ((((max(-9223372036854775807, (arr_15 [i_3] [4])))) ? (((68 == (((!(arr_10 [4] [i_4] [i_4] [i_4]))))))) : (arr_8 [i_4] [i_4] [9] [i_3])));
                arr_24 [i_4] [i_4] = ((((((min(-53, 9223372036854775807))) ? (arr_2 [i_3]) : (arr_23 [i_3] [i_4] [i_4]))) / 190));
                var_20 = (min(var_20, ((((max((!1), (max(36028247263150080, var_4)))) - ((max(var_8, (var_2 == 256)))))))));
            }
        }
    }
    #pragma endscop
}
