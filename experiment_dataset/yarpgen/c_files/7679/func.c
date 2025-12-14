/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7679
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((17172077510334868566ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 2]), (var_12)))))));
        arr_3 [i_0] = (-(((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) var_9)), (var_2))) : (max((var_4), (var_8))))));
        arr_4 [(unsigned short)0] &= ((/* implicit */unsigned long long int) arr_0 [i_0 + 2]);
        arr_5 [i_0 + 2] [i_0] = ((/* implicit */int) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    }
    var_19 = var_18;
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            {
                arr_10 [i_1] = ((/* implicit */unsigned long long int) var_4);
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_2]))))), (min((arr_11 [i_1] [i_1]), (var_11)))))) ? (((/* implicit */int) arr_14 [i_1] [i_3] [15] [i_1])) : (((/* implicit */int) ((unsigned short) arr_9 [i_2 - 1] [i_2 + 1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_20 [i_4] [i_2] [i_3] [i_2] [i_1] &= ((/* implicit */unsigned long long int) arr_6 [i_2 - 1]);
                        arr_21 [i_1] [i_3] [i_1] = arr_12 [i_1] [5] [i_3];
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_26 [i_2] &= ((/* implicit */unsigned long long int) var_12);
                            arr_27 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)103))) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            arr_28 [i_3] [i_2 - 1] [i_3] [15ULL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 2]))));
                            arr_29 [i_1] [0ULL] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_2 + 1] [(short)9] [i_3] [i_4] [(signed char)6]))));
                            arr_30 [(unsigned short)5] [i_5] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (+(arr_19 [i_2 - 1] [i_2] [i_2] [i_3] [i_2 + 1])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_33 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_1] [i_2 - 1] [(unsigned short)6] [i_6])) : (((/* implicit */int) arr_12 [i_1] [12] [i_3]))));
                            arr_34 [i_6] [i_3] [i_4] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) var_5);
                            arr_35 [i_4] [i_2] [i_2 - 2] [i_4] [i_3] = ((/* implicit */signed char) ((int) (short)16384));
                            arr_36 [i_6] [i_6] [i_3] [i_6] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_1] [i_2] [i_3] [i_6] [0LL] [i_2] [i_3]))));
                            arr_37 [i_1] [i_3] [i_3] [i_4] [i_6] = ((var_11) / (((/* implicit */unsigned long long int) var_1)));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_40 [i_1] [i_3] [i_3] [(short)3] [i_7] = ((/* implicit */short) 9054498491399870938LL);
                            arr_41 [i_1] [(unsigned short)10] [(short)10] [i_1] [i_4] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_2])) ? (((/* implicit */int) arr_38 [13] [i_3] [i_3] [i_7])) : (arr_23 [i_3] [(short)16] [i_3] [i_4] [i_7] [(signed char)7])));
                            arr_42 [i_7] [i_1] [i_3] [14] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_19 [i_1] [i_2] [i_3] [i_4] [i_1]))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [7LL] [i_2 - 1] [i_2]))))) : (((long long int) arr_13 [i_2] [i_2 + 1] [i_2]))));
                            arr_43 [i_1] [i_3] [i_3] [i_4] = (-(arr_39 [i_3] [i_4] [i_3] [(unsigned short)5] [i_2] [i_1] [i_3]));
                        }
                        arr_44 [i_1] [16LL] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_4] [i_3] [i_2 - 1] [i_3] [i_2 - 2]))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            arr_48 [15LL] [i_3] [i_3] [i_3] [i_4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_14)) : (var_13)))) ? (((((/* implicit */long long int) arr_47 [i_1] [10] [(short)9] [i_1] [i_1] [i_1] [i_1])) / (9054498491399870950LL))) : (arr_1 [i_1])));
                            arr_49 [i_3] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)13]))))));
                            arr_50 [i_3] [i_2] [(unsigned short)6] [i_3] [i_4] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_23 [i_2 + 1] [i_2] [14ULL] [11ULL] [i_4] [i_8 + 1]) : (arr_23 [i_2 + 1] [i_8] [i_8] [2LL] [i_8] [i_8 + 1])));
                            arr_51 [i_1] [i_1] [i_3] [2LL] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (signed char)-101))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_55 [i_1] [i_3] [i_3] [(short)15] [9ULL] [i_9] = ((/* implicit */long long int) arr_11 [i_1] [i_3]);
                            arr_56 [16ULL] [i_4] [(short)16] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) > (var_1))) || (((/* implicit */_Bool) var_9))));
                            arr_57 [i_1] [i_2] [16ULL] [i_4] [i_4] [i_3] = ((/* implicit */short) 4ULL);
                            arr_58 [0LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) arr_47 [i_1] [i_2 + 1] [i_1] [i_4] [i_9] [i_2] [i_2])) : (((unsigned long long int) var_8))));
                            arr_59 [i_3] [i_2] [5ULL] [(unsigned short)0] [i_3] [i_4] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_2 - 2] [i_2 + 1]))));
                        }
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            arr_64 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_2 - 1] [1LL] [i_2] [i_2] [i_2 - 1] [i_4] [i_4])) ? (var_13) : (((/* implicit */unsigned long long int) var_1))));
                            arr_65 [i_1] [i_2 - 2] [i_10] [i_4] [(unsigned short)4] = ((/* implicit */int) ((var_8) <= (((/* implicit */long long int) var_14))));
                            arr_66 [i_3] [i_4] [2LL] [i_2] [(short)1] [i_3] = ((/* implicit */unsigned short) ((short) 17172077510334868578ULL));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                    {
                        arr_70 [i_1] [i_3] [13LL] [i_3] [i_11] [i_11] = ((/* implicit */long long int) ((short) 1274666563374683075ULL));
                        arr_71 [i_2] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned short) ((-9054498491399870916LL) > (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_2 - 2])))))), (((unsigned short) arr_63 [i_2 + 1]))));
                    }
                }
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_13))))) ? (min((min((((/* implicit */long long int) var_1)), (var_8))), (((/* implicit */long long int) (~(((/* implicit */int) var_17))))))) : (min((((/* implicit */long long int) ((unsigned short) -1657718580447802344LL))), (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
}
