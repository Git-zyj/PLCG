/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70483
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
    var_17 = ((/* implicit */unsigned char) ((unsigned short) ((int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10))))));
    var_18 = ((/* implicit */signed char) min((var_8), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)-15)))), (var_5))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((long long int) arr_3 [i_0])) == (((max((((/* implicit */long long int) (short)-14333)), (1382825454111390301LL))) + (((/* implicit */long long int) arr_3 [i_0]))))));
        arr_4 [2] = ((/* implicit */unsigned int) min((max((5998539993666449282ULL), (((/* implicit */unsigned long long int) 1035167702)))), (((/* implicit */unsigned long long int) (!(arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) var_13)) : (0))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) == (3930179400U))))))) == (min((arr_2 [i_1] [i_1]), (((/* implicit */long long int) var_7))))));
        arr_9 [i_1] [(_Bool)1] = ((/* implicit */signed char) ((_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))))));
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_1] [6])) ? (((/* implicit */int) arr_7 [(unsigned char)17] [i_1])) : (((/* implicit */int) arr_7 [9U] [i_1]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2042279862)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (unsigned short)11025)) - (11009)))));
                    var_22 -= ((/* implicit */unsigned short) (-(((int) var_14))));
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2]))));
                    var_24 = ((/* implicit */long long int) ((arr_11 [i_4]) + (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_4] [i_2]))));
                    var_25 += ((/* implicit */long long int) ((((/* implicit */long long int) arr_16 [i_4] [i_4] [(signed char)19] [(unsigned char)0])) == (arr_13 [i_2] [i_4] [i_4])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_26 ^= ((/* implicit */short) ((((/* implicit */int) arr_19 [i_2] [i_5])) >= (((/* implicit */int) arr_19 [i_5] [13LL]))));
            var_27 *= ((/* implicit */unsigned short) ((arr_16 [i_2] [i_2] [i_5] [i_5]) - (arr_16 [i_2] [i_2] [i_5] [i_5])));
        }
        arr_22 [i_2] = ((/* implicit */long long int) arr_21 [(short)19] [i_2] [i_2]);
        var_28 = ((/* implicit */unsigned int) ((arr_13 [i_2] [i_2] [i_2]) | (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [5U]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned short) ((((arr_13 [i_6] [(_Bool)1] [i_6]) == (((/* implicit */long long int) var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_1))));
        var_30 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45674))) - (((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_31 -= ((/* implicit */long long int) (short)16582);
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_6] [i_6] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))) : (arr_14 [i_6] [11U] [11U])));
    }
    var_33 = ((/* implicit */unsigned char) (((((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) 264241152U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */long long int) var_11)), (var_14))) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (var_16)));
}
