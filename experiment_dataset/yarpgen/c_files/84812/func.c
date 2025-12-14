/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84812
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [(unsigned short)5] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [0U] [i_3] [i_4] [(unsigned char)0] [i_2])) ? (((/* implicit */int) min((arr_0 [(signed char)1] [i_0]), (((/* implicit */signed char) arr_3 [i_0]))))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_8 [i_0] [i_3] [i_2] [i_3] [i_4 - 1] [i_0] [i_4])), (max((1717573516U), (((/* implicit */unsigned int) 1835008)))))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (~(var_2))))) >> (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] [0U] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(unsigned char)13])), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) min((var_9), (((/* implicit */short) var_3))))))) - (216)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (~(var_2))))) >> (((((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] [0U] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [(unsigned char)13])), (arr_2 [i_0] [i_1])))) : (((/* implicit */int) min((var_9), (((/* implicit */short) var_3))))))) - (216))) + (109))))));
                    var_21 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((arr_8 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] [i_2]) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0])) - (51)))))) : (((/* implicit */signed char) ((((arr_8 [i_2] [i_0] [i_0] [i_2] [i_0] [i_2] [i_2]) + (2147483647))) >> (((((((/* implicit */int) arr_6 [i_0])) - (51))) + (150))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)0)))) - (15))))) << (((((arr_3 [i_1]) ? (((((/* implicit */_Bool) arr_0 [i_2] [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) - (85U))))))));
                    var_23 = ((/* implicit */_Bool) ((int) var_9));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? ((-(var_16))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_15))))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)111)) & (((/* implicit */int) (_Bool)0))))))));
}
