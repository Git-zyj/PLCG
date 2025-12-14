/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91293
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)57)) < (((/* implicit */int) (unsigned short)47881))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (unsigned char)78)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_7 [i_0] [i_2] [15LL] [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [0LL] [i_1] [i_1] [13LL])) * (((/* implicit */int) (short)-128))))) ? (((/* implicit */int) arr_3 [i_2])) : ((~(803755992))))) != (((/* implicit */int) arr_8 [i_0] [17U] [i_1] [(unsigned short)17]))));
                    var_20 = ((/* implicit */unsigned char) arr_3 [i_2]);
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) arr_10 [4LL] [i_0] [i_0]);
        var_22 ^= ((/* implicit */unsigned int) ((short) 5010505408945665884LL));
    }
    var_23 = ((/* implicit */unsigned long long int) var_4);
}
