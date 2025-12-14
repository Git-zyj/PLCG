/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = arr_5 [i_1];
            var_19 = ((-5397 ? 180 : 826490146));
            arr_7 [i_1] [i_1] = (((arr_2 [i_0]) != (arr_2 [i_1])));
        }
        var_20 = (max(var_20, (arr_1 [i_0] [i_0])));
        arr_8 [i_0] = (976110940 - -274358022);
        var_21 = (((((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [17] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) ^ (arr_1 [16] [i_0])));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (min(((((max(var_12, var_2))) ? ((((var_3 < (arr_0 [i_0] [i_0]))))) : ((-5397 ? var_17 : (arr_10 [i_2]))))), (((~((-19675 ? 24655 : 24655)))))));
            var_23 &= ((((((var_4 ? 24576 : var_10))) & (arr_10 [i_2]))));
            var_24 = ((!((17473530256638323796 == (arr_0 [i_2] [i_0])))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_15 [i_3] [4] [i_0] &= ((2305772640469516288 | (arr_1 [i_0] [4])));
            arr_16 [i_0] = (max(16457951233502190278, ((((arr_3 [i_0] [i_3] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (~var_3))))));
            var_25 = (((((((-2147483647 - 1) != -1)))) * (((var_3 ? 16457951233502190278 : 162961548)))));
            var_26 = 1988792840207361337;
            var_27 = ((((((var_15 == (max(var_9, (arr_1 [i_3] [i_0]))))))) <= (min((arr_3 [i_3] [i_3] [i_0]), var_16))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_28 = (arr_20 [i_4]);
        arr_21 [i_4] [i_4] = -18;
    }
    var_29 = (max(var_29, (((((max(25, var_7))) != ((((var_6 ? var_4 : var_18)))))))));
    #pragma endscop
}
