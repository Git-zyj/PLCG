/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75366
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
    var_14 -= ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) (unsigned short)54683)))))), (((/* implicit */int) (signed char)-106))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] [i_1] [i_0] = ((unsigned long long int) (-(((/* implicit */int) (signed char)114))));
                                var_15 = ((/* implicit */int) max((var_15), (min((-5), (-13)))));
                                var_16 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (((unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_5] [i_1] [(_Bool)1] [i_5])) : (((/* implicit */int) (signed char)124))));
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5]))));
                        var_18 = ((/* implicit */unsigned short) var_10);
                        arr_21 [i_0] = (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5 - 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [5LL] [i_1] [i_5] [i_2] [i_2]))) : (arr_10 [i_0] [2LL] [i_2] [i_1] [i_1] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_2] [(short)3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (short)9181);
                        arr_25 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_19 [(short)0] [i_6] [i_1] [i_1] [i_0] [i_0]);
                        arr_26 [i_1] [i_0] [i_6] = var_2;
                        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_6] [i_1] [i_6] [(_Bool)1] [i_1] [i_1])) ^ (((((/* implicit */_Bool) (short)30470)) ? (((/* implicit */int) arr_19 [(short)7] [i_1] [i_2] [i_2] [6LL] [(unsigned short)4])) : (((/* implicit */int) arr_23 [i_6] [i_2] [i_1] [4ULL] [(_Bool)0]))))));
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_6] [6]));
                    }
                    for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_32 [i_8] [i_0] [i_7 + 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) arr_3 [i_0] [i_0])) & (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7 - 1] [i_7 + 3] [i_7 + 2] [i_7 + 1])))))) ? (0) : (((/* implicit */int) arr_6 [i_0] [i_1]))));
                            arr_33 [i_8] [i_7 - 1] [i_0] [i_0] [(unsigned char)4] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_1)), (0LL))), (min((((/* implicit */long long int) arr_28 [i_0] [i_1] [i_2] [i_7 + 2] [i_0])), (var_13)))))) ? (((/* implicit */int) ((6318710945266231831ULL) >= (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_1] [i_1] [i_8] [i_1] [i_8] [i_0])))))) : (((/* implicit */int) ((unsigned short) var_4)))));
                            arr_34 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_2);
                        }
                        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)55)), (26)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_27 [6] [i_7] [i_1] [i_1] [i_1] [i_0])) : (1134696802983776889ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14662854694288610617ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((signed char) (signed char)-91))))))));
                        arr_35 [i_0] [i_2] [(short)10] [i_0] = ((/* implicit */long long int) arr_18 [i_1] [i_1]);
                        arr_36 [i_0] [i_2] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_5))) ^ (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_0] [i_0] [i_2] [i_7 - 1] [i_0]) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_37 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) min((arr_10 [8U] [i_2] [i_2] [i_0] [i_2] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2]) : (((/* implicit */long long int) ((int) -5830803248305824047LL))))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_2] [i_9] [i_2] [i_1]);
                        var_22 = ((/* implicit */signed char) min((arr_2 [i_0]), (((/* implicit */short) (unsigned char)50))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        for (long long int i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (short)-30492);
                                var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)22002)), (-951987585)));
                                var_25 = ((/* implicit */long long int) ((short) ((min((var_3), (((/* implicit */long long int) arr_18 [(short)11] [i_0])))) % (((long long int) var_1)))));
                                var_26 = arr_13 [i_0] [i_1] [(signed char)0] [i_11] [i_11];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        var_27 = ((/* implicit */unsigned short) arr_48 [i_12]);
        var_28 = ((/* implicit */unsigned long long int) var_3);
        arr_50 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1842509114U)))) ? (((long long int) arr_49 [i_12])) : (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))));
    }
    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        arr_53 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)36582)))) | (((/* implicit */int) arr_52 [i_13])))) : (((/* implicit */int) min(((unsigned char)169), (min((arr_52 [i_13]), ((unsigned char)225))))))));
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((long long int) arr_51 [i_13]))) ? (max((var_2), (((/* implicit */int) arr_52 [i_13])))) : (((/* implicit */int) arr_51 [i_13]))))));
        arr_54 [i_13] = ((/* implicit */int) (short)30463);
    }
    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 3) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) & (((long long int) max((var_1), (((/* implicit */signed char) arr_56 [i_14] [i_14 + 3]))))))))));
        var_31 |= ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (short)30464)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [3LL]))))), (((/* implicit */long long int) min((var_5), (arr_55 [i_14 + 1])))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_14 + 3])))));
    }
    var_32 = max((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-30448)) : (var_2)))), (0ULL))));
}
