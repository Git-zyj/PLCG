/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64274
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((var_8) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_1))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (short)7525))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_2 + 1]), (arr_0 [i_2 - 2])))) ? ((+(((/* implicit */int) arr_1 [i_4])))) : (((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */unsigned short) var_2)))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_3]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) (short)32740);
                    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~((~(((/* implicit */int) arr_0 [i_1])))))) : (((((/* implicit */int) min((var_5), (((/* implicit */short) (signed char)13))))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))));
                    arr_13 [i_2 + 1] = ((/* implicit */short) (((((-(((/* implicit */int) (signed char)-16)))) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (signed char)-110))))))) == (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}
