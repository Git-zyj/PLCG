/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64910
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) 2449775984U)) ? (arr_3 [i_1] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))), (arr_3 [i_1 - 4] [i_1 - 4] [i_1 - 4])));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)188)) || (((/* implicit */_Bool) -847425068)))) && (((/* implicit */_Bool) 1845191333U))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) -847425068)) && (((/* implicit */_Bool) (short)-1462)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (arr_3 [i_1] [i_1] [i_1 - 4]) : (arr_3 [i_0] [i_0] [i_1 - 4])))) ? (min((arr_3 [i_0] [i_1] [i_1 - 4]), (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_11);
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_6), ((short)-26058)))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) var_9))))) : (((/* implicit */int) var_6)))) != (((/* implicit */int) var_10))));
    var_24 &= ((/* implicit */signed char) (unsigned short)51651);
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((max((arr_3 [i_3] [i_3] [i_4]), (((/* implicit */unsigned int) (short)-26175)))) + (((unsigned int) (unsigned char)105)))), (((/* implicit */unsigned int) ((short) arr_10 [i_4] [i_3]))))))));
                    arr_14 [i_2] [i_4] [i_4] [i_3] |= ((/* implicit */int) min((((arr_0 [i_2 - 1]) ? (((/* implicit */unsigned long long int) -3549630004102224893LL)) : (arr_2 [i_2 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) var_1))), (((unsigned char) (unsigned char)81)))))));
                    var_26 = ((/* implicit */_Bool) ((short) max((((/* implicit */signed char) arr_8 [i_2 - 1])), ((signed char)-16))));
                }
            } 
        } 
    } 
}
