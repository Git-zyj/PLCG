/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69011
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)4] |= ((/* implicit */unsigned short) ((signed char) max((min((5712597559142697155LL), (((/* implicit */long long int) (signed char)93)))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (59532)))))))));
        var_11 = ((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1 - 1]);
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3] = ((/* implicit */short) (((~(var_1))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 4] [i_1 - 4])) ? (((/* implicit */int) (signed char)-105)) : (arr_8 [i_2] [i_2]))))));
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1 + 1] [i_2 - 1]))));
                        arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_3] [i_3])) + (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_1] [i_4 + 3]))))) ? ((-(((/* implicit */int) (unsigned char)214)))) : (((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 3]))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)27863))))));
    }
    var_12 = ((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (unsigned short)10275))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_4))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (signed char)-56))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((var_4) != (var_1)))))))));
}
