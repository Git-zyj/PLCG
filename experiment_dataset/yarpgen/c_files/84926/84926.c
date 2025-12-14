/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((var_11 ? var_11 : var_8))) ^ (max(2508786518, 7730519019941631944)))), ((((((1786180795 ? 11325787869965966158 : 1786180786))) ? 32767 : (!5570513131650853883))))));
    var_21 ^= ((((var_8 ? (min(10716225053767919669, var_3)) : var_7)) <= var_12));
    var_22 = -2466598436;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_23 ^= (min(1, (arr_4 [i_0] [i_0])));
            var_24 *= (~-9155681307950205261);
            var_25 = (min(var_25, ((((((((10048 ? -2 : var_12)) > (arr_0 [i_0 - 1] [i_0 - 1])))) % var_9)))));
            var_26 = (arr_3 [i_0 - 1] [5] [i_1]);
        }
        var_27 = (arr_0 [i_0 - 1] [i_0 - 1]);
        var_28 = 457636031;
        var_29 = -457636031;
        var_30 |= (((max(13, 457636015)) % ((var_19 & (204 != -1375072851)))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_31 = ((-27490 ? 1092939722 : 29373));
        var_32 = (max(2508786523, 39));
    }
    var_33 = (max(var_15, (min((min(var_6, 8938117930476430232)), 7730519019941631959))));
    #pragma endscop
}
