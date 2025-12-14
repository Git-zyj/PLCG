/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99122
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_12);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-21898)) < (max((var_5), (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (_Bool)0)) : (361416652)))) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_2 - 1] [i_3 - 1] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_14 [i_0] [i_2 - 1]);
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [(unsigned char)10] [(unsigned char)10] [i_0])) != (((/* implicit */int) (unsigned short)44701))));
                                var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38))));
                                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44701)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1970777593U)))) * (var_6)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) var_17);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
}
