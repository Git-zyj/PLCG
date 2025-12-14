/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 -= (!14210140873728730736);
    var_19 = (!(!14210140873728730715));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = ((-((-(arr_3 [i_0] [i_0])))));
            arr_7 [i_0] [i_1] &= ((!(!4236603199980820893)));
            var_21 = (!var_12);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((~(~735714892)));
            arr_12 [i_0] [i_0 + 3] [i_0] = (!var_0);
            var_22 = (max(var_22, (((!(!28981))))));
            var_23 = (!var_0);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_24 = (!var_3);
            arr_17 [i_0] [i_0] = (!14210140873728730722);
            var_25 = (~(~83));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_26 = ((!(!var_16)));
            var_27 = (~((~(arr_4 [9]))));
        }
        arr_20 [i_0] = ((!(!92)));
        var_28 -= (!3494);
        arr_21 [i_0] = (!14210140873728730727);
    }
    #pragma endscop
}
