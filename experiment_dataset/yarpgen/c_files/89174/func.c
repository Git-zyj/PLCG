/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89174
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) (signed char)73);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [8] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) arr_9 [i_2 - 1] [5] [i_2 + 2] [i_2 - 1] [i_4 - 2])) : (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_4 - 2]))));
                                var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7533952648129098072ULL)) ? (-568754022) : (0)));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_17 [8ULL] [i_1] [i_1] = ((/* implicit */int) (+(var_8)));
                            /* LoopSeq 1 */
                            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5])) ? (arr_1 [i_1]) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_6] [i_7]))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5]))) : (arr_8 [i_6] [i_6]))))))));
                                arr_20 [i_0] [(unsigned char)18] [(unsigned char)18] [i_6] [1LL] = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) -1775568067)) ? (((/* implicit */int) (unsigned char)32)) : (2147483647))), (((((/* implicit */_Bool) 1791853901U)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) arr_9 [i_0] [i_0] [(short)2] [(unsigned char)2] [i_0])))))));
                                arr_21 [(short)8] [(signed char)19] [(signed char)19] [(unsigned char)1] [i_7] [(signed char)19] [i_7] = var_9;
                                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (var_3)))))));
                            }
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_19 [i_6 + 2] [i_6] [i_6] [i_6] [i_6] [i_6 - 2]) * (arr_19 [i_6 - 1] [(short)10] [i_6] [i_6] [i_6] [i_6 + 1]))));
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                            {
                                arr_26 [i_8] [i_0] [i_5] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)174)), (-672671479)))) ^ (max((((/* implicit */long long int) arr_1 [i_5])), (var_2))))) != (((((/* implicit */_Bool) 7533952648129098072ULL)) ? (arr_25 [i_6 + 1] [i_6] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))))));
                                arr_27 [2U] = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((min((arr_14 [i_0] [i_5] [i_8]), (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (signed char)119))))), (((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20101))) : (0U))))));
                            }
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */signed char) ((((long long int) max((-1775568067), (360551280)))) - (((/* implicit */long long int) ((/* implicit */int) min((((signed char) (unsigned char)255)), (arr_2 [i_0])))))));
                arr_29 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-3827404503541089201LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_8 [i_1] [i_0])))) : ((-(var_6)))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */int) var_8);
    var_18 += ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20102))) : (var_12))))), (var_3)));
}
