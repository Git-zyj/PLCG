/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85651
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) (unsigned short)42828);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32550))));
                            var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)147)), (max((((/* implicit */long long int) var_4)), (-8622987801684058474LL)))));
                        }
                    } 
                } 
                arr_8 [3U] [i_1] = ((/* implicit */signed char) (-(min((arr_4 [i_1] [i_1] [i_1] [i_0]), (arr_4 [i_1] [i_1] [i_1] [(short)0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 12; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            {
                arr_15 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (unsigned short)9891)) ? (3595303688U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) (short)-1532)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4 - 3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-1)))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_4] [i_4 + 2]) : (arr_10 [i_4 - 3] [i_4 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(signed char)10] [i_4 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37294))))) : (max((0LL), (((/* implicit */long long int) arr_10 [i_4] [i_4 - 2]))))));
            }
        } 
    } 
}
