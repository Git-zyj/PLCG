/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 += -1381045206;
                    var_17 = min(15, ((((min(var_5, var_6))) ? (max(7282822374259325578, var_10)) : var_13)));
                    arr_6 [i_1] [i_1] [i_0] [i_0] = ((var_12 ? ((max(((var_5 ? var_5 : 1326585264)), ((var_14 ? var_15 : 686605733))))) : (max(140737488347136, ((1326585273 ? 686605733 : 17175674880))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_11 [i_4] [i_1] [i_0] [i_3] [i_4 - 1] [i_3] = ((((var_14 ? var_10 : var_8))) ? var_4 : 0);
                            var_18 = (((((149 ? -686605709 : var_10))) ? ((var_1 ? -1 : var_10)) : (((var_1 ? var_3 : 0)))));
                        }
                        var_19 = var_14;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_20 = ((((max(0, ((2960103159430671777 ? var_1 : -1326585273))))) ? (max(var_9, ((16128 ? var_11 : (-2147483647 - 1))))) : (max(var_3, (max(var_13, var_1))))));
                        var_21 = ((((max((min(-229863978, 255)), 8))) ? (max(var_6, (min(-3672022087043703310, -686605748)))) : (max(1519794798, 0))));
                        var_22 = var_2;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_16 [i_6] [i_6] [i_2] [i_0] = (max(((max((max(var_3, var_12)), ((min(var_5, var_4)))))), var_1));
                        var_23 = 2857981146005977525;
                        arr_17 [i_0] = var_10;
                        var_24 = ((((min(((var_4 ? 16888498602639360 : 1326585237)), var_8))) ? (((((9 ? 1326585264 : var_6))) ? (max(var_14, var_9)) : ((var_6 ? 1326585273 : 2857981146005977525)))) : ((((max(var_6, var_0))) ? ((1326585237 ? var_0 : 33554424)) : ((max(657299168, 2147483647)))))));

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_20 [i_6] [i_0] [i_2] [i_6] [i_0] = ((((max(((var_7 ? 33554424 : var_0)), ((4145116589182259890 ? var_6 : var_13))))) ? (((((-1303213427 ? var_10 : var_8))) ? (min(-613867963, 9223372036854775807)) : 150)) : (min(((var_14 ? 2147483647 : var_10)), ((var_12 ? 9 : var_0))))));
                            var_25 -= ((2147483647 ? -932471156 : 2147483647));
                            arr_21 [i_0] [i_6] = 63;
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = (min((max((max(var_6, var_0)), ((max(var_2, var_2))))), 613867958));
                            var_26 = 1326585300;
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_0] = (((((var_12 ? (max(var_14, var_14)) : (max(var_7, var_6))))) ? (max(var_11, 12)) : (((((max(146, -1))) ? -1326585293 : (max(1326585265, 63)))))));
                            var_27 = (56 ? 613867957 : (max(((max(9, 13))), -1326585257)));
                        }
                    }
                    arr_26 [i_0] = (((min(((170 ? 1326585276 : 229863977)), var_15))) ? (((((var_15 ? 229863977 : 858644824965539545))) ? var_0 : ((var_12 ? var_6 : 1032106086)))) : (max((max(1326585292, var_13)), ((max(var_15, 2147483647))))));
                }
            }
        }
    }
    var_28 = 12;
    var_29 = (((((var_11 ? (max(9, var_10)) : (((82 ? var_8 : var_3)))))) ? 5430562209408407471 : (((((min(25, 101))) ? var_3 : ((var_7 ? 0 : 1615783362)))))));
    var_30 = var_7;
    #pragma endscop
}
