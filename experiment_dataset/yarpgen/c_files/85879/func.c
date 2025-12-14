/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85879
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
    var_20 = ((/* implicit */signed char) ((var_8) + ((~(((-6) / (((/* implicit */int) (unsigned short)47687))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) + (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)69))))), (var_5)))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(var_14))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) -42467762)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_0] [4U] [i_3] [i_0])) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (var_2)))) : (((/* implicit */int) (unsigned char)6))))) : (((unsigned long long int) arr_4 [i_1] [i_3]))));
                                var_22 += ((((/* implicit */unsigned int) var_14)) + (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4] [i_3] [i_4])) ? (arr_5 [i_4] [i_1 - 2] [i_4] [i_1 - 2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))))));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_2] [i_3] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_10)) : (arr_4 [i_2] [i_2])))) ? (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_19)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_4] [i_0] [i_0])), ((unsigned char)254)))))) ^ ((~(((((/* implicit */int) (unsigned short)4095)) / (-1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
