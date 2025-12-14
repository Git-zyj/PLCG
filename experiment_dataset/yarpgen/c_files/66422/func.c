/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66422
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) 4215821886U);
        var_21 += ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) != (arr_1 [i_0])))))));
    }
    var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned char) var_17))) ? (1861229271524520837LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6)))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */int) (+(((min((6541416918542081330ULL), (((/* implicit */unsigned long long int) var_10)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1922540091471334142ULL)) ? (((/* implicit */int) arr_4 [8] [i_2])) : (arr_3 [i_1]))))))));
                arr_7 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_24 &= ((/* implicit */signed char) (+(((6975534086488945050LL) >> ((((+(var_1))) + (667947727)))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_25 ^= arr_13 [i_1 - 4] [i_1] [i_1] [i_1];
                                var_26 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_6 [i_1 - 2] [i_1 + 2])))), (((((/* implicit */int) ((((/* implicit */_Bool) 7952490559129048770LL)) && (((/* implicit */_Bool) 1372661261U))))) + (arr_3 [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_20 [(unsigned char)10] [(unsigned char)10] [i_3] [i_6] [(unsigned char)10] [i_7 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_7 + 1])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_7 - 2])) : (((/* implicit */int) (unsigned char)168))))));
                                var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_11 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_1 + 3])) : (var_15))), ((+((+(arr_3 [i_1])))))));
                                arr_21 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_10 [i_3])))) ? (((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 3] [i_7 - 1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) 279632713)) : (arr_10 [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_19 [i_1] [i_2] [i_7] [i_6] [i_6])), (1861229271524520838LL))) < (((/* implicit */long long int) (-(var_15))))))))));
                                var_28 = ((/* implicit */long long int) ((unsigned int) ((arr_1 [i_2]) % (arr_1 [i_1 - 1]))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) var_18))));
                    /* LoopSeq 2 */
                    for (int i_8 = 4; i_8 < 13; i_8 += 3) 
                    {
                        arr_24 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (-(-1857061891)))) ? (-1857061915) : ((-(var_2))))) : ((+(((int) var_9))))));
                        var_30 = ((/* implicit */unsigned char) 1861229271524520837LL);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)18))))) ? (((((/* implicit */_Bool) var_19)) ? (var_17) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_1])))) : ((-(var_15)))))) ? ((+(((/* implicit */int) arr_4 [i_2] [i_3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1861229271524520833LL)) ? (((/* implicit */long long int) 957039714U)) : (var_10)))) ? (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 - 3] [i_1] [i_1 - 3] [i_1 + 3])))));
                        var_32 += ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 7218215233246295786LL)) && (((/* implicit */_Bool) -1857061891)))) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (3920319242U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((var_8), (((/* implicit */short) arr_12 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_9]))))))))));
                        var_33 ^= ((((/* implicit */_Bool) (unsigned char)248)) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (788738052));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 2) 
                        {
                            arr_29 [8LL] [i_2] [i_3] [i_9] [11LL] = ((/* implicit */int) ((((/* implicit */_Bool) (-(5390607438010212610LL)))) ? (7952490559129048770LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (473633552U))))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), ((-(var_14)))));
                            var_35 = -279632713;
                        }
                    }
                }
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_15 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 3])), (((((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_11] [i_11])) ? (((/* implicit */int) arr_31 [3ULL] [3ULL] [i_11])) : (346287878)))))));
                    var_37 = ((/* implicit */long long int) var_14);
                }
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_38 ^= ((/* implicit */int) (-((+(-7952490559129048748LL)))));
                        var_39 = ((/* implicit */_Bool) (-((-(10ULL)))));
                        var_40 = min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (arr_37 [i_1] [i_1] [i_1] [i_13]))) != (((/* implicit */long long int) ((/* implicit */int) var_12)))))), ((+(max((((/* implicit */int) (unsigned char)34)), (346287878))))));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) (+((-(-1861229271524520838LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            var_42 = arr_23 [i_2] [i_12] [i_14] [i_15];
                            arr_43 [i_1 - 1] [i_2] [i_12] [i_14] [i_15] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_3)))) || (((/* implicit */_Bool) (unsigned char)228))));
                        }
                    }
                    for (unsigned short i_16 = 3; i_16 < 14; i_16 += 2) 
                    {
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) 279632713)) ? (((((/* implicit */_Bool) 1350543983)) ? (-3088354986702680980LL) : (((/* implicit */long long int) 1735024863U)))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)238)), ((unsigned short)52727)))) >> (((arr_14 [i_16 - 2]) - (2663197769U))))))));
                        arr_47 [i_1] [i_12] [i_1] [i_16] = ((/* implicit */unsigned long long int) ((arr_31 [i_1] [i_12] [i_16]) ? (473633552U) : (((/* implicit */unsigned int) (-(1029791717))))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        for (int i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            {
                                var_44 += ((/* implicit */short) (unsigned char)255);
                                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                }
                var_46 = ((/* implicit */short) max((arr_10 [i_2]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_31 [i_1 - 4] [i_1] [i_1])) : (var_2))))));
            }
        } 
    } 
}
