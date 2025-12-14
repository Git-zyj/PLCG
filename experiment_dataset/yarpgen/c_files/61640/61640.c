/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_11 = ((~((max(7, 10)))));
        var_12 = (max((min(3953033378, 4294967293)), (min(((0 ? var_2 : 1077882432)), ((max(1, 1614)))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_13 = 65535;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_14 &= (!((max((31 >= 1), (340 * 0)))));
                var_15 += (((((59848 / var_10) / -16)) == var_2));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_16 = (~65535);
                var_17 = (var_0 ^ var_7);
            }
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                var_18 = ((((max(65535, 4))) & ((var_5 ? 137 : var_2))));

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_19 = max(-var_6, 6);
                    var_20 -= (min((248 + var_8), (((((min(var_4, var_6))) || 37040)))));
                    var_21 *= (((max(8540, 0))));
                    var_22 |= ((-(((!65508) ? (min(1, 664896433)) : (!var_5)))));
                }
                var_23 = ((16 ? (0 * 29857) : ((min(4731, 1)))));
                var_24 = min((52878 >= 1), (~var_5));
            }
            var_25 = ((~8064) || ((((((var_2 ? var_3 : var_7))) ? (var_5 != 0) : (24732 | 37113)))));
            var_26 = ((min(var_3, var_5)));
        }
        var_27 = ((((max(((min(-23266, 1))), 234))) ? 1 : ((max(30720, 30700)))));
        var_28 = (((min(var_10, 60651)) | (((max(65526, 1))))));
        var_29 = (max(var_29, (!-60043)));
        var_30 = -65535;
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        var_31 = 38040;
        var_32 = max(var_3, -var_8);
        var_33 &= (min(((((!var_5) && 39103))), var_4));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_34 = (max(var_34, 399099417));
        var_35 = (((!11666) ? -var_0 : (min(var_9, 3))));
        var_36 = (max((max(0, 0)), 1));
    }
    var_37 = ((~((((var_2 | var_6) != var_2)))));
    #pragma endscop
}
