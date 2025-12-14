/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57366
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
    var_19 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_1 [i_1 - 1] [i_0]) != (((/* implicit */unsigned long long int) ((long long int) var_8))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_21 = (~((-((~(((/* implicit */int) (_Bool)1)))))));
                            arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : (arr_3 [i_0])))))))));
                            var_22 = ((/* implicit */unsigned short) (((~((-(((/* implicit */int) arr_5 [i_0] [i_0])))))) == (((/* implicit */int) ((unsigned char) arr_7 [i_1])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)249)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) (+(arr_7 [i_1]))))));
            }
        } 
    } 
}
