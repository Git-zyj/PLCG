/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74745
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 += ((/* implicit */long long int) -759037262);
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_0 [(unsigned short)6] [(unsigned char)11]), (((/* implicit */unsigned short) var_12))))) >> (((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_1 - 2])))) * (((/* implicit */int) min((((signed char) var_12)), (var_12))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (9U)));
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) arr_2 [i_4 - 2]);
                    arr_15 [i_3] [(unsigned char)8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_14 [i_3] [i_3])))) << (((122138996) - (122138980)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [13ULL] [i_5 - 1]))) : (((((/* implicit */_Bool) ((int) var_6))) ? (((arr_8 [i_4 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [1ULL] [i_4] [i_5]))) : (arr_10 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_4] [i_5])))))));
                }
            } 
        } 
    }
    for (signed char i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29321)))));
        /* LoopSeq 1 */
        for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((arr_18 [i_6] [i_6]) ^ (arr_18 [i_6] [i_6]))) <= (min((arr_18 [i_6] [i_6]), (arr_18 [i_6] [i_6])))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) max((max((((/* implicit */short) (_Bool)1)), ((short)29350))), (((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_7 + 1] [i_8] [(_Bool)1] [7U])) || (((/* implicit */_Bool) 4993208844031829558LL)))))));
                var_25 = ((/* implicit */unsigned short) (-(759037270)));
                arr_23 [i_6] [i_6] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61440)))))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_6] [i_7 + 3] [i_6])))))) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) min((((/* implicit */short) var_11)), (var_1))))));
            }
            var_27 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((3U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) arr_2 [i_6])) : (var_3))))))), (arr_18 [i_6] [i_6])));
        }
        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_3 [i_6 + 4] [i_6 - 3] [i_6]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [8U] [i_6] [(unsigned char)7])), (arr_17 [i_6]))))))) ? (((((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) - (max((((/* implicit */unsigned long long int) 2513649259U)), (arr_3 [i_6 + 4] [i_6] [(short)4]))))) : (((/* implicit */unsigned long long int) var_3))));
    }
    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_4))))), (((((/* implicit */unsigned int) var_3)) * ((~(0U)))))));
}
