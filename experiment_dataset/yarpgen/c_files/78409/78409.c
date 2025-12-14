/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(var_18, (((~((max(1, -27))))))));
        arr_3 [i_0] [i_0] &= 4635285532317226152;
        arr_4 [i_0] = (!-31990);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = ((-2052027465 ^ (max(((7 ? 6993170165136270480 : 32005)), 11923015003741060650))));
        arr_9 [i_1] = ((-(((!(((-27 ? 1223457171 : 6208600208372543500))))))));
        arr_10 [i_1] = ((!(!25)));
        arr_11 [i_1] = ((2052027465 ? -1281866356893146656 : (((!0) ? ((max(0, 457003752))) : (max(23886, 17832976391391417308))))));
        arr_12 [i_1] = 0;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (max(((2052027460 ? 1223457171 : 1223457171)), ((1 ? 2052027465 : 1))));
        var_20 = (((((1 ? 3466 : 2242939831))) ? (2907168090 + 4648331333531151572) : -4493212154392163594));
        var_21 = 1;
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                arr_20 [i_4 - 2] = 11923015003741060631;
                var_22 = (min(var_22, ((((~6523729069968490944) ? -10604 : 1)))));
                arr_21 [i_4] [i_4] [i_3] = (((min((~1524365136), (2242939831 * 1387799206))) / -4537));
            }
        }
    }
    #pragma endscop
}
