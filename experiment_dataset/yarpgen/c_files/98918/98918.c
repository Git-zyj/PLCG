/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = var_4;
                arr_6 [1] [i_0] = ((((((((11172866366724288244 ? 92 : 1860))) ? (((-896992574 ? var_4 : (arr_5 [i_0 - 3] [i_1 + 1])))) : (~16110041018742935198)))) ? ((65535 + (arr_2 [i_0 + 1]))) : (arr_1 [i_0])));
                arr_7 [i_0] [i_1 + 1] [i_0] |= ((((0 ? (!-1704) : (arr_2 [i_0 - 1]))) >= (((((max((arr_0 [i_0 - 4]), var_6))) ? 1 : (((!(arr_0 [i_0])))))))));
            }
        }
    }
    var_12 = (((var_3 * -110) ? 12 : (((max((61 == 817494925336560154), 239))))));
    #pragma endscop
}
