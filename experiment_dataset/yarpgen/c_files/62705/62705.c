/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 ^ ((((!var_7) ? 55 : ((4 ? 248 : 7)))))));
    var_13 -= (max(((21 ? 250 : 1)), var_4));
    var_14 = ((!((max(((var_8 ? 6809780217256729216 : var_2)), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [11] = ((3220976681 ? 3072 : 1));
                arr_6 [i_1 + 1] [i_0] [i_0 + 1] = ((((((!17770) ? ((max(2523404061, 2057351147))) : (arr_2 [i_0] [i_0 + 2] [i_0])))) * (((1 < 123) ? -141859496515084331 : 4224343436417023224))));
                arr_7 [i_0] [13] [i_0] = (((((!(arr_1 [i_0])))) >> ((var_10 ? (((2049 ? 20 : 1))) : (arr_0 [18])))));
            }
        }
    }
    #pragma endscop
}
