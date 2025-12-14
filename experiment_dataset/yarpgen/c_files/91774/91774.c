/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_2] [i_1] [i_0] = arr_0 [i_0] [0];
                    var_19 = (((max((arr_3 [i_1]), (-2147483647 - 1))) <= var_13));
                    var_20 &= (min((arr_1 [i_0]), (!2147483635)));
                    var_21 ^= ((+(((((((arr_5 [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_0])))) && (((var_8 / (arr_1 [i_0])))))))));
                    arr_9 [i_0] [i_0] [i_1] = (-2147483647 - 1);
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] = (((min((arr_4 [i_1] [i_3 - 1]), ((5800665611781180813 ? var_16 : 95))))) ? (max(266287972352, (arr_7 [i_1] [i_1]))) : -5800665611781180814);
                    arr_13 [i_0] [i_0] [i_1] [i_0] &= 5800665611781180793;
                }
                var_22 = 6045676742762278560;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 ^= ((365432523 ? -4039695 : -12));
                                arr_22 [i_1] [12] [13] [2] [2] [i_1] = (min(((var_9 ? (arr_20 [i_1] [i_6]) : (arr_3 [i_1]))), (arr_20 [i_0] [i_0])));
                                var_24 -= arr_1 [i_6];
                                arr_23 [i_0] [i_1] [i_4] [i_1] [i_5] [i_6] = (min((arr_5 [i_6]), (arr_0 [i_0] [i_4])));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_25 = (arr_25 [i_0]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = (min(var_26, 3870014344));
                                var_27 += ((1027698081 * (187 != var_1)));
                                arr_32 [i_1] [i_1] [i_1] [i_8 + 2] [i_0] |= var_0;
                                var_28 = (arr_6 [i_0] [i_1]);
                                var_29 &= (((97 ? var_18 : var_15)));
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    var_30 = ((!(((var_8 ? (arr_14 [i_0]) : 5800665611781180813)))));
                    arr_37 [i_0] [3] [i_1] [i_1] = (arr_0 [i_0] [i_0]);
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_31 = -137438953471;
                        var_32 = ((((min((arr_21 [i_0] [i_1] [i_11] [i_12] [i_0]), ((5356540930999016034 ? (arr_2 [i_12]) : 5800665611781180813))))) ? (((!var_16) ? (arr_24 [i_1] [i_11] [i_1] [i_1]) : -2515867490826036771)) : (var_2 && 95)));
                    }
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        arr_45 [13] [i_1] [i_1] [3] [i_11] = arr_38 [i_1] [i_1] [1];
                        var_33 = (min(var_33, (((1027698110 ? (min((((arr_20 [i_0] [11]) ? var_3 : (arr_19 [i_0] [i_1] [12] [i_0]))), (~5217321084932433028))) : var_8)))));
                        var_34 = (max((((!(arr_4 [i_1] [i_1])))), var_11));
                        var_35 = (max(0, 37));
                    }
                    var_36 = ((!(var_8 >= var_11)));
                }
                arr_46 [i_0] [i_1] [i_1] = (((!var_15) != ((((arr_27 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) && 2501932840)))));
            }
        }
    }
    var_37 &= ((((+((8 ? (-2147483647 - 1) : var_15)))) < ((((min(2843762703, -8779139570836459007))) ? -151 : (var_0 == var_12)))));
    var_38 = var_0;
    var_39 = (max((var_11 & 5800665611781180813), 375874194));
    #pragma endscop
}
