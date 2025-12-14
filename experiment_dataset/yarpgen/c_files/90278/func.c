/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90278
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
    var_12 = ((/* implicit */int) var_5);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((long long int) ((unsigned char) max(((unsigned short)511), (((/* implicit */unsigned short) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (unsigned short)30138);
                        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_0])) ? (10026883503152415317ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0 - 2]))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((+(var_1))) > ((+(arr_2 [i_2] [i_2])))));
                        var_15 -= ((/* implicit */unsigned short) ((signed char) var_3));
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((+(var_4))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-18408)))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [i_1]))));
                        arr_24 [i_5] = ((/* implicit */unsigned char) ((int) 14186982785031900027ULL));
                    }
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2 + 1] [i_1])))))));
                }
            } 
        } 
    } 
}
