/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((22 ? (!50704) : ((var_12 ? 2097150 : -32751))))) ? (~var_2) : (~7440658602309680754)));
    var_19 = ((((max((max(59217, var_5)), ((min(var_7, -79)))))) ? (max(2097150, (var_15 % var_15))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [1] [i_1] [i_1] [i_1] = ((~(arr_5 [i_1] [i_1] [i_0])));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_20 = ((((16523440360110231955 ? -1634424193 : 17952))) ? -46355 : (arr_5 [i_0] [i_3] [i_2]));
                                var_21 = (~2097141);
                                var_22 = (((min((arr_4 [i_0] [i_2]), 2097150)) % ((((max(4294967295, 46)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = ((((arr_11 [i_1] [i_2] [i_3] [9]) % 63)));
                                var_24 = 15187459562165035486;
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_25 = (arr_11 [i_3] [i_0] [i_1] [i_0]);
                                var_26 = ((-63 ? (arr_0 [i_0]) : 0));
                                arr_22 [i_0] [i_0] = 16523440360110231955;
                                arr_23 [i_0] [i_1] [i_2] [i_1] [i_6] = (max((((4697 ? ((min(14801, 148))) : ((var_7 << (var_7 - 12630)))))), (((arr_10 [i_0] [9] [i_2] [i_3]) ? var_10 : (~2172738008733841001)))));
                                var_27 = 1;
                            }
                            var_28 = (((arr_11 [i_0] [i_0] [i_0] [i_3]) ^ (~1)));
                            var_29 = (arr_5 [i_0] [i_3] [i_2]);
                        }
                    }
                }
                arr_24 [i_0] [i_1] = (((-17956 + 2147483647) << ((((max(var_0, (arr_14 [i_0] [i_0])))) - 63332))));
                var_30 = (arr_11 [11] [i_0] [11] [i_1]);
            }
        }
    }
    #pragma endscop
}
