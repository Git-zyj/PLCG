/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min((!var_10), (min(var_14, 0)))), var_13));
    var_21 = (min(var_10, var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = ((((-(arr_1 [i_1]))) <= (arr_1 [i_1])));
                    var_23 = (((arr_8 [i_0]) - ((((var_17 != ((var_2 ? (arr_1 [i_0]) : var_11))))))));
                    arr_9 [i_0] = ((-(min(1152921504606846968, 1109638006))));
                }
            }
        }
        arr_10 [5] = -1111030372644382936;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_24 = ((~((var_1 ? (1111030372644382928 == 766056655) : var_16))));
        var_25 = (min((288221580058689536 && var_16), ((var_0 ? var_12 : var_3))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_15 [6] [6] [i_3] = ((((arr_4 [i_3]) ? ((max((arr_7 [1] [1]), var_2))) : (var_3 >= 0))));
            var_26 += (1111030372644382928 % 12444);
            arr_16 [9] [i_4] [i_3] = ((((((min(var_4, var_7))))) ? ((((!(!var_18))))) : ((-4278039353 ? -var_11 : 53091))));
        }
    }
    var_27 = ((((min((16 % var_18), var_7))) || ((min(var_6, (max(var_7, var_11)))))));
    var_28 = (max(1, 3072));
    #pragma endscop
}
