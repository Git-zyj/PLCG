/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((((-127 - 1) + 2147483647)) >> (-96 + 101))) != (!0)))))));
    var_15 = (min(var_15, var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((var_1 > var_7) || (var_1 < var_8))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = var_11;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((((((var_13 || var_13) || (!195997196)))) ^ ((~(432812025 != 8182665643600958113)))));
                            var_16 = 8182665643600958127;
                            arr_19 [i_0] [i_0] = (((((max(var_0, var_5)))) * (var_5 / var_7)));
                            arr_20 [6] [i_1] [i_2] [i_1] [i_3] [i_4] = ((10264078430108593504 >> ((((26 != 10264078430108593507) != (var_5 || var_13))))));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_3] = ((((10264078430108593520 + -61) + -var_3)));
                        var_17 = (min(var_17, (((((var_6 >> (((var_12 & var_2) - 10479053404809352283)))) << (((((0 | var_11) & var_3)) - 25075)))))));
                        arr_22 [i_0] [i_1] [i_1] = ((((31 << (((max(var_12, 59)) - 44)))) * (-20464 ^ 1)));
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_18 *= (((((var_3 << (((min(var_3, var_11)) - 26463))))) ? (var_5 % var_10) : ((max((!var_12), (var_7 + var_11))))));
            arr_27 [i_0] [i_5] [i_0] = (max((~10264078430108593520), (8182665643600958095 + 6222270438239318431)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_34 [i_7] [i_7] [i_5] [i_7] = (~743837910);
                        var_19 ^= ((((((var_13 < var_3) ^ (var_6 == 1)))) < ((-15 * (6439 * 1895708798)))));
                    }
                }
            }
            var_20 += (1 - 8182665643600958112);
        }
        for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_21 = (min(var_21, var_0));
            arr_38 [i_8] = (min(var_11, (~196)));
        }
        arr_39 [i_0] &= var_13;
    }
    #pragma endscop
}
