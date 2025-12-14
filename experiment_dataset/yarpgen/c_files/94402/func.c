/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94402
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((max((min((((/* implicit */unsigned long long int) var_3)), (var_5))), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_1] [i_1] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) <= (var_5)))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_3]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) + (var_5)));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [(unsigned char)14] = ((/* implicit */_Bool) max((min((arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]), (((/* implicit */long long int) arr_6 [i_1] [i_1])))), (((/* implicit */long long int) ((((arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) >= (-4135374552406011757LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_1] [i_1] [(_Bool)1] [i_0]))))));
                var_13 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_2)), (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_1))));
    var_15 &= ((/* implicit */_Bool) 4135374552406011780LL);
    var_16 = ((/* implicit */int) 4135374552406011756LL);
}
