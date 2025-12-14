/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73696
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 3])))) : (((((/* implicit */_Bool) arr_0 [5ULL])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 3]))))));
                    arr_7 [(signed char)12] [(signed char)12] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_3]))));
        var_21 = ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [14] [i_3]))) : (arr_2 [i_3]));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_4]))));
                    arr_18 [i_3] [i_3] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((18446744073709551615ULL) - (18446744073709551578ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_5])))))) : ((-9223372036854775807LL - 1LL))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_15 [i_3] [i_5 - 2] [i_5] [7]) : (((/* implicit */int) arr_4 [i_5 - 1] [i_4] [i_4] [i_4])))))));
                    arr_19 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3] [i_5] [i_5 + 1])) ^ (((/* implicit */int) arr_16 [i_3] [14]))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (-9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-20781)) > (((/* implicit */int) (unsigned short)1126)))))));
        arr_23 [i_6] = ((/* implicit */signed char) ((short) ((short) arr_21 [i_6])));
        arr_24 [i_6] = ((/* implicit */unsigned int) (+(9223372036854775807LL)));
    }
}
