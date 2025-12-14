/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55928
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
    var_14 = ((var_3) && (((/* implicit */_Bool) var_0)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                                var_16 = ((/* implicit */short) min((var_16), (min(((short)-32758), ((short)-1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */int) arr_6 [(short)9] [i_1]);
                                var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(arr_13 [(unsigned short)7] [i_1] [(_Bool)1] [(signed char)5] [(_Bool)1] [i_6])))) ? (((/* implicit */int) arr_4 [i_5 - 2] [i_2 + 2] [i_0])) : ((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_6])))))), (((((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_5 - 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0])) ? (arr_13 [i_0] [i_1] [i_0] [i_2] [i_5] [(signed char)9]) : (((/* implicit */int) var_3)))) & (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_5 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
