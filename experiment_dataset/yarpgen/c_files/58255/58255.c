/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(var_1, var_9)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_16 = (min(2147483647, 2147483647));
            var_17 = (max(var_17, 65535));
            var_18 = (min(var_18, (min(12411500103897880342, 412129715734796702))));
            var_19 = ((!((min(2118196853, 18560)))));
            var_20 |= (min((((12223098075541914 >= (23 & 20)))), 25));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] = 70;
            arr_11 [i_0] [i_2] = ((3793 == (min(32235, 6035243969811671254))));
            arr_12 [i_0] [i_0] [i_0] = min(236, 18446744073709551603);
            var_21 = (min(var_21, -7434650526620354602));
            var_22 = (233 + 1);
        }
        arr_13 [i_0] = (!1);
        var_23 = 9223372036854775793;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] [1] [1] [i_4] = (min(((15 << (8882187051195160527 - 8882187051195160465))), (!7434650526620354601)));
                        var_24 = 15;
                    }
                }
            }
        }
        var_25 ^= min((((18446744073709551594 <= (~130)))), (min((2191107197112398159 || 250), (18434520975634009702 ^ 17))));
        var_26 = (!2118196841);
    }
    #pragma endscop
}
