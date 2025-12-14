/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99145
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_1)))))))));
                var_17 = ((/* implicit */unsigned short) (((-(1381066897U))) * (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) ((unsigned short) var_9))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 8; i_3 += 1) 
        {
            for (signed char i_4 = 4; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)117)) * (((/* implicit */int) (unsigned short)37779)))) * (((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)0))))))));
                    arr_17 [i_3 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) (!((_Bool)1))));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) (!((!(((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_4 + 2])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */int) var_9)) * (((int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15852))))))))));
                                arr_25 [i_2] [i_6] [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (signed char)-59)))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(314342308U)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_6] [i_5])) + (((/* implicit */int) arr_21 [i_2] [i_3] [i_4]))))) - ((+(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1388475278630676178LL)) ? (((/* implicit */int) var_10)) : (var_5)))) ? (4786846362245000972LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65512)) * (((/* implicit */int) arr_19 [i_2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
