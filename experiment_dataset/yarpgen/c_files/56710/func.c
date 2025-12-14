/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56710
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
    var_18 = (+((-(min((4249713761U), (((/* implicit */unsigned int) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */short) ((unsigned long long int) arr_4 [i_2]));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_2 - 4] [(short)10] [i_1] [i_2 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) ^ (((/* implicit */int) (unsigned char)83)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4] [7U] = ((/* implicit */unsigned char) ((unsigned int) min((((var_2) >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - (2931142686U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [6U] [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) var_7))))))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = max((min((1866906281U), (((/* implicit */unsigned int) (unsigned char)90)))), (((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1 - 3] [i_1 - 3] [i_2 - 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 3] [i_1] [i_1 - 3] [i_1 - 3] [i_2 - 1]))))));
                                arr_15 [i_0] [2U] [2U] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)0))))))) > (min((((var_13) + (7776817270875431975ULL))), (((/* implicit */unsigned long long int) max((var_16), (arr_11 [i_0] [(unsigned char)6] [0U] [i_0] [i_0]))))))));
                                var_19 |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_9 [i_1 - 2] [i_2 - 2] [i_0] [i_1 - 2] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
