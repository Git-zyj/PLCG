/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = 1474744116461777800;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 = (max(var_13, (((((((((arr_5 [i_0] [i_0] [19]) < 1474744116461777800)) ? (((arr_5 [i_0] [i_0] [i_1]) ? 0 : var_7)) : (arr_1 [12])))) ? ((((((arr_3 [i_0]) ? 1474744116461777800 : -40))) ? (!-10110) : 848054899)) : (((((!(arr_4 [2] [2]))) ? (((arr_4 [18] [6]) - (arr_5 [i_0] [13] [i_1]))) : (((arr_5 [i_0] [i_0] [9]) + (arr_3 [11])))))))))));
            arr_6 [12] [i_0] = 1284689395;
            var_14 = (min(var_14, (((((!(arr_3 [i_0]))) ? ((~(((!(arr_0 [i_0])))))) : ((3177452895 ? (((251 || (arr_3 [17])))) : 251)))))));
            arr_7 [i_0] [16] [i_1] |= (((((((0 ? (-32767 - 1) : (arr_4 [10] [10])))) ? (((arr_0 [i_0]) ? var_4 : 8085254568491574787)) : (arr_1 [1]))) != (~848054899)));
        }
        arr_8 [i_0] = (((((-10361489505217976829 ? ((4332114742017731244 ? -4545632929255947208 : 5906728976343478478)) : (arr_5 [i_0] [i_0] [i_0])))) ? ((~(arr_4 [i_0] [i_0]))) : (((((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_1))) ? (arr_1 [i_0]) : (!0))))));
        var_15 += (((arr_4 [1] [i_0]) >= (((((arr_3 [i_0]) ? (arr_1 [14]) : 18711)) << ((((0 ? (arr_5 [i_0] [i_0] [13]) : (arr_5 [i_0] [i_0] [4]))) - 955478553))))));
    }
    var_16 = (max(var_16, var_11));
    #pragma endscop
}
