/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_7, (~var_12)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((((((max(65519, -5707))) < var_13))), -var_6);
        var_20 = ((-(var_1 - 1)));
        var_21 = (min((max((arr_0 [i_0]), (var_12 + var_2))), ((max(0, 1)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (((((arr_6 [i_1]) ? (~var_8) : 1)) < (min((arr_5 [i_1]), (arr_5 [i_1])))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = ((~(((var_11 || (arr_8 [i_1] [i_1]))))));
            var_23 -= ((!(arr_3 [i_2])));
            var_24 = var_4;
            var_25 = (min(var_25, ((((arr_6 [i_2]) > ((((arr_7 [i_2]) > (arr_7 [i_2])))))))));
        }
        var_26 -= (((arr_6 [18]) > (arr_4 [16] [i_1])));
        var_27 = ((((-1694 ? 1 : 4294967295))) ? 65519 : (arr_8 [i_1] [i_1]));
    }
    var_28 -= min(((var_18 - ((var_6 ? var_2 : -7035504567207147406)))), -var_5);
    var_29 = var_14;
    var_30 = (~-7035504567207147406);
    #pragma endscop
}
