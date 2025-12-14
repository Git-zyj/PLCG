/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84275
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_4])) - (((/* implicit */int) var_3))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_4]))) + (18428729675200069632ULL))))), (((/* implicit */unsigned long long int) (-(((arr_3 [i_0]) - (((/* implicit */int) (short)-21811)))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_4])) >= (arr_3 [i_4])));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_2] [i_1] [i_4])) & ((~(((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_1]))))))), (min((min((arr_4 [i_4]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2] [i_4])))))))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) (short)-7995)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_2])), (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (var_12)))) + ((-(((/* implicit */int) arr_7 [i_0 - 1] [20U] [i_0]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(var_0))))));
    var_24 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))))), (((unsigned short) var_17)))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    var_25 += ((/* implicit */signed char) arr_6 [i_5] [i_6 - 2] [i_7]);
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) (unsigned short)16834)))), ((-(arr_4 [i_5 - 1]))))))));
                }
            } 
        } 
    } 
}
