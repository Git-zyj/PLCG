/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_6);
    var_17 = -16384;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 |= 11886841764255498386;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_19 = ((var_13 ? (((!((max(65535, 5)))))) : ((var_13 ? 65526 : var_10))));
                var_20 -= ((-(min(((var_1 ? var_1 : var_15)), ((max(22, var_2)))))));
                var_21 = (!65501);
            }
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_22 = (max(var_22, (max(26870, 0))));
                var_23 = ((~((-7509 ? 1 : ((6867575298555584430 ? var_14 : var_13))))));
            }
            var_24 = ((18446744073709551615 ? (~1) : ((~((var_7 ? 48824 : 11579168775153967189))))));
        }
        var_25 = var_13;
        var_26 ^= 1888611607888686058;
    }
    #pragma endscop
}
