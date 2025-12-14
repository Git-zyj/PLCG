/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76901
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
    var_17 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_2 - 1] [i_2 - 1] [i_0 + 1] [(signed char)0])) * (-1754001780)))), (max((((((/* implicit */_Bool) var_16)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))))), (((/* implicit */unsigned int) min((arr_3 [i_2] [i_1] [i_0]), (((/* implicit */int) arr_2 [i_3 - 1] [i_1] [i_0 + 2])))))))));
                            arr_11 [i_1] [i_3] [i_2] [i_0] = ((/* implicit */int) 1478083544U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (signed char)32)))))) : (arr_9 [i_0 + 1] [i_4] [i_4])))));
                            var_18 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)32))));
                            arr_17 [i_5] [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max(((unsigned char)237), (((/* implicit */unsigned char) var_3))));
                        }
                    } 
                } 
                arr_18 [5] [i_1] = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_9 [i_0 + 2] [i_1] [i_6]);
                            arr_23 [i_7] [i_1] [i_6] = var_1;
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
    var_21 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
}
