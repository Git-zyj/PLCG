/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(((max(var_1, var_10))), (var_6 ^ var_15)))) || ((((var_8 ^ 7372255628530789274) ^ 5259895452774313356)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 2]) * (((arr_2 [i_0] [i_0] [i_0]) * (((arr_4 [i_1 - 1] [i_1] [1]) / (arr_1 [0])))))));
                var_19 = (arr_4 [i_0] [i_0 - 2] [8]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_20 = (arr_5 [i_3]);
                    var_21 = (+(((arr_9 [i_4] [i_2 - 1] [i_2 + 1]) - 1515420485299847024)));
                    var_22 = (min(var_22, (arr_9 [i_2 + 2] [i_2 + 2] [6])));
                }
                var_23 += (((~var_5) ^ (min((arr_11 [10]), (min((arr_11 [14]), var_11))))));
                arr_12 [7] [i_3] = ((!(((arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1]) && ((var_15 && (arr_11 [i_3])))))));
                var_24 ^= -var_8;

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_25 = ((-(((!(arr_5 [i_3]))))));
                    var_26 = (min((((-((43409 / (arr_6 [i_3])))))), ((-(max((arr_5 [i_2]), (arr_10 [i_3] [i_3] [i_3])))))));
                    var_27 *= (((arr_10 [14] [i_3] [14]) ? (((((((!(arr_5 [i_2])))) != (arr_5 [i_2 - 1]))))) : (((8139571504086101662 || var_13) ? ((((arr_5 [i_2]) / (arr_8 [i_2] [14] [i_5])))) : ((-(arr_10 [6] [i_3] [6])))))));
                    arr_15 [i_3] [i_3] = ((!((!(((arr_10 [i_2 + 1] [10] [i_3]) || (arr_8 [i_3] [i_3] [i_2])))))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_28 = ((-(max(3548118227, (((~(arr_9 [i_2 + 1] [i_2 + 2] [i_2]))))))));
                    arr_18 [i_3] [i_3] [i_2 + 2] [i_3] = (max((((arr_5 [5]) << (((arr_9 [i_6] [i_3] [i_2 + 1]) - 24973)))), (max((arr_8 [i_2] [i_3] [i_6]), (((var_6 && (arr_8 [i_2 - 1] [i_3] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
