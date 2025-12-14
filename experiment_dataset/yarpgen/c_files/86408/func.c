/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86408
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)4]);
        arr_5 [i_0] = (_Bool)1;
        arr_6 [i_0 + 2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_3 [i_0 + 1])))) ? (((unsigned long long int) var_9)) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))))));
                arr_12 [i_0 + 2] [i_1] [i_2 + 1] [i_1] = (~(((arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1]) & (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_17 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2017398523)) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                arr_18 [i_0] [i_1] = ((/* implicit */short) (+(var_4)));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_21 [i_0] [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((signed char) (signed char)-115));
                arr_22 [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0]);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((unsigned short) arr_23 [i_1]));
                            arr_28 [(unsigned char)8] [i_5] [i_1] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((arr_1 [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            arr_29 [i_0] [i_0] [i_4] [i_5] [4U] = ((/* implicit */unsigned short) (short)1410);
                            arr_30 [i_0] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-13806)) : (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
                            arr_31 [i_0] [i_1] [i_1] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) arr_23 [i_0]));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    arr_34 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(arr_20 [i_0] [i_1] [i_0])));
                    arr_35 [i_0 + 1] [i_1] [(unsigned short)5] [i_0] [8ULL] = ((/* implicit */unsigned int) arr_3 [i_4]);
                    arr_36 [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) arr_16 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                    arr_37 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) (~(18313453313579832982ULL)));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_40 [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 2] [i_1])) * (((/* implicit */int) ((((/* implicit */long long int) 1175047600U)) < (var_14))))));
                    arr_41 [i_0] = (~(((/* implicit */int) var_12)));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_44 [i_1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_1] [i_0 - 1] [i_1]))));
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_0] [i_0 + 2] [i_0]))));
                    arr_46 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))));
                    arr_47 [i_0] [i_1] [i_4] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3775491765U))));
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    arr_52 [i_0] [i_0] [i_1] [0ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 1] [i_0]))));
                    /* LoopSeq 3 */
                    for (int i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        arr_57 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -605397461)) ? (var_6) : (var_4)));
                        arr_58 [i_0 + 1] [i_1] [i_0] [i_10] [i_11] = ((/* implicit */unsigned char) var_6);
                    }
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 4) /* same iter space */
                    {
                        arr_61 [i_0 + 2] [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) (signed char)93)))))));
                        arr_62 [i_0] [i_0] [i_4] [(signed char)7] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_12] [i_10] [i_4] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2] [i_4] [i_4] [11LL])) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_4] [i_10] [i_12]))));
                    }
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                    {
                        arr_66 [i_0 - 1] [i_1] [i_4] [i_10] [i_1] [i_4] &= var_11;
                        arr_67 [i_0] [i_0] [i_10] [i_10] [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-1411)) ? (arr_39 [i_0] [i_0 + 1] [(_Bool)1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15435)))))));
                        arr_68 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 1] [i_0 + 1] [4U] [i_0 - 1])) : (((/* implicit */int) (unsigned char)4))));
                        arr_69 [i_0] [i_1] [i_4] [i_4] [i_10] [i_10] [i_0] = ((/* implicit */long long int) (!(arr_63 [i_1] [i_13] [i_1] [i_4] [i_1] [i_0 + 1] [(signed char)5])));
                    }
                }
                arr_70 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_63 [i_0] [i_0] [6LL] [(_Bool)1] [i_0 + 1] [i_0 + 2] [i_4]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [2ULL] [i_0 + 1] [i_0 - 1] [i_4])))));
            }
            arr_71 [i_0] = ((/* implicit */unsigned long long int) min(((-(((unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (_Bool)1))));
        }
    }
    var_15 = var_12;
}
