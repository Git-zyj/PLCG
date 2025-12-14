/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74918
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
    var_19 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)97)) && (((/* implicit */_Bool) (short)-5728)))) ? ((+(((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) arr_3 [i_0]))))) ? (min((((/* implicit */long long int) (signed char)-1)), ((+(-1200290950601152677LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_2 + 2] [i_3 - 2])))));
                            var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */int) (unsigned short)26708)) : (((/* implicit */int) (unsigned short)32749)))));
                        }
                    } 
                } 
                arr_11 [1ULL] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 2] [i_1] [i_1])) ? ((~(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0] [i_1])))) : ((-(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0] [i_1])))));
                var_22 = ((/* implicit */unsigned int) 469762048);
            }
        } 
    } 
    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3293)) + (((/* implicit */int) (signed char)97))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)7971)), (-8731462932143586400LL)))) ? (((/* implicit */int) var_5)) : (min((((/* implicit */int) (unsigned short)41821)), (var_0)))))) : (((var_17) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
}
