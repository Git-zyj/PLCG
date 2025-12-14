/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94795
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
    var_12 |= (((-((~(((/* implicit */int) var_0)))))) == (((/* implicit */int) var_11)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1]);
                                var_14 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [(signed char)17]), (((/* implicit */short) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (18446744073709551610ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_4])) && (((/* implicit */_Bool) 17179869183LL))))))), (((/* implicit */int) arr_1 [i_0]))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -17179869183LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (arr_5 [i_0 + 2] [i_4 + 2] [i_4 - 3])))) ? (((((/* implicit */_Bool) max((arr_0 [i_3]), (((/* implicit */signed char) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((long long int) arr_3 [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_0] [i_4 - 3] [i_0 + 2])), (arr_6 [i_0 + 2] [i_1] [i_2] [i_3])))))));
                                var_16 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 17179869183LL)) ? (17179869193LL) : (-17179869155LL))) + (((-17179869212LL) + (((/* implicit */long long int) arr_4 [i_0 + 2]))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) / (17179869183LL))), (((/* implicit */long long int) ((arr_4 [5LL]) <= (var_8)))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])) / (17179869190LL))) : (9223372036854775807LL))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -17179869214LL)) ? (3302324204U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((min((arr_5 [i_0 - 1] [i_1] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))) << (((/* implicit */int) ((17179869214LL) > (((/* implicit */long long int) 992643092U))))))) : (((unsigned int) ((((/* implicit */_Bool) -17179869184LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [(short)2] [(short)2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) (unsigned char)255);
                    arr_21 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) (~(17179869188LL)));
                }
            } 
        } 
    } 
}
