/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87387
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)233))));
        arr_4 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */int) (unsigned char)30)) + (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (arr_0 [i_0] [i_0]))) : (((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))) - (15136679174304131372ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) : (940486959226890357ULL)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = ((/* implicit */_Bool) 3310064899405420223ULL);
        arr_12 [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2]))))) <= ((~(var_15)))));
        var_18 = ((unsigned char) (_Bool)0);
        arr_15 [i_2] = arr_13 [i_2];
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_19 ^= ((unsigned long long int) (unsigned char)23);
                        var_20 = ((/* implicit */short) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_3 - 3])) || (((/* implicit */_Bool) 524893740645005885ULL))))))));
                        arr_23 [i_3 - 3] [i_4] [i_5 + 1] = ((/* implicit */short) 6805179777948916195ULL);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) min(((short)-1), ((short)-24940)));
    var_22 = ((/* implicit */_Bool) var_14);
    var_23 = ((/* implicit */_Bool) var_13);
}
