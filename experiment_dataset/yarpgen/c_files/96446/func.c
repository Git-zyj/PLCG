/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96446
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
    var_11 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)71))))));
                arr_6 [(unsigned char)7] = ((/* implicit */_Bool) (signed char)-100);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_3] [i_5] [i_4] [i_3] [i_3] = min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_7 [i_5])), (arr_19 [(_Bool)1] [i_3] [i_3] [i_3] [(unsigned char)10] [(_Bool)1] [i_3])))), (min(((((_Bool)1) ? (arr_12 [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((arr_10 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_21 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (154703834U)));
                            }
                        } 
                    } 
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) arr_18 [i_3 - 1] [i_2 - 3])))) : (((/* implicit */int) ((_Bool) (unsigned char)161))));
                    var_14 = ((/* implicit */unsigned char) ((signed char) ((long long int) ((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) (signed char)-109))))));
                }
            } 
        } 
    } 
}
