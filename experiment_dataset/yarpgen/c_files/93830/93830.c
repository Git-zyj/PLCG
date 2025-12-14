/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((127 % ((max(788, var_7)))))), var_5));
    var_15 = ((!((((((6315 ? -23930 : var_11))) ? (16796456373190913107 || -31571) : var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(((max((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_2] [i_1])))), (((arr_5 [i_0] [i_1]) * 4904776606736008325)))))));
                    arr_8 [13] [i_1] = (((((((arr_2 [i_0] [i_2]) != ((1763064646936981477 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0]))))))) + 6554792623444565090));
                    arr_9 [i_0] = -16;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_17 = ((6554792623444565092 ? 4503599627370496 : -1763064646936981461));
        var_18 = (((arr_11 [i_3 + 1]) ? (arr_11 [i_3 - 2]) : (arr_11 [i_3 - 2])));
        var_19 -= 65530;
        var_20 ^= (--44);
        arr_12 [1] = ((~(-4503599627370499 <= -20943)));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_21 -= (min((!31566), (~4294967283)));
        arr_17 [i_4] = (i_4 % 2 == 0) ? (((((119 ? 192 : 876554647)) & ((max((((arr_15 [i_4]) << (-4503599627370504 + 4503599627370514))), (arr_14 [i_4 + 1]))))))) : (((((119 ? 192 : 876554647)) & ((max((((((arr_15 [i_4]) + 2147483647)) << (((-4503599627370504 + 4503599627370514) - 10)))), (arr_14 [i_4 + 1])))))));
        var_22 = ((65535 ? (!30222) : (((156 && (4294967291 * 229))))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (((-92 ? 1627586797 : (arr_14 [i_5 + 2]))))));
        var_24 = (~65529);
    }
    #pragma endscop
}
