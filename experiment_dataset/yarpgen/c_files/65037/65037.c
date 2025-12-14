/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_4 || 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 ^= (max(((8782 ^ (min((arr_2 [2]), (arr_6 [i_0] [i_0] [i_0]))))), (((~(((arr_4 [i_0] [14] [i_0] [i_0]) ^ (arr_1 [0]))))))));
                    arr_7 [i_1] [i_0] = (min((!65513), ((((((arr_2 [i_0]) ? 3 : (arr_5 [i_0] [i_1] [i_2] [i_1])))) | ((15093676431671586719 ? 4002120686794069465 : -4742921617435223415))))));
                    var_14 = ((((max((arr_1 [i_0]), 11))) > 0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 += (min(((-4610093115099400009 ? 4742921617435223414 : 39395)), (+-4742921617435223404)));
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4 + 2] = (((((var_9 || ((var_9 && (arr_6 [i_2] [i_0] [i_0])))))) + -65525));
                                var_16 = (((arr_8 [i_4 - 1] [i_4 + 2]) / (arr_8 [i_4] [i_4 + 1])));
                                var_17 = (((min((min(-84, 10998092758953084294)), (var_4 * var_8))) * (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 *= var_5;
    #pragma endscop
}
