/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90347
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned short)24115))) <= (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = (unsigned char)237;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_4])) ? (arr_14 [0] [i_1 - 2] [(signed char)1] [i_1 - 2] [i_0 + 3] [i_1 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0])))) : (((/* implicit */int) (unsigned char)242))));
                                var_18 *= ((/* implicit */int) ((arr_11 [i_0] [i_1] [i_4] [i_3] [i_4]) < (max((((18446744073709551596ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(1648583860)));
}
