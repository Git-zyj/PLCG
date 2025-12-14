/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84385
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_6 [i_0] [9U] [i_0] [i_0]);
                    arr_9 [i_2 - 3] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((unsigned int) 3526147263U)) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
                    arr_10 [(_Bool)0] [i_0] [i_0] [i_0] = (signed char)-35;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_15 |= ((/* implicit */int) ((unsigned int) (signed char)35));
                var_16 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)39)) % (var_8)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_12 [(_Bool)1]) < (((/* implicit */unsigned long long int) 0U))))) << (((var_5) - (7389890347662790829LL)))))) : (((((/* implicit */_Bool) (signed char)-30)) ? (11U) : (((/* implicit */unsigned int) -144313448))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5562))) % (1414109803U)));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) (signed char)34)) ? (var_11) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) max((260046848U), (((/* implicit */unsigned int) arr_13 [i_3])))))))) ? (((/* implicit */int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))))))) : (((arr_14 [i_3]) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 += ((/* implicit */int) arr_13 [i_6]);
                    arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1])) % (((/* implicit */int) var_13))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((~(((/* implicit */int) ((_Bool) arr_15 [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) -8918809406143486856LL)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned short)5562))))));
        var_21 += ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((arr_27 [i_8]) - (6840645696015141863ULL)))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_13 [i_8]))))) : ((~(((/* implicit */int) (signed char)-117))))))), (((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37908))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_16 [i_8] [i_8]))))))));
        var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(1414109803U)))) : (((((/* implicit */_Bool) (unsigned short)992)) ? (arr_27 [i_8]) : (((/* implicit */unsigned long long int) arr_16 [i_8] [i_8]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)54753)) ? (arr_30 [i_9]) : (arr_30 [i_9])));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)91))));
        var_25 = ((/* implicit */unsigned short) var_8);
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        arr_32 [i_9] = ((/* implicit */short) (-((+(1278847335U)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_27 -= ((/* implicit */_Bool) ((arr_18 [i_10] [i_10]) ^ (((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_14 [i_10]))))))));
        arr_35 [i_10] = ((/* implicit */long long int) (+(5U)));
        var_28 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) (-(((/* implicit */int) (short)-23593))))));
        var_29 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_10] [i_10] [i_10])))));
    }
}
