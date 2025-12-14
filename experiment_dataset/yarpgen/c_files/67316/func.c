/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67316
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3275196240U), (((/* implicit */unsigned int) (short)-19047))))) ? (((long long int) 3275196251U)) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)913), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))) < (((3449251295566048002ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [(short)3] = (+((+(arr_5 [i_0] [i_4]))));
                                var_13 = ((/* implicit */unsigned long long int) (unsigned short)43907);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
