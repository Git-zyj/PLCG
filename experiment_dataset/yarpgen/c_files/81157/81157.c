/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((395348058692113615 ? ((3776981195912203379 ? 52 : 3776981195912203385)) : -35))) ? 132 : 190)))));
    var_21 = (15 ? 5785608001444136396 : (((((1 ? 3776981195912203376 : 170))) ? 18446744073709551601 : ((1 ? 1400905873081841048 : 3776981195912203359)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = 5785608001444136401;
        arr_2 [i_0] = ((((26 ? 14669762877797348247 : 154))) ? ((183 ? 8881654741938467159 : 8881654741938467156)) : -1);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = (178 ? 6662414025150973924 : 1);
        arr_7 [i_1] [i_1] |= 18446744073709551608;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_23 = 18446744073709551615;
        var_24 ^= 20;
        var_25 = (((((35 ? 5785608001444136396 : 1))) ? 76 : ((6755399441055744 ? 3776981195912203347 : 94))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_26 = (max(var_26, 67));
                        arr_19 [i_2 - 1] [i_3] [i_2] [i_5] [i_2] = ((186 ? 1 : 10144251917140704896));
                        arr_20 [i_2] [i_4] [i_3] [i_2] = ((194 ? 245 : ((76 ? 1 : 17))));
                        var_27 = (((((167 ? 1 : 115))) ? 95 : 5199535450355273385));
                    }
                }
            }
        }
    }
    var_28 = 231;
    var_29 = 79;
    #pragma endscop
}
