/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = min((min(667890576, var_9)), (min(var_10, var_8)));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_19 = (max(var_19, -667890576));
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = -1;
                        }
                        var_20 = (min(var_20, 667890596));
                        var_21 = 667890580;
                        var_22 = 1023;
                    }
                    var_23 *= 8;
                }
                var_24 = (max((max(var_6, var_3)), (min(((min(var_15, var_3))), (max(var_5, (arr_3 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_25 = -667890576;
                        arr_23 [i_5] [i_6] [i_8 + 1] = 418384310;
                        arr_24 [i_5] [i_5] [i_6] = 1153834600;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_26 = (max(var_26, ((max((min(-1498543527, (arr_25 [i_5] [i_7] [i_7] [0]))), (min(-667890581, (arr_25 [i_5] [i_5] [i_7] [0]))))))));
                        var_27 = (min((min(var_11, (arr_0 [i_5] [i_6]))), ((max((arr_0 [i_5] [i_7]), (arr_0 [i_5] [i_6]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_32 [i_6] [i_6] [i_5] [i_10] = (min((min(-8718036438917272815, var_18)), ((min((arr_21 [i_5] [i_6] [i_7] [i_10] [i_5] [i_11]), var_7)))));
                                var_28 = (min((min(-964243181, 1929899232)), (min((arr_26 [i_5] [i_6]), (arr_25 [i_5] [i_6] [i_10] [i_6])))));
                                var_29 = (max(var_29, (max((min(var_8, (arr_18 [i_6] [i_7]))), (min(-9, 667890565))))));
                            }
                        }
                    }
                    arr_33 [i_6] [i_6] [i_6] [i_5] = min(((max(-688624048, var_3))), (min(var_4, (arr_9 [i_7] [i_6] [i_7]))));
                }
            }
        }
    }
    #pragma endscop
}
