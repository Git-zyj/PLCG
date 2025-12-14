/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67783
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) (unsigned short)65520);
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
        var_16 -= ((/* implicit */signed char) (+(((arr_1 [i_0 - 1]) | (arr_1 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(var_10)))) > (((var_4) << (((var_4) - (3142827168U)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_3 + 1] [(short)8] [i_3 + 1]))));
                    arr_11 [i_0] [i_1] [i_1 + 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                    var_19 = ((/* implicit */short) max((var_19), (var_5)));
                    var_20 = ((/* implicit */unsigned long long int) var_5);
                }
                for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) ((unsigned short) var_9));
                    arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) >> (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_4 - 2])) ? (arr_0 [i_2]) : (9223372036854775806LL)))));
                    arr_16 [i_0] [i_4 - 1] [i_4 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_0 + 1]))));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 2] [i_0])) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) : (var_3))) : (arr_6 [i_0] [i_1] [i_1 + 4] [i_1 + 3])));
            }
            arr_17 [(short)0] |= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [(unsigned char)6])) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [0U])) - (64011)))))) > (((((/* implicit */_Bool) (unsigned short)62991)) ? (1308735552862056122LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27736)))))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) arr_7 [i_1]));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 2])))))));
    }
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(var_3)))))) : ((+(((var_7) / (((/* implicit */long long int) var_0)))))))))));
    var_25 = ((/* implicit */unsigned int) var_7);
    var_26 += ((/* implicit */unsigned int) ((min((((((/* implicit */int) (unsigned char)20)) >> (((/* implicit */int) (signed char)6)))), (((/* implicit */int) (!(((/* implicit */_Bool) 15306121310566907227ULL))))))) ^ (2068732491)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((short) arr_0 [i_5 - 1]));
        arr_22 [i_5] = arr_6 [8LL] [i_5 + 1] [i_5] [i_5];
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_25 [6ULL] |= ((/* implicit */unsigned int) ((unsigned long long int) ((arr_12 [(signed char)0]) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_12 [(unsigned char)6])))));
        arr_26 [4LL] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2068732500)) ? (((/* implicit */int) (unsigned short)4890)) : (((/* implicit */int) arr_21 [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_7])) | (((/* implicit */int) var_11)))) % (var_12)));
        var_29 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_28 [0ULL] [i_7])) ? (((/* implicit */unsigned int) var_12)) : (4294967295U)))));
    }
}
