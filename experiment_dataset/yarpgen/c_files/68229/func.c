/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68229
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
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(signed char)7] [(signed char)7] [i_0] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) ((arr_12 [i_0 - 3] [i_1] [i_2] [i_3 - 1]) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                                arr_14 [i_0] [i_0] [i_0 + 1] [(short)6] [i_0] &= ((/* implicit */_Bool) var_9);
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_4])) / (var_7)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31134))) : (9290376824970426602ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                                var_13 = ((/* implicit */unsigned long long int) -2006664083);
                                var_14 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((9156367248739124985ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) (-(var_3)));
                    var_16 = ((/* implicit */unsigned int) ((9290376824970426605ULL) + (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) min((((((9290376824970426602ULL) > (((/* implicit */unsigned long long int) var_3)))) ? ((~(var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9290376824970426602ULL))))))), (((/* implicit */int) ((((var_2) == (((/* implicit */int) var_10)))) || (((/* implicit */_Bool) (short)-8347)))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (unsigned char)248))))))));
}
