/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7981
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((signed char) 4294967295U))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((int) var_1))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_4 [i_0] [i_1]))), (((unsigned long long int) arr_2 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_2 + 2] [i_2] [i_1] = ((/* implicit */int) ((unsigned char) arr_3 [i_1 + 1] [i_1 - 1] [i_2 - 1]));
                        arr_10 [i_0] [i_1 + 1] [(unsigned short)2] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) < (((unsigned long long int) (unsigned char)255))));
                        arr_11 [i_0] [i_0] [i_0] [i_2] = ((23ULL) == (var_6));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3791708703376756829ULL)))));
                        arr_14 [i_2] = ((/* implicit */unsigned short) ((((((arr_3 [i_1] [i_1] [i_1]) >> (((arr_1 [i_0]) + (1307957401))))) >= ((+(((/* implicit */int) (unsigned short)2047)))))) ? (max((((/* implicit */unsigned long long int) (signed char)61)), (0ULL))) : (max((3791708703376756829ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
                        var_16 -= max((arr_5 [i_0] [i_0] [i_0] [i_0]), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (6497021212917652784ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_2 + 2] [i_1 + 1] [i_1 + 1] [i_0])))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_12 [i_1 - 2] [i_1 - 2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_2] [(unsigned char)4] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >= ((+(-1403187894)))));
                            var_19 *= ((/* implicit */unsigned char) (!(arr_15 [i_1] [i_1] [i_1 - 2] [(_Bool)1] [i_1 + 1])));
                        }
                        arr_21 [i_5] [i_2] [i_2] [i_0] = var_9;
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) (-(1337900906)));
                        var_21 -= (~(((/* implicit */int) (short)-5)));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                    }
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) var_9);
    var_24 &= ((/* implicit */_Bool) var_11);
}
