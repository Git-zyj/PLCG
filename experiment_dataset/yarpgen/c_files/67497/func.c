/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67497
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_0] [i_0]) ? (((((/* implicit */int) (short)-21727)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) : ((~(arr_1 [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((signed char) ((short) 3568018635U))))));
                                arr_14 [i_1] [i_2] [i_3 - 2] = ((/* implicit */_Bool) ((((int) arr_2 [i_3 - 1])) - ((-(((((/* implicit */_Bool) 1000851082U)) ? (arr_12 [i_4] [i_3] [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_3] [i_3] [(signed char)10]))))))));
                                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (short)7598)) : ((~(((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2 - 3] [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_12);
    var_24 = var_4;
}
