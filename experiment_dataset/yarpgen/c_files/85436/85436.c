/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2305834213120671744;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_15 = ((~-20) ? (max(2984584299, 3047530679)) : (arr_1 [i_0 - 1]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 8;i_4 += 1)
                            {
                                var_16 = (~2984584274);
                                var_17 = (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4 - 3]) ? (165 | 90) : 165));
                                var_18 = 20985;
                                var_19 = (max(-2984584301, -2984584305));
                                var_20 = (~1310382979);
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                var_21 = (min(var_21, 828023173));
                                var_22 = (min(var_22, ((((1310382995 & (((11938020506604574320 ? 1 : 828023173))))) << (98 - 98)))));
                            }
                            for (int i_6 = 4; i_6 < 9;i_6 += 1)
                            {
                                arr_20 [i_0] [2] [i_2] [i_3] [i_0] = (~18);
                                var_23 = (((!var_7) ? ((-1310382987 ? (min(11938020506604574325, -124875460)) : (~6508723567104977294))) : 4));
                                var_24 = (arr_9 [i_0]);
                            }
                            var_25 = (min(var_25, (((~(max(1349793305, (828023144 + 3466944152))))))));
                        }
                    }
                }
                var_26 = (((19888 ? ((max(-62, 66))) : (!1310382996))));
            }
        }
    }
    var_27 = ((((((-1116625473 != ((4294967295 ? 47191 : 26)))))) % 4294967295));
    #pragma endscop
}
