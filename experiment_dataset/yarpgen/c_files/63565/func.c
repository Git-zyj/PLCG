/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63565
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
    var_15 = min((((/* implicit */int) var_9)), (min((var_6), (((/* implicit */int) min(((short)13393), (((/* implicit */short) var_7))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)7] [i_2] [i_3] [i_4] [i_4]);
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0] [5])) ? (arr_4 [(unsigned char)10]) : (((/* implicit */int) arr_2 [i_0])))), (arr_5 [i_0] [i_0] [i_4])))) && (((/* implicit */_Bool) (short)-14621))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0] [(unsigned short)5] [(unsigned short)5]), (arr_8 [i_0] [i_0] [4U] [i_0] [i_0])))) ? (((((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_1] [4U])) * (((/* implicit */int) arr_12 [(unsigned short)3] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0] [i_0])))))))));
                    var_18 += ((/* implicit */short) arr_7 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) ((var_8) ? (((((/* implicit */_Bool) (+(-875403635)))) ? (min((3737549706U), (((/* implicit */unsigned int) (unsigned short)41663)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)137)) >= (((/* implicit */int) (short)-1)))))))) : (((/* implicit */unsigned int) var_3))));
    var_20 = ((/* implicit */_Bool) var_3);
}
