/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58631
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */signed char) ((((arr_3 [i_1 + 4] [i_1]) + (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1976043742U))))));
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]))) ? ((~(((/* implicit */int) var_9)))) : (max((((/* implicit */int) var_5)), (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */unsigned int) arr_4 [i_1 + 2])) : (1976043729U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1976043742U))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 6; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 + 3])) ? (1976043738U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2 + 4])))))) : ((~(arr_5 [i_2] [i_2 + 1] [i_2 + 1])))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_2 + 2]), (arr_5 [(_Bool)1] [i_2] [i_2 + 4])))) && (((/* implicit */_Bool) max((arr_5 [i_0] [i_2] [i_2 + 2]), (((/* implicit */long long int) var_7)))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            arr_11 [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((arr_4 [i_3 + 2]) != (((/* implicit */int) arr_1 [i_3] [i_3 - 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                arr_14 [i_3] [i_0] = ((/* implicit */int) var_0);
                var_13 = ((/* implicit */unsigned long long int) 1976043732U);
            }
            var_14 = arr_4 [i_0];
            var_15 -= ((/* implicit */unsigned short) arr_7 [i_0] [i_3] [i_3 - 1]);
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned int i_6 = 3; i_6 < 6; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            arr_22 [(unsigned char)2] [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1976043738U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 1] [i_6 - 2] [i_5] [i_6]))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_5])) ? (arr_3 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            arr_23 [(unsigned short)3] [i_3] [(unsigned short)3] [(unsigned short)3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_6 - 3] [i_6 - 1] [i_6 - 3] [i_6 - 3]))));
                            arr_24 [i_3] [i_3] [(unsigned short)7] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) ((var_9) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        var_16 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [8U]) : (arr_15 [i_0] [i_0] [i_0]))));
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (max((max((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2318923566U))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((788122099U) != (1976043733U)))), (min((arr_25 [i_8] [i_8]), (arr_25 [i_8] [2LL]))))))))));
        arr_27 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13399)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (0U)));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)57)))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                {
                    arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) arr_32 [i_8] [i_8] [i_8])), (arr_30 [i_8]))), (((/* implicit */unsigned long long int) (+(arr_28 [i_8] [i_8] [(signed char)14])))))), (((unsigned long long int) arr_25 [i_8] [i_9]))));
                    arr_34 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1976043742U)))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) << (((var_1) ^ (var_1)))));
    var_20 = ((/* implicit */unsigned int) var_6);
}
