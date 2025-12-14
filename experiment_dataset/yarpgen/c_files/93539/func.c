/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93539
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
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [10LL] [i_1] [i_2] [8U] [i_1] [2LL] = ((/* implicit */unsigned short) ((4419441774480623497ULL) % (4419441774480623497ULL)));
                                arr_16 [i_4] [i_3] [i_4] [i_1] [i_0] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                                var_18 ^= ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_22 [(_Bool)1] [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 - 1] [i_5] [i_1] [i_1] [i_1] [(short)2]))) / (arr_18 [i_0] [12U] [12U] [i_0] [i_1] [i_0]))), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_5])))));
                                var_19 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [1] [i_6 - 1] [i_1] [i_6]);
                                var_20 = ((/* implicit */unsigned char) ((((14027302299228928118ULL) != (((/* implicit */unsigned long long int) 3452643813U)))) ? (((/* implicit */int) arr_20 [i_1] [(signed char)9])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)24)) || (((/* implicit */_Bool) (short)-26359)))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 3100291713U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(short)8] [i_0]))) : (3100291692U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)127))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0]))))) : (((/* implicit */int) ((arr_10 [i_2] [i_5] [i_2] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))))))))))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_2] = (!(((/* implicit */_Bool) ((int) (+(var_13))))));
                }
            } 
        } 
    } 
}
