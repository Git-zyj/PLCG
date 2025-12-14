/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 2088513356383842301));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        var_21 = ((~(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((2088513356383842291 ? (!713093874) : 10169545059704111346));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = ((((~(((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1]))))) | (max(var_3, (((arr_6 [i_1]) & 47))))));
        arr_7 [i_1] |= (arr_4 [i_1] [i_1]);
        var_23 = (max(var_23, (13145710438676285085 || 7618081211132206792)));
        var_24 -= ((((!((min((arr_4 [i_1] [i_1]), 13440514692716083669))))) ? ((2088513356383842294 ? (713093874 <= 132) : (min((arr_5 [i_1]), 14432208303524723037)))) : ((max((arr_6 [i_1]), (arr_4 [i_1] [i_1]))))));
    }
    #pragma endscop
}
