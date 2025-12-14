/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = -var_4;
                            var_20 = (((((-((((arr_1 [i_1] [i_2]) == (arr_2 [i_1]))))))) ? (max(17337584680282246173, 2660126055955520093)) : ((2 ? -892408660503034482 : 10775225797810254007))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_11 [i_4] [i_4] = ((7671518275899297608 ? (((((10775225797810254009 ? 10775225797810253995 : 10775225797810253987))))) : (-1374964328 & 475789702649250788)));
                    var_21 = ((var_4 ? -7671518275899297621 : (arr_9 [i_0])));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_19 [i_6] |= (((((max(-121, var_15)))) ? (arr_13 [i_0]) : ((((((-127 - 1) ? 10775225797810253987 : 4294967295))) ? (-127 - 1) : var_11))));
                                var_22 = var_16;
                                var_23 -= (~var_8);
                            }
                        }
                    }
                    arr_20 [i_5] [i_1] = var_8;
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_24 [i_8] [i_1 - 1] [13] [i_0] |= ((2887809293 ? -1374964318 : 1501915484));
                    var_24 *= ((((1244343132444905014 ? 10775225797810253994 : 1))));
                    arr_25 [i_0] [i_8] [i_1] [i_0] = max((arr_22 [i_1] [i_8]), var_3);
                }
                var_25 += (var_10 ? (arr_15 [i_1] [1] [i_0] [i_0]) : (17094650016251918480 + var_5));
            }
        }
    }
    var_26 = var_4;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            {
                arr_31 [i_9] = (7671518275899297621 ? -7671518275899297608 : ((max((min(var_5, var_2)), (min(-124, 0))))));
                var_27 = (max(15060640825577510722, 992));
                var_28 = (arr_27 [i_9]);
                var_29 = 10775225797810254007;
            }
        }
    }
    #pragma endscop
}
