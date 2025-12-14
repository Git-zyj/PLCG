/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78263
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
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_1 [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) arr_0 [(unsigned short)13] [i_2]);
                            arr_11 [4LL] [i_3] = max((((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned char)13])), ((~(((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_2] [i_1] [4U] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
                            arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_3 [i_1] [i_3 - 1] [i_2])), (arr_0 [i_1] [i_1])))), ((+(var_11)))))) ? (max((((/* implicit */unsigned int) (unsigned char)111)), ((((_Bool)0) ? (1314482184U) : (arr_2 [(short)2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [11] [i_1] [9] [i_2]))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20174)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4507))))))))));
                arr_13 [i_0] [i_1] = ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) : (((/* implicit */int) arr_5 [i_1])));
            }
        } 
    } 
}
