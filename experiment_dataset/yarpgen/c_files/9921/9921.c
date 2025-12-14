/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_17 += ((var_7 % (arr_7 [i_0] [15] [i_1 - 1] [i_1])));
                    var_18 = 19034;
                    var_19 = (min(var_19, (13404 <= 1424804792)));
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_20 += -1723901757760152432;
                    var_21 += (((((var_4 + var_4) ? (var_8 | 524287) : ((max(var_1, var_15)))))) ? (0 - -5329685791470959911) : (((var_6 ? ((var_15 ? var_2 : 78)) : var_12))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] = (((var_3 || var_3) % (min(6999308921041022517, 46501))));
                    var_22 = (max(var_10, ((-(max(var_11, var_4))))));
                    var_23 = (max(var_23, ((((((~(8067988385954441941 != 7)))) + (((max(var_4, var_8)) / (((var_1 ? var_13 : (arr_14 [i_0])))))))))));
                }
                var_24 = (max(var_24, var_11));
                var_25 = (max(var_25, var_1));
                arr_16 [i_0] [i_0] = (((min((-9223372036854775807 - 1), var_5))) ? (var_14 + 52150) : ((var_15 ? (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) : var_6)));
            }
        }
    }
    var_26 = ((((var_11 ? ((var_3 >> (var_16 - 18234648957491876592))) : var_8)) >> (((max(-2147483647, 0)) - 18446744071562067959))));
    #pragma endscop
}
