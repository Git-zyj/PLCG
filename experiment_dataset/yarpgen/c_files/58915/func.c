/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58915
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) 2147483647);
                                arr_11 [i_0] [i_2] [0U] [i_2] = ((/* implicit */unsigned char) var_7);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) 1334822321);
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_3)), (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)255)))))), (var_4))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [0U] [i_2] = 1660288956;
                                arr_19 [i_0] [i_1] [i_2] [i_5] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) 1334822321))))) || (((/* implicit */_Bool) ((signed char) (signed char)-14)))));
                            }
                        } 
                    } 
                    arr_20 [10] = ((/* implicit */unsigned char) min((((((2147483647) >= (((/* implicit */int) (signed char)13)))) ? (((/* implicit */unsigned int) ((907426972) * (((/* implicit */int) var_9))))) : (max((169207581U), (((/* implicit */unsigned int) -1660288956)))))), (max((((/* implicit */unsigned int) min(((signed char)7), ((signed char)-24)))), (2656906648U)))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((-1334822321) / (((/* implicit */int) (unsigned char)157))))), (((((/* implicit */_Bool) 3155174612U)) ? (((/* implicit */unsigned long long int) 1334822321)) : (var_7))))))));
                }
            } 
        } 
    } 
}
