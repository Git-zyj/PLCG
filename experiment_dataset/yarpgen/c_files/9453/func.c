/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9453
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
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1 + 1] [i_1] [i_1]) != (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) : ((+(var_0)))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) (-(((/* implicit */int) (short)14707))))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (18446744073709551608ULL) : (18446744073709551608ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)249)))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_24 = ((/* implicit */short) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) ((signed char) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) var_8)) : (arr_9 [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) var_13)))))))) ? (((unsigned long long int) (short)240)) : (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                    arr_10 [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 - 1] [i_1 + 1]))))) ? ((-((+(((/* implicit */int) arr_2 [i_1] [i_1])))))) : (((int) arr_9 [i_1] [i_1 - 1] [i_1 - 1]))));
                    arr_11 [i_1] [(short)12] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) var_5)));
    var_28 = ((/* implicit */unsigned long long int) ((int) 410391523));
}
