/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((max(var_7, var_10)) * 1143238020));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 3] &= ((var_1 > (((17726 - var_9) ? (((var_5 - (arr_4 [2] [i_0] [2])))) : (((arr_2 [8]) ? (arr_2 [i_0 - 3]) : -7471886533167758534))))));
                arr_6 [i_1] [i_0] [i_0] = (((arr_3 [i_1] [i_0]) * ((((arr_0 [i_1 - 1]) ? ((((!(arr_4 [i_0 - 2] [i_0 - 2] [2]))))) : 4185007634)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_3] [i_3] = -1527997928;

                            for (int i_4 = 2; i_4 < 8;i_4 += 1)
                            {
                                var_12 = (i_3 % 2 == 0) ? ((max((((-815672259 - -4941453840898134514) / ((((arr_14 [i_3] [i_1] [i_1] [3] [i_4 - 1]) + -122))))), ((((~(arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))) << (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3]) - 29))))))) : ((max((((-815672259 - -4941453840898134514) / ((((arr_14 [i_3] [i_1] [i_1] [3] [i_4 - 1]) + -122))))), ((((~(arr_9 [i_0] [i_0] [i_0] [i_0 + 2]))) << (((((((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3]) - 29)) + 191)) - 58)))))));
                                var_13 = ((~(((arr_12 [i_3] [i_1 - 1] [i_1] [i_0] [i_3]) ? (arr_12 [i_3] [i_1 - 1] [4] [i_0] [i_3]) : (arr_12 [i_3] [i_1 - 1] [1] [i_0] [i_3])))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_14 = var_6;
                                var_15 += (((arr_8 [i_2] [i_3] [i_2] [i_1]) ? (((~(min(var_5, 0))))) : ((~(~5)))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                arr_20 [i_3] [i_3] [i_2] [i_1] [i_3] = arr_9 [i_0] [3] [i_2] [i_2];
                                var_16 ^= ((-(((!(arr_13 [i_6] [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_6]))))));
                            }
                            arr_21 [i_0] [i_3] [i_2] [i_3] [i_3] = max((((var_0 ? (arr_14 [i_3] [i_1] [i_2] [i_2] [i_2]) : (((!(arr_14 [i_3] [i_3] [i_2] [i_3] [i_3 + 1]))))))), (((((((arr_1 [i_2]) ? (arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 1]) : var_8)) + 9223372036854775807)) >> (((arr_10 [i_0 - 2] [i_1 - 1] [i_2] [i_3 + 1] [i_1 - 1]) + 2195254554444309695)))));
                            arr_22 [i_0] [i_1] [i_3] [i_2] [2] = ((-(arr_12 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_3 + 2] [i_3])));
                        }
                    }
                }
                var_17 ^= min((((var_5 % var_8) ? ((max(var_8, var_9))) : (arr_4 [i_0 + 2] [i_1 - 1] [6]))), (50 - 14125));
                var_18 = -815672278;
            }
        }
    }
    var_19 += ((!(((min(var_0, var_7)) != var_4))));
    var_20 = (((--2973921313) == ((((!(var_1 > 3617646531)))))));
    #pragma endscop
}
