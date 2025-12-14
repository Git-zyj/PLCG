/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60059
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
    var_12 = ((var_7) ? (((/* implicit */int) ((_Bool) ((int) (unsigned short)60703)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((unsigned short)4825), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) min(((unsigned short)60703), (((/* implicit */unsigned short) var_0))))))));
    var_13 *= ((/* implicit */short) ((var_2) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)60711)) != (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28757)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60711))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                        arr_11 [i_0] [i_0] [(_Bool)0] [i_3] = ((/* implicit */unsigned short) ((_Bool) arr_7 [i_1] [i_2 - 1] [(signed char)10]));
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)60703)), ((~(((/* implicit */int) (unsigned short)4833))))))) > (min((arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 2]), (arr_3 [i_2 - 1] [i_2 - 1] [i_4 + 2])))));
                        var_16 = (~(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_4] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0])), (-4409725943820986251LL)))) ? ((-(((/* implicit */int) arr_13 [i_0] [(unsigned char)9] [13] [(unsigned char)9])))) : (((/* implicit */int) (unsigned short)4820)))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_5]))))))));
                        var_18 |= ((/* implicit */long long int) arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                    }
                    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4820))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_6 - 1]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44824))) % (-1945671530549384272LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_18 [i_0] [5LL] [15LL] [5LL])) : (max((((((/* implicit */_Bool) 75807178)) ? (((/* implicit */int) (short)24726)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (unsigned short)44824))))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_0 + 1]), (arr_9 [i_0 + 3] [i_1] [i_0 + 1]))))));
                        }
                        var_22 ^= ((/* implicit */unsigned short) ((unsigned int) (unsigned short)4833));
                        var_23 -= ((/* implicit */_Bool) ((long long int) (unsigned char)13));
                        arr_26 [i_6] [i_1] [i_6] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_14 [i_2 + 1] [i_1 - 2] [10LL] [9LL])) * (((/* implicit */int) arr_14 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    }
                    var_24 ^= ((/* implicit */int) ((unsigned long long int) arr_17 [i_0] [i_0] [i_2 - 1]));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_8] [i_8] [i_8] [(signed char)16])) : (((/* implicit */int) (unsigned char)219)))) <= ((-(((((/* implicit */int) arr_8 [i_0] [1ULL] [i_2] [i_2] [i_0])) ^ (((/* implicit */int) (_Bool)1)))))))))));
                        arr_31 [(unsigned char)2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)251))))), (arr_9 [i_1 + 1] [i_1] [i_1])))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (arr_29 [i_0] [i_0 - 1] [i_0] [i_1 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60715)))))))));
                    }
                }
            } 
        } 
    } 
}
