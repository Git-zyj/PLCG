/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73263
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) - (var_11)))) != (((((/* implicit */_Bool) var_7)) ? (var_13) : (var_4)))));
                var_15 = ((/* implicit */long long int) arr_8 [i_0] [21U] [i_2]);
                var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                var_17 = ((/* implicit */unsigned long long int) (~(((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [22ULL] [i_1] [i_0])))))));
                arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [16] [i_0] [i_0]))) : (15110274789399229226ULL)))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = (i_0 % 2 == 0) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_5 [i_0] [23])) - (13194))))) : (((((/* implicit */int) var_2)) << (((((((/* implicit */int) arr_5 [i_0] [23])) - (13194))) + (20993)))));
                arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2199023251456ULL) & (var_3)))) ? (1501888574912080916ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
            }
            arr_15 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) (short)30720)) << (((((/* implicit */int) arr_6 [i_0])) - (32)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (short)30720)) << (((((((/* implicit */int) arr_6 [i_0])) - (32))) - (52))))));
        }
        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_13 [i_0] [6] [i_0]);
            arr_20 [i_0] = ((/* implicit */short) ((18446741874686300170ULL) ^ (((/* implicit */unsigned long long int) -5139877272473493630LL))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((18446741874686300156ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (-6676245518008666675LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0] [i_4]))))) : (max((((/* implicit */long long int) 4220573118U)), (var_4)))))) : ((((~(arr_12 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (511430818) : (((/* implicit */int) var_1)))))))));
            arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_10))));
        }
        arr_23 [i_0] = ((/* implicit */short) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]));
        var_20 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (signed char)13)) && (((/* implicit */_Bool) 6ULL))))), (arr_5 [i_0] [i_0])))) % ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        arr_27 [i_5] [i_5] = (~(((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5])));
        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-108))));
    }
    /* LoopSeq 3 */
    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) var_4);
        arr_32 [i_6] = ((/* implicit */signed char) min((((long long int) arr_8 [i_6] [i_6] [i_6])), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)98)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-59)) | ((-2147483647 - 1)))))));
        arr_36 [i_7] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_7] [i_7 - 3]));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))));
    }
    for (int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        arr_39 [(short)12] |= ((/* implicit */unsigned char) (((~(var_3))) == (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) var_9)), (-709562916)))))));
        var_25 = ((/* implicit */unsigned char) (-(((((_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)72)) : (((int) var_7))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [6U]) : (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_2 [(_Bool)1]) : (arr_2 [0ULL]))) : (max((arr_2 [20ULL]), (arr_2 [20U]))))))));
    }
    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) 2199023251459ULL)) ? ((-(var_11))) : (((/* implicit */int) var_12))))));
    var_28 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)-6172)), (var_4)));
}
