/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((+((1658753517 ? (arr_0 [i_0]) : var_0)))) * 1658753517));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_10 ^= (((arr_1 [2]) + (arr_5 [i_0])));
            var_11 = (((arr_0 [i_0]) ? var_1 : ((~(arr_0 [i_0])))));
            arr_6 [i_0] [i_1] [i_0] = (((arr_1 [i_0]) ? (arr_4 [i_1 + 3] [i_1 - 1]) : var_6));
            var_12 = ((!(arr_4 [i_1] [i_1 - 1])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = var_1;
            var_14 = ((((max((((arr_7 [i_0] [i_0] [i_0]) ? var_0 : 8347569958776490796)), 10099174114933060819))) ? (((((((arr_1 [i_0]) | 2636213805))) ? (~3500949241) : (arr_3 [i_0])))) : ((((((arr_7 [i_0] [i_0] [i_0]) | var_7))) / ((10005638212612212696 ? 3500949262 : var_8))))));
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 |= (((max((arr_12 [i_3]), var_1)) >= (max(((1775 ? 7208138933059338768 : var_4)), (((arr_11 [i_3] [i_3]) | (arr_12 [i_3])))))));
        arr_13 [i_3] |= min(1658753502, (min(((10099174114933060820 ? (-2147483647 - 1) : 10099174114933060811)), (max((arr_11 [10] [i_3]), -17694)))));
        var_16 = (((7208138933059338768 | 2071751145) | (((18446744073709551615 ? -94259584457875633 : 33)))));
        var_17 = 11238605140650212848;
    }
    var_18 = ((!((var_3 >= ((min(1658753524, var_8)))))));
    var_19 = ((!((max(var_6, (!var_6))))));
    #pragma endscop
}
