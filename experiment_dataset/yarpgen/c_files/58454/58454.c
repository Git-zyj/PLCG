/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (min(var_11, 211));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((arr_1 [i_0 + 1]) ? (((arr_1 [i_0]) ? 2941676706 : 1353290589)) : 288230376151711743))) ? ((((288230376151711753 == (1353290579 & 1))))) : ((var_5 ? 0 : (max(2689614980935990871, (arr_2 [8]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] = (min(((((min((arr_7 [i_1]), 65531))) ? (arr_1 [i_0]) : 4294967295)), -var_2));
                    arr_11 [i_1] [4] [i_2] = (((((var_4 ? (((arr_4 [i_1] [i_1]) | var_3)) : 2941676716))) > ((((max(var_3, var_7))) ? 0 : ((var_6 ? (arr_1 [i_0 - 2]) : 88792940))))));
                    arr_12 [i_1] [i_1] [i_2] [i_2] = min((var_9 * 2619123758), (((((var_2 ? (arr_4 [i_0] [i_1]) : -3380))) ? (arr_7 [i_1]) : (var_9 * 256))));
                    arr_13 [i_1] = ((91 ? (arr_8 [i_0] [i_1] [i_1]) : (((!((max(-1445075956225883680, (arr_5 [i_2])))))))));
                    arr_14 [i_1 + 1] [5] [i_1] = (((((~var_4) ? (var_3 & var_1) : -94810473825280889)) / 65509));
                }
            }
        }
        arr_15 [i_0] = (((((54651 ^ 32767) ? 65515 : ((var_1 ? 256 : (arr_5 [i_0])))))) ? ((((!(((3361 ? 244 : 4294967295))))))) : ((((((arr_2 [i_0]) ? 15391 : (arr_8 [i_0] [6] [i_0 + 1])))) ? 1254407090 : (arr_5 [i_0 - 1]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_12 = 65531;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_13 = var_9;
                                var_14 = 7325658355493318154;
                            }
                        }
                    }
                    var_15 = (8589934591 || -1);
                    arr_27 [i_0] [8] [i_4] = 54;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_35 [i_0 - 1] [i_0 - 1] [i_4] [i_7] [i_4] [i_8] = 203;
                                arr_36 [i_4] [i_4] [i_3] [i_3] [i_8] = ((((((((3636413159 ? var_6 : 2435526009188197926))) ? var_3 : (arr_16 [i_0 - 1])))) ? (arr_5 [i_7 - 1]) : (((((((-8704588249089164941 ? var_1 : var_5))) || ((max((arr_33 [i_0] [i_3] [i_4] [i_7 - 1] [i_8] [i_0 - 1] [i_4]), var_6)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((((var_4 ? 250 : var_7)))) ? ((((!(var_6 > var_2))))) : var_0));
    var_17 = ((2941676717 ? var_5 : 24));
    #pragma endscop
}
