/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78362
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) & (var_9)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (1670409748U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10433))))) : (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)64)), ((short)-4449))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_3 [i_0] [(short)9]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_10))))))) ? (arr_7 [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)14])))));
                                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_2] [i_2])))) ? ((+((~(arr_6 [i_0] [(short)8] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                                var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) max((arr_3 [i_4] [(unsigned char)10]), (((/* implicit */short) var_10)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (signed char)-94)))), ((!(((/* implicit */_Bool) var_9)))))))));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned long long int) var_9);
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_18)), (var_17)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)31928)) : (((/* implicit */int) (unsigned char)69))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (var_14)))));
}
