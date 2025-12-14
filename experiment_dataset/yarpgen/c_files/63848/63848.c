/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_9 ? -31565 : var_4)) & ((-((16128 ? 3008651607 : 1286315707))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (((1286315707 + 21533) ? ((~((-126 ? (arr_0 [i_0]) : 436858286)))) : ((((((16867011024957800692 ? 108 : 3008651573))) ? 558205491 : (min(1286315722, 558205493)))))));
        arr_2 [i_0] = ((-32766 ? 1286315698 : 34506));
        arr_3 [i_0] = ((1286315674 ? 3008651573 : 3008651573));
        arr_4 [i_0] = ((-(min((min(-27151, (arr_1 [i_0]))), (((2 && (arr_1 [4]))))))));
        arr_5 [i_0] = -1228730863;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] [i_2] = (((((189 * (arr_7 [i_1])))) ? (((arr_7 [i_3]) / 3008651617)) : (((65526 - (arr_7 [i_1]))))));
                    arr_16 [i_2] [i_3] = -1228730884;
                }
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [i_2] = 106;
                        var_20 = (max(var_20, (((((!(!0))) ? ((3008651597 ? (max((arr_21 [1] [6] [i_4] [i_5]), 18446744073709551613)) : 154178872)) : -102)))));
                    }
                    var_21 = (arr_6 [i_2]);
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_25 [i_1] [i_2] [3] = (((((18446744073709551615 ? (arr_9 [i_6]) : (arr_9 [i_1])))) || (((-(!0))))));
                    arr_26 [i_1] [i_2] [i_6] = (max(((10833253460841383036 * (arr_13 [i_1] [i_2] [i_6] [i_2]))), 1));
                    arr_27 [i_1] [i_2] = (65520 - 1);
                    arr_28 [i_2] [i_2] = ((-27151 ? ((((65535 - 1) | (((arr_11 [i_1] [7] [i_6]) ? 2378 : (arr_23 [i_1] [i_2] [i_2] [i_6])))))) : (((154178872 >= (-2147483647 - 1))))));
                }
            }
        }
    }
    var_22 = var_13;
    var_23 = ((~((max(var_16, var_2)))));
    #pragma endscop
}
