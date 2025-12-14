/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (var_5 ? 4294967295 : ((((!(((4294967295 ? 777609378 : 3))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 &= ((((18014398509481982 ? 0 : (arr_2 [i_0]))) * (arr_1 [i_0] [i_0])));
        var_14 = var_11;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 = (max(var_15, 0));
                    var_16 = (((arr_5 [i_3] [i_2]) ? (arr_5 [i_2] [i_3]) : var_11));
                }
            }
        }
        var_17 = 0;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_18 = 18446744073709551615;
        var_19 = (max(((((37420 * (arr_13 [i_4]))))), (max((arr_10 [i_4]), (arr_7 [i_4])))));
    }
    var_20 = ((~(max(65521, 280925220896768))));
    var_21 = (max(var_21, (((((max(((var_5 ? var_3 : var_7)), var_10))) ? (!var_5) : 18446744073709551597)))));
    #pragma endscop
}
