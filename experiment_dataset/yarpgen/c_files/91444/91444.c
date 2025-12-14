/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = -var_16;
    var_19 = 2271214214498828090;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] &= ((((((2 == (-9223372036854775807 - 1))))) + (arr_3 [i_0] [1] [i_1])));
            arr_6 [0] [0] = (-6378626010876323283 & 7228938383568926607);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] = (arr_0 [i_0] [i_2]);
            arr_11 [i_2] = ((var_16 ? (-7228938383568926607 / 7228938383568926598) : (((arr_4 [i_0] [1] [12]) ? 7228938383568926607 : -2062255820760304770))));
            arr_12 [i_0] = (((var_0 >> (var_5 - 5271274352544432595))));
        }
        arr_13 [12] = ((((0 ? 0 : (max((arr_1 [i_0]), (arr_1 [i_0]))))) >> (((((arr_9 [i_0]) ? 3669520974972111394 : 1463635334709330590))))));
        arr_14 [i_0] = 0;
        arr_15 [i_0] = 0;
        arr_16 [i_0] = (((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))) > var_4));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_21 [i_3] = var_13;
        arr_22 [i_3] &= arr_9 [i_3];
        arr_23 [i_3] &= var_0;
        arr_24 [i_3] = -331637725479590930;
    }
    #pragma endscop
}
