/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63745
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned int) 3328349958U));
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((var_15) < (arr_9 [i_1])))))));
                    var_19 *= ((/* implicit */signed char) arr_0 [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            for (int i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                {
                    var_20 &= ((/* implicit */long long int) ((unsigned char) ((unsigned char) 0U)));
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((arr_11 [6]) - (((/* implicit */unsigned long long int) 2728641184U)))))));
                    var_22 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_12 [(short)6] [i_4 + 2])) > (((/* implicit */int) (short)-1392)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */short) var_8);
                                var_23 |= ((/* implicit */unsigned char) (_Bool)1);
                                var_24 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20486))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))))), ((_Bool)1)));
                                arr_22 [i_4 - 2] [i_5 - 1] [i_3] [i_7] = ((/* implicit */int) var_10);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((arr_20 [i_5 + 1] [i_5] [i_4] [i_3] [i_3]), (((/* implicit */int) (signed char)-120))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 3; i_8 < 14; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            {
                arr_28 [i_9] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_8 + 4] [i_8 + 1])))))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_2))));
                arr_29 [i_9] |= ((/* implicit */long long int) ((unsigned long long int) var_10));
                var_27 = ((/* implicit */short) ((unsigned int) (unsigned short)20486));
            }
        } 
    } 
}
