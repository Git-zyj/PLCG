/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((var_10 * (0 && var_8)))))));
    var_20 = var_5;
    var_21 = ((((var_15 || -2429529963067807885) || (var_17 && var_4))) && (2498856193113255980 || -107));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_22 = (((((arr_6 [i_1 - 2] [i_1 - 2] [i_0] [i_2]) && 11018883768811232530)) || (-2429529963067807885 >= 0)));
                    var_23 = (var_0 / var_8);
                }
                arr_7 [i_1] = (5519292559204878531 >= 4455637575733363459);
            }
        }
    }
    #pragma endscop
}
