/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = -1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = (((arr_5 [i_0] [i_3]) == ((-7656622940491761925 ? -7656622940491761925 : -4839595951969981884))));
                        var_21 = (arr_5 [i_0] [i_1]);
                        var_22 = (max((min((max(7656622940491761924, var_15)), (arr_3 [i_3]))), (((min(var_9, -3))))));
                        arr_11 [i_3] = (((((min((arr_4 [i_0] [i_2]), var_3)))) ^ (((arr_4 [i_1] [i_3]) & 4575657221408423936))));
                        var_23 = (min(1978021131, -43));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_24 = (((((var_0 << (var_2 + 1777105350245427419)))) / ((3584 ? 200 : 4575657221408423936))));
        var_25 = ((609117018 ^ (((((((-(arr_4 [i_4] [i_4])))) <= var_15))))));
        arr_15 [14] = (arr_1 [i_4]);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_26 *= ((((max(609117018, -12)) != (12 != 1183874358))) ? ((max(0, (arr_2 [i_5] [i_5] [i_5])))) : 183);
        arr_19 [i_5] = ((var_1 > ((3685850278 ? (arr_14 [i_5]) : (((1502491661 <= (arr_16 [i_5] [i_5]))))))));
        var_27 = (~var_4);
    }
    var_28 = (min(var_28, -609117017));
    var_29 = (((0 && -85) > (250 - var_14)));
    #pragma endscop
}
