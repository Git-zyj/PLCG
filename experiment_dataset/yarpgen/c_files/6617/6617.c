/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 13053188764603195534;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_11 = (((((!(arr_1 [i_0])))) != var_3));
            var_12 += arr_3 [i_1] [i_0];
            var_13 = (min(var_13, (!-2848194127333823474)));
            var_14 &= min((((2848194127333823474 ? 3287 : -12410))), (min((arr_0 [i_1]), 4756857305728487959)));
            arr_5 [i_0] [i_1] = 0;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_15 = (!var_2);
            arr_10 [i_0] [i_0] [i_2] &= 15598549946375728142;
        }
        var_16 |= (min((arr_3 [i_0] [i_0]), var_9));
        arr_11 [i_0] [i_0] = ((-(min(((var_9 ? -7 : (arr_3 [i_0] [i_0]))), (((var_4 ? 46903 : (arr_4 [i_0]))))))));

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_17 = arr_6 [i_3] [i_0] [i_0];
            arr_16 [i_3] = -510346424;
            arr_17 [i_3] = ((((((~var_4) ^ (arr_3 [i_0] [i_3])))) ? (((arr_12 [i_0] [i_3] [i_3]) - var_4)) : (arr_12 [i_0] [i_0] [i_0])));
            var_18 = (min((((arr_8 [i_0]) << (3665001860530345788 - 3665001860530345788))), ((var_1 ? 1216539587 : (arr_8 [i_0])))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = var_9;
            arr_20 [i_0] [i_4] = var_3;
            var_20 = ((-17111905811533305505 ? ((-(((arr_19 [i_0]) ? var_8 : var_4)))) : (min(-1289825537, (max(var_6, (arr_9 [i_0] [i_4])))))));
        }
        arr_21 [i_0] &= (min(((((min(18446744073709551611, var_2))) ? 1149804914 : var_3)), ((-(arr_4 [i_0])))));
    }
    var_21 = (((max(((-407708343 ? var_0 : var_6)), var_9))) ? var_9 : (min(((var_9 ? var_7 : 0)), ((var_0 ? 1 : var_6)))));
    var_22 = (max(var_22, ((min(((var_3 ? ((var_9 ? var_3 : var_5)) : var_0)), var_0)))));
    #pragma endscop
}
