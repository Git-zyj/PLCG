/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9641
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 6; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [4LL] [i_0] [i_3 + 4] [i_1] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (282093226U));
                        arr_10 [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_10))))));
                        arr_11 [i_0] [i_1] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 4] [i_1 + 3])) ? (-8264734364742915530LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) ((int) var_6));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_17 [i_5] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_8 [i_0] [i_4] [i_4] [5U] [i_4]) : (((/* implicit */unsigned long long int) 8264734364742915529LL))));
                    arr_18 [i_0] = ((/* implicit */signed char) arr_3 [i_5] [i_4]);
                    arr_19 [i_0] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */unsigned int) (-(8264734364742915529LL)));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned int) var_10);
        arr_21 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [2] [(signed char)6] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -901695753)) ? (-8264734364742915529LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_27 [i_6] [9U] = ((/* implicit */int) var_0);
        /* LoopNest 3 */
        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_37 [(_Bool)1] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (3698268634U) : (arr_28 [i_6] [i_6] [i_7 - 1])));
                            arr_38 [i_10] [i_9] [i_8] [9] [i_6] = ((/* implicit */long long int) ((signed char) var_2));
                            arr_39 [(_Bool)0] [(_Bool)0] [i_7 + 1] [i_8] [2U] [(unsigned short)1] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [i_7] [i_9] [i_6] [i_9] [i_11] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9] [i_11]))) : (243563151763112506ULL))));
                            arr_43 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6] [i_7 + 1] [i_7 - 1])) ? (arr_15 [i_9] [i_7 - 2] [i_8]) : (arr_15 [i_6] [i_7 - 2] [(signed char)6])));
                        }
                        for (short i_12 = 1; i_12 < 7; i_12 += 4) 
                        {
                            arr_46 [i_6] [i_7] [(_Bool)1] [(short)7] [i_7] = ((/* implicit */int) var_9);
                            arr_47 [i_7] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)0));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 8; i_13 += 4) 
                        {
                            arr_50 [0] [i_13 + 1] [i_13 + 1] [i_13] = (short)7932;
                            arr_51 [3LL] [i_8] [i_8] [i_8] [i_8] [i_8] [2] = ((((/* implicit */_Bool) 4194240)) ? (arr_36 [i_7] [i_7 - 2] [i_7] [i_7 - 2] [i_7]) : (((/* implicit */int) arr_7 [2LL] [0U] [i_8] [i_9] [i_9] [i_6])));
                            arr_52 [i_9] [i_8] [i_7] = ((/* implicit */unsigned int) ((((var_5) + (2147483647))) >> (((arr_23 [i_13 + 2] [i_7 - 1]) - (1613555860U)))));
                            arr_53 [i_8] [i_6] [i_8] [i_8] [i_13 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_7 - 2] [i_13 + 1])) : (arr_8 [i_7 - 1] [i_7 - 2] [(short)6] [i_7 - 1] [i_13 + 2])));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
    {
        arr_57 [i_14] = ((((/* implicit */_Bool) 3612498017U)) ? (((/* implicit */int) (unsigned short)64117)) : (((/* implicit */int) (short)-32755)));
        arr_58 [i_14] = ((/* implicit */int) var_10);
    }
    var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)1418)), (((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_4)) + (3884)))))));
    var_12 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)32755)), (-8264734364742915530LL)));
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */signed char) var_6);
}
