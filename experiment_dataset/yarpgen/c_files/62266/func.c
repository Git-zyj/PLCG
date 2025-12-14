/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62266
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_3 [i_1] [i_2]))) > (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0]))))), (var_10)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (arr_2 [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
