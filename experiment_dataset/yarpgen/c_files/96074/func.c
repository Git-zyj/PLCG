/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96074
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
    var_12 = ((/* implicit */_Bool) (unsigned char)112);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((unsigned char)144), (arr_5 [i_1])))) ? ((-(arr_3 [i_1] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))), (((arr_7 [i_3 - 1] [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 1] [i_0] [i_3] [i_3] [i_3 - 1] [i_3 - 1]))) : (arr_3 [i_0] [i_3 - 1] [i_2])))));
                            var_13 *= ((((/* implicit */unsigned int) (+(((var_11) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_5))))))) / (arr_1 [i_1]));
                            var_14 = ((((/* implicit */_Bool) ((((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)119)))) << (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_5 [i_0]))))))) ? ((-(((arr_7 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) arr_5 [i_0]))))));
                        }
                    } 
                } 
                var_15 = (unsigned char)137;
            }
        } 
    } 
    var_16 = var_0;
}
