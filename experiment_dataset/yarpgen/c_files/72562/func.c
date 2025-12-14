/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72562
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), ((+(arr_1 [i_0 + 1] [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned short) (+(((/* implicit */int) var_3))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) (((~((~(((/* implicit */int) (unsigned short)20022)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) (unsigned char)137))))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1757491207)) ? (((/* implicit */int) (short)-29956)) : (((/* implicit */int) (unsigned char)137))));
    }
    for (int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_8 [i_2 - 2] [i_2] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned char)5))))), (var_8)))));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) (signed char)-57))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9177)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_11);
                    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_2 + 1] [(short)3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 2] [i_3 + 1]))))) <= (((((/* implicit */_Bool) (unsigned short)46051)) ? (17033432409365224503ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)899)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned char)115))));
        var_22 = ((/* implicit */long long int) ((min((var_4), (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1])))) >= (((/* implicit */int) arr_4 [i_2]))));
    }
    var_23 = ((/* implicit */int) var_12);
}
