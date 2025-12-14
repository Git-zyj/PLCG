/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = (((((-3226019268971042630 ? var_11 : var_6))) < 5560372980471146802));
        var_16 = (min(((var_8 ? var_9 : 5560372980471146810)), ((-122 ? 12886371093238404814 : 2574474617))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [1] [6] = (max(((((min((arr_3 [12]), var_9)) / var_3))), ((((max(2574474611, var_7))) ? 18151563853787471661 : (((max(var_1, var_6))))))));
        var_17 = (max(3425829538, 27383));
        arr_6 [5] = (((((((arr_3 [20]) ? var_7 : var_5))) ? var_13 : (!var_8))));
        arr_7 [i_1] = 2129068975;
        arr_8 [i_1] [i_1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_18 -= ((var_9 ? ((((arr_3 [i_2]) != var_10))) : ((((arr_2 [i_2 - 1]) != (arr_3 [9]))))));
        var_19 = ((5560372980471146823 ? (((9223372036854775807 ? -115 : 27394))) : 12886371093238404805));

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_13 [13] = (3582395713 - -152948126);
            var_20 |= ((-(arr_0 [18])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] [i_2] = (arr_9 [i_4]);
            arr_18 [i_2] [i_2] = var_11;
        }
        var_21 = var_0;
        arr_19 [i_2] = ((((var_1 ? (arr_9 [5]) : -20)) & var_14));
    }
    var_22 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_23 = (min(var_23, ((min(var_9, (((-(max((arr_23 [i_5 - 1] [i_6]), (arr_4 [3])))))))))));
                var_24 = (max(var_24, var_13));
                var_25 = (arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                arr_25 [i_6] [8] = ((var_10 ? (((-7455371116318932406 / 3661196926) ? (((arr_16 [i_5 + 1] [i_5 + 1]) ? var_9 : (arr_15 [6] [6]))) : ((((arr_24 [7]) ? var_11 : (arr_14 [i_6] [i_5 - 1] [i_5])))))) : -26110));
            }
        }
    }
    #pragma endscop
}
