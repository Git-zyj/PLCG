/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79997
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
    var_11 = ((((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))) > (((/* implicit */int) ((unsigned short) ((short) (-9223372036854775807LL - 1LL))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), ((-(((((/* implicit */_Bool) 2220155021U)) ? (2074812274U) : (1056964608U)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) > (((/* implicit */int) ((signed char) var_6)))));
        var_14 = ((/* implicit */short) ((2220155005U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_1] [i_0] [1U] [i_1] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                        var_15 += ((/* implicit */unsigned short) ((arr_8 [i_3 + 2] [i_3] [i_3 - 1] [16LL]) ? (arr_6 [i_1]) : ((-(((/* implicit */int) var_1))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_0] [(unsigned char)15] [i_1] [(unsigned char)15] [(_Bool)1] = ((/* implicit */unsigned int) var_6);
                        var_16 -= ((/* implicit */long long int) ((signed char) (_Bool)1));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2] [i_1])) ^ (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 *= ((/* implicit */short) -1505823133);
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                    }
                }
            } 
        } 
        var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (signed char)127))) ? (((((/* implicit */int) (signed char)127)) << (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)14])))) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */signed char) ((arr_4 [i_6]) ? (((/* implicit */int) arr_8 [i_6] [i_6] [11ULL] [i_6])) : (((/* implicit */int) arr_18 [8U]))));
        arr_20 [i_6] = ((/* implicit */unsigned char) (!((_Bool)1)));
        arr_21 [i_6] = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        arr_25 [i_7] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_7] [(signed char)2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7] [4LL])))));
        arr_26 [(unsigned char)9] [5LL] = ((/* implicit */unsigned int) var_10);
    }
}
