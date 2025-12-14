/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89058
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
    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? ((-(((/* implicit */int) (short)-11245)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_11)), (var_5))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_0)), (var_14))))))) : (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1 - 1] [i_1] [i_3] [i_4 + 2] = (+(((/* implicit */int) ((short) arr_12 [i_2 + 4] [i_2 + 4] [i_2 + 2] [i_2] [i_2 + 1]))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_4])), ((short)-11259)))) : (((/* implicit */int) min((arr_3 [i_0 - 3] [(unsigned short)14]), (var_11))))))), (((arr_2 [i_0] [i_1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 4] [i_3 - 4])) ? (((/* implicit */int) arr_4 [i_0])) : (arr_6 [(short)13])))) : (min((((/* implicit */long long int) var_1)), (arr_9 [i_0] [i_4]))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2])) ? ((-((-(((/* implicit */int) arr_10 [i_0] [i_1])))))) : (((/* implicit */int) (signed char)119))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_5);
}
