/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((((17 ? 164161170 : (arr_3 [i_0] [i_0 + 3]))) ^ ((((var_6 ? 5846051730296773090 : var_0))))));
        arr_5 [i_0] = (min(221, 12600692343412778517));
        arr_6 [i_0] = (((((12600692343412778533 - (((arr_2 [i_0]) ? 10639 : 5846051730296773079))))) ? (((65535 ? ((201326592 ? (-32767 - 1) : 681084857)) : 1))) : ((min(6202, 55387)))));
        arr_7 [i_0] [i_0] = (-2147483647 - 1);
    }
    var_19 = ((((min(((18446744073709551615 ? 54881 : 3424197611949503376)), (((5846051730296773048 ? 10676 : 10664)))))) ? ((32755 ? 65535 : -8895761215760503434)) : var_13));
    var_20 = (max(((~((var_12 ? var_5 : var_14)))), (((min(24579, -8895761215760503434))))));
    #pragma endscop
}
