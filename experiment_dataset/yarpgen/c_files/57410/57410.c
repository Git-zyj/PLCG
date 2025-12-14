/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [12] = 0;
        arr_3 [i_0] [i_0] = 2147483647;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, (((216172782113783808 <= (-2147483647 < 8872474116554484916))))));
            arr_9 [i_1] = (2147483647 < -8);
            var_15 = 2147483647;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_1] = -2147483647;
            arr_13 [i_1 + 2] [i_3] [i_1] = (2285088323 && 1);
            arr_14 [i_1] [i_1] [i_1] = (4294967279 < 0);
            var_16 = (((1 < 127) && 2134929917493800112));
            arr_15 [4] &= (2351900114 <= -2074467792);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_19 [i_1] [i_1] = 0;
            var_17 = ((4294967269 <= ((((-1828842297 <= 1354575076) <= 58919)))));
        }
        var_18 = 14;
        arr_20 [i_1] [i_1 + 1] = 0;
        var_19 = 0;
        var_20 = (3428707018256293278 <= 26);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_23 [1] [i_5] = ((255 && (0 < 0)));
        var_21 += 27;
        var_22 = 5516314247695484683;
    }
    var_23 = (((1 <= -14510) && 1195934567750710642));
    var_24 = 35;
    #pragma endscop
}
