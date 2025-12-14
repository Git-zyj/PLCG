/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59985
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
    var_16 = ((/* implicit */signed char) 13057118168972589349ULL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) << (4)))) ? ((-(((/* implicit */int) (unsigned short)2047)))) : ((~(((/* implicit */int) arr_0 [(_Bool)0]))))))), (((arr_3 [i_2 + 1] [i_0 + 1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(_Bool)1])))))))));
                                arr_12 [i_0] [i_0] [i_4] [i_0] [i_2] [i_3 - 2] [i_3 - 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-25114)) ? (((/* implicit */int) (short)480)) : (((/* implicit */int) var_5))))))), ((+((-(arr_6 [i_0])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */_Bool) (unsigned char)1);
                    arr_14 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0]));
                    var_17 -= ((/* implicit */signed char) arr_5 [i_0] [i_0 + 3] [i_0 + 3] [i_0]);
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 + 3] [i_2 + 1] [i_2] [i_2 - 1])) | (((/* implicit */int) arr_10 [i_0 + 2] [i_2 + 1] [i_2] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)486))) : (((((/* implicit */_Bool) -1)) ? (arr_3 [i_1] [i_2 + 1]) : (arr_3 [i_0] [i_2 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                arr_21 [i_6] = ((/* implicit */unsigned int) arr_17 [i_5] [i_6] [i_5]);
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-487)) : (((/* implicit */int) (signed char)119))))) ? (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (short)480))) : (arr_19 [i_5] [i_5] [i_6]))) : (min((arr_19 [(short)8] [i_6] [(signed char)1]), (arr_15 [i_6] [i_6]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) (short)-494)))))));
            }
        } 
    } 
}
