/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5549
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [7LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))), (max((((/* implicit */unsigned long long int) var_12)), (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)11481)), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [11] [(unsigned short)3] = ((/* implicit */short) arr_5 [i_1]);
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_27 [i_2] [i_3] [i_6] [i_5] [i_6] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_6])) || (((/* implicit */_Bool) arr_11 [i_2])))) || (((/* implicit */_Bool) min(((unsigned short)11481), ((unsigned short)54065))))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = max((((arr_25 [i_6] [i_5] [i_4] [i_4] [i_3] [i_2] [i_2]) / (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(_Bool)1]))), ((+(arr_25 [i_2] [i_3] [i_3] [i_4] [i_4] [i_5] [i_6]))));
                            }
                        } 
                    } 
                    arr_29 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
        arr_30 [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_2]))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_34 [i_7] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) arr_17 [(short)10] [i_2] [i_7]))))), (((((((/* implicit */int) (unsigned short)54053)) > (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */unsigned short) var_13)))))))));
            arr_35 [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) || (var_8)))), (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) arr_23 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
            arr_36 [i_2] = ((/* implicit */signed char) ((arr_22 [8ULL] [i_7] [i_2] [8ULL]) > (((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_7] [i_7] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) arr_11 [i_2]))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    {
                        arr_42 [i_7] [i_8] [i_8] [0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) arr_7 [i_2]))));
                        arr_43 [i_2] [i_7] [i_8] [i_2] = (-((-(13750203496724776813ULL))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            arr_47 [i_2] = ((/* implicit */long long int) var_7);
            arr_48 [i_2] [i_2] = ((/* implicit */int) var_2);
        }
        arr_49 [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((var_4) || ((_Bool)1))));
        arr_50 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) arr_26 [i_2] [i_2] [(unsigned short)3] [i_2] [i_2])), (min((((/* implicit */int) arr_15 [i_2] [i_2])), (min((1476265630), (((/* implicit */int) (unsigned short)54054))))))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_54 [i_11 + 1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) <= (1929176585U)))) != (((/* implicit */int) var_13))));
        arr_55 [i_11 + 1] = ((/* implicit */unsigned short) ((int) arr_52 [i_11 + 1]));
    }
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) var_2))), (((long long int) ((unsigned long long int) (_Bool)1)))));
    var_19 = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned short) var_8))));
    var_20 &= ((/* implicit */_Bool) (+(min((max((8293225809127362756LL), (((/* implicit */long long int) var_10)))), (8246337208320LL)))));
}
