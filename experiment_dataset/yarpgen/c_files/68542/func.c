/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68542
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
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                arr_6 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) var_7))))))));
                arr_7 [i_1 - 1] [i_1 + 1] [i_0] = ((/* implicit */signed char) arr_2 [i_0 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_2] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_2] [i_3])), (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1])));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned long long int) ((unsigned short) (+(var_8))));
                            arr_20 [i_1] [i_4] [i_5 - 1] = ((/* implicit */long long int) arr_19 [i_0] [i_1 + 2] [i_4] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
