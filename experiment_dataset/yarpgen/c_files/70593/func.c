/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70593
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
    var_14 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) var_7);
                                var_16 &= ((/* implicit */unsigned short) -4077252605511259001LL);
                                arr_12 [i_3] = ((/* implicit */unsigned short) (-(max((arr_11 [i_0] [i_4]), (((/* implicit */int) var_12))))));
                                var_17 = ((/* implicit */signed char) (~(arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_4])));
                                arr_13 [i_3] [i_3] [i_2] [i_2] [9LL] [9LL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_0])))) ? ((-(((/* implicit */int) (unsigned short)42885)))) : (((/* implicit */int) (short)0))))) ? (((((((/* implicit */_Bool) (unsigned short)42872)) ? (arr_10 [i_4] [i_3] [i_2] [i_2] [(unsigned short)7] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)10] [i_2] [i_2] [i_1] [i_3]))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (short)-30251))), (((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [(signed char)0] [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-19808))))), (max((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13398806187262165407ULL)))))))));
}
