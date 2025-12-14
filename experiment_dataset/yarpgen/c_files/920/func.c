/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/920
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (min((17546418049586791821ULL), (((/* implicit */unsigned long long int) var_0))))))))));
    var_11 = ((/* implicit */unsigned long long int) ((long long int) ((((var_1) != (var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((900326024122759795ULL) == (5236569792363478983ULL))))) : (max((17546418049586791795ULL), (var_8))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((signed char) ((long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((((((_Bool)0) ? (var_0) : (var_1))) + (2147483647))) << (((((/* implicit */int) ((var_7) <= (((/* implicit */int) (signed char)8))))) - (1)))))), ((~(((((/* implicit */_Bool) 900326024122759814ULL)) ? (900326024122759780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((((long long int) 900326024122759842ULL)) + (((/* implicit */long long int) ((unsigned int) 3U))))) & (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
