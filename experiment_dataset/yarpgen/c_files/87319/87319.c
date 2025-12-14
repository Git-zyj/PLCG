/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = min((~-268435456), ((((min(268435459, 1302947694671548827))) ? (arr_3 [i_0]) : 268435456)));
        var_18 &= (min(18446744073709551596, ((max((arr_0 [i_0] [i_0]), -1)))));
        var_19 = ((~(arr_0 [i_0] [i_0])));
        var_20 += (((~1885540976) != ((max((arr_0 [4] [4]), ((((arr_1 [i_0] [i_0]) && -4967887139120662846))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = -1885540981;

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_22 = 98;
            var_23 = ((arr_4 [i_2]) / (arr_5 [i_1]));
            arr_8 [i_1] = (var_11 << 0);
            var_24 = 20;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_25 &= (35 != 18446744073709551603);
            var_26 = (var_5 * 18446744073709551607);
            var_27 = ((+(((-1813825022845360915 + 9223372036854775807) << (((((arr_6 [i_3]) + 2065045476)) - 54))))));
        }
        var_28 = ((!(arr_6 [i_1])));
        var_29 = ((-32760 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [11] [i_1])));
    }
    var_30 = (max(var_30, var_4));
    #pragma endscop
}
