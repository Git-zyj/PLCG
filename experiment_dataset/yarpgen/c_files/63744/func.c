/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63744
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((arr_1 [i_0] [i_0]) / (arr_1 [(signed char)14] [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) (short)-17135)) || (((/* implicit */_Bool) 229085752))))) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))) - (46))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)34))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))) & (arr_7 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-120)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (arr_7 [i_1] [(unsigned short)0] [i_4])))))));
                            var_18 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-27668))));
                            var_19 = ((/* implicit */unsigned int) (-((+(arr_12 [i_2 - 3] [i_3 + 1] [i_2 - 1] [i_2 - 1] [i_4])))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 2])) - (((/* implicit */int) (unsigned char)34))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_23 [i_5] [(signed char)4] [i_5] [i_7] |= ((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_5] [i_5]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (unsigned char)25))));
                        arr_27 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 2] = ((/* implicit */unsigned int) arr_15 [i_7] [i_7]);
                        arr_28 [i_5 + 2] [i_5] [(unsigned char)5] [(unsigned char)5] [i_5] = (-(((/* implicit */int) (unsigned char)37)));
                        arr_29 [(unsigned char)13] [(unsigned char)13] [10LL] [i_6] [10LL] [i_8 - 2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)73))));
                    }
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1864106635U))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))));
                }
            } 
        } 
    }
    var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (short)-17139)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)));
}
