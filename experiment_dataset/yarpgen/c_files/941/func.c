/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/941
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
    var_19 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_14)) << (((2147483646) - (2147483638))))) : (((/* implicit */int) (unsigned short)65535)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((int) (unsigned short)20479))) : (max((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_1] [i_0] [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [4ULL] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (arr_5 [i_1] [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned long long int) max((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)16611)))), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_0])) - (((/* implicit */int) (unsigned short)59797))))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
