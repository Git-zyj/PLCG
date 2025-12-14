/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((~(-32767 - 1)))) ? ((var_5 ? 18 : var_2)) : ((14 ? -110 : (-32767 - 1)))))) ? (~2013265920) : (!-var_6)));
    var_13 = (((((((var_1 ? var_11 : var_9))) ? (!var_9) : 11))) ? (((var_3 ? ((var_5 ? -110 : var_6)) : var_3))) : (~5967505273921458746));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((((!(!11738592422455624873))) ? ((((!((!(arr_1 [i_0]))))))) : ((-8796091973632 ? ((-(arr_2 [i_0]))) : ((var_4 ? var_4 : -5455397139740706340))))));
        arr_4 [i_0] &= (~var_4);
        arr_5 [i_0] [i_0] = (((((893588281 ? 5455397139740706344 : 12695))) ? (((-(!1490732432)))) : (((((-2053792975 ? var_0 : 3231720571247023363))) ? ((~(arr_2 [i_0]))) : ((~(arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (((((var_11 ? 7817562230748735949 : var_0))) ? (((arr_7 [i_1]) ? (arr_6 [11] [11]) : 593237519079826681)) : ((var_8 ? (arr_6 [i_1] [i_1]) : var_9))));
        arr_8 [i_1] = (((((var_9 ? 17646763340791987190 : (arr_6 [i_1] [i_1 - 1])))) ? ((var_7 ? var_5 : (arr_6 [i_1] [i_1 + 1]))) : ((5455397139740706340 ? var_0 : (arr_7 [i_1])))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((!((!(((var_1 ? 96 : (arr_0 [i_2]))))))));
        var_15 = (9277616678107653952 ? -106 : 30);
        arr_13 [i_2] [i_2] = ((((!(((var_7 ? (arr_0 [i_2]) : (arr_9 [i_2] [i_2])))))) ? (~-225) : -30499));
    }
    #pragma endscop
}
