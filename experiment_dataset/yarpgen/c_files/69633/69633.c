/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((~((-(!var_10)))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((((((((var_2 ? var_10 : var_2))) ? (arr_1 [i_1 + 2] [i_1]) : -var_2))) ? (~-var_8) : ((+(((arr_1 [i_0] [4]) ? 1 : var_4))))));
            var_14 = (+-1);
            var_15 = ((((((arr_2 [i_0]) ? (arr_2 [i_1 - 1]) : 0))) ? ((-(arr_2 [i_1 - 1]))) : (arr_4 [i_1])));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] = (((((((((arr_7 [i_2]) ? 8 : (arr_6 [i_0] [i_0] [i_0])))) ? var_4 : var_6))) ? var_8 : ((106 ? var_4 : 150))));
            arr_9 [i_0] = ((-172 ? (((-(arr_4 [i_0])))) : ((1 ? 18030165603765275163 : 877888781))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_16 += ((~((~(arr_4 [i_3 + 2])))));
            arr_12 [i_0] [i_3 - 1] = (((((arr_1 [i_3 + 2] [i_3]) ? 254 : (arr_10 [i_3 - 1] [i_3 + 1])))) ? ((3551794925 ? (arr_1 [i_3 - 1] [i_3 - 1]) : (arr_1 [i_3 + 2] [i_3 + 1]))) : ((var_6 ? (arr_1 [i_3 + 1] [i_3 + 1]) : 1)));
            var_17 = (((((((var_9 ? var_6 : var_11))) ? 1 : ((var_7 ? var_4 : var_12))))) ? (((arr_7 [i_3 - 1]) ? ((var_1 ? var_11 : (arr_10 [i_0] [i_3 + 1]))) : (!var_4))) : (((~906361004) ? var_3 : var_6)));
            var_18 = ((7031760604378171433 ? 906361004 : 7031760604378171426));
            arr_13 [i_0] [i_0] = ((~(((arr_11 [i_0] [i_0] [i_0]) ? 4194303 : (((arr_11 [i_0] [i_0] [i_3]) ? (arr_10 [i_0] [i_3]) : 416578469944276453))))));
        }
    }
    var_19 = (((((var_3 ? var_4 : var_9))) ? var_0 : var_7));
    #pragma endscop
}
