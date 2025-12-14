/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69031
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7758100127366917050LL)))))) > (var_11))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((long long int) arr_0 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_0] [(unsigned short)1] = min((((long long int) 7758100127366917037LL)), (((/* implicit */long long int) ((signed char) max((7758100127366917067LL), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2])))))));
                                arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned char) arr_2 [i_1])));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_3] [i_1])) ? (arr_1 [i_1] [i_3]) : (((/* implicit */int) var_6))))));
                                var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)16352))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) (~(min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
                    arr_14 [i_0] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 4; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) max((min((arr_24 [i_8 - 1] [i_9 - 4] [i_9 - 3] [i_9 - 4]), (((unsigned int) var_10)))), (((/* implicit */unsigned int) ((int) ((arr_21 [i_6] [i_6] [i_6] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [12U] [i_8] [i_9 - 1])))))))));
                                var_22 = ((/* implicit */signed char) (((+(min((2204086250792527650LL), (7758100127366917065LL))))) >= (((/* implicit */long long int) ((unsigned int) var_4)))));
                            }
                        } 
                    } 
                } 
                arr_28 [i_6] = ((/* implicit */unsigned long long int) var_10);
            }
        } 
    } 
    var_23 = 32864957U;
}
