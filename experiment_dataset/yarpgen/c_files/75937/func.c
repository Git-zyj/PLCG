/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75937
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))) ? (max((((/* implicit */unsigned int) (short)468)), (2643941684U))) : (((var_3) & (var_1)))))) ^ (var_6))))));
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] [16ULL] [i_1 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) 749877043))) ? (((/* implicit */int) ((-749877034) != (((/* implicit */int) var_10))))) : ((~(-333513486))))) > (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) >= (((/* implicit */int) arr_3 [i_1 + 1] [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) (short)-20437);
                            arr_14 [(short)20] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_1 [i_3 - 1] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
