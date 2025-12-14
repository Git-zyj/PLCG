/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68787
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
    var_19 = ((/* implicit */int) min(((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 1835553332U)) : (var_5))))), (((/* implicit */unsigned long long int) var_2))));
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [6ULL] [i_0 - 2])) ? (((/* implicit */long long int) 3744989591U)) : (arr_10 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 2])))) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (arr_8 [i_0 - 2]) : (((((/* implicit */_Bool) 549977716U)) ? (arr_8 [5]) : (((/* implicit */unsigned long long int) 3744989571U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
                                arr_13 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (((/* implicit */unsigned char) arr_4 [i_0 - 2] [i_0 + 2] [i_4 - 3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(signed char)9] [i_0 + 2] [i_4 - 3])) + (((/* implicit */int) arr_1 [i_0]))))) : (max((549977716U), (((/* implicit */unsigned int) -2147483639))))));
                                arr_14 [i_4 + 2] [i_4] [i_4] [i_4] [i_1] [i_0 + 1] = (!(((/* implicit */_Bool) (signed char)58)));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (-(((((-3217394500748252295LL) + (9223372036854775807LL))) << (((arr_11 [i_1] [i_0 + 1] [i_0] [i_0 + 1] [(unsigned char)12]) - (3446854884U)))))));
                arr_15 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) : (arr_8 [i_1])))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (549977716U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-45))))));
                arr_16 [i_0] |= ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_17))))), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (signed char i_7 = 3; i_7 < 14; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)4))))) ? (arr_23 [i_8] [i_7 + 2] [1ULL] [i_8 - 1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3744989579U)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_5 + 1])))))));
                                arr_30 [7] [i_6] [i_7 - 1] [i_8 + 1] [(_Bool)1] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_23 [i_5 + 1] [i_6] [i_7 + 1] [i_8 - 1]), (((/* implicit */unsigned long long int) arr_19 [i_5 + 1] [i_5 + 1] [i_7 - 1]))))) ? (((((/* implicit */_Bool) arr_23 [i_5 + 1] [i_7] [i_7 - 1] [i_8 - 2])) ? (((/* implicit */unsigned long long int) arr_19 [i_5 + 1] [(signed char)11] [i_7 - 3])) : (arr_23 [i_5 + 1] [(unsigned char)4] [i_7 + 2] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5 + 1] [i_6] [i_7 - 2] [i_8 + 1])) ? (arr_19 [i_5 + 1] [i_6] [i_7 + 2]) : (arr_19 [i_5 + 1] [i_6] [i_7 - 2]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)94)) << (((3744989580U) - (3744989566U)))));
                }
            } 
        } 
    } 
}
