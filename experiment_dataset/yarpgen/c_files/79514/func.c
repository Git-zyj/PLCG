/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79514
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
    var_13 = ((/* implicit */short) min(((-(var_6))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_0]))));
                                arr_16 [i_2] [8ULL] = ((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 2]);
                            }
                        } 
                    } 
                } 
                var_15 = arr_5 [i_0] [i_0] [i_1];
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) >= ((+((~(var_0)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_10))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_23 [i_5] [i_9] [i_7] [i_7 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((+(((arr_27 [i_5] [i_6] [i_7 + 3] [i_8] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_6 + 1] [i_5] [i_9])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_5] [i_6]))))) : (arr_22 [i_5] [i_6] [i_7]))))))));
                    arr_29 [i_5] [i_7 - 2] [i_7] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) (signed char)-71)) ? (arr_26 [i_5] [i_6 + 2] [i_6 + 2] [i_5] [i_5] [16LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7])) ? (2557025137U) : (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                }
            } 
        } 
    } 
}
