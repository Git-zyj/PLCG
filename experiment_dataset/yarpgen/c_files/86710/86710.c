/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((-21 ? (!11421071198687135505) : 1002351922))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_21 = ((!(((7025672875022416088 ? (!12) : 7025672875022416110)))));
        var_22 = (max(var_22, (((!((max(1, 2147483647))))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_23 = -44;

        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            var_24 = (((((11421071198687135482 ? ((45 ? 64 : 51)) : 16))) ? (-127 - 1) : (!2147483633)));

            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                var_25 ^= (!117);
                var_26 = (max(((+(((-2147483647 - 1) ? -64 : 287948901175001088)))), (!1)));
            }
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                var_27 = (max(((0 ? 1235343222 : 51268572050438587), 55)));
                var_28 = ((-(((!((max(1, -1235343223))))))));
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_29 = ((-80 ? 2147483644 : ((28 ? 57 : 123))));

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                var_30 -= -122;
                arr_20 [i_6] [i_1] [1] = (~11421071198687135502);
                var_31 = 15;
                var_32 = ((!(((28 ? 32 : 3633490834255290602)))));
            }
        }
        var_33 = (((max(-8, (!125)))));
    }
    var_34 = ((((!(!110))) ? ((38 ? ((56 ? -108 : -65)) : -761193031)) : (((!(((115 ? -1470382068 : 191535161))))))));
    var_35 *= (max((((((-78 ? -96 : 12116147970066239747))) ? 32738 : 116)), ((max(57, 92)))));
    #pragma endscop
}
