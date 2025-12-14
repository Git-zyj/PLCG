/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7532
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32749))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) max(((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_7)) ? (-5077609694620406634LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [(signed char)16] [i_4]))))) + (5077609694620406659LL))))), (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)0)))))))));
                                arr_14 [i_0] [(_Bool)1] [i_0] [i_0] [i_0 - 4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2]))), (((((/* implicit */_Bool) ((var_14) ? (5901863330000666714LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (var_6)))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)64075)) - (64047)))))) ? (8388607) : (((((/* implicit */_Bool) (short)30960)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 3] [(short)4] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [(unsigned short)6] [(_Bool)1] [i_0 - 1])) ? ((+(((/* implicit */int) (signed char)126)))) : (((((/* implicit */_Bool) (unsigned short)54861)) ? (((/* implicit */int) arr_11 [i_0 + 2] [(_Bool)1] [i_0 + 2] [i_2] [(short)21])) : (((/* implicit */int) arr_8 [i_0] [i_0] [14] [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_12)) && (((_Bool) var_6)));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_5] [i_5] [i_6] [i_7] [i_8] [(_Bool)1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (((arr_6 [(_Bool)1] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [(_Bool)1] [(_Bool)1] [(unsigned short)14]))) : (var_4))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_6] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (4557627211635904672LL)))))));
                            arr_28 [i_6] [(short)9] [(_Bool)1] [4LL] [4LL] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (unsigned short)55620)))));
                            arr_29 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-8331577498720379448LL)))) ? ((+(max((((/* implicit */long long int) (_Bool)1)), (arr_22 [15LL] [i_6] [i_6]))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)13)) >= (((/* implicit */int) var_1))))), (((((/* implicit */long long int) ((/* implicit */int) (short)32752))) + (arr_20 [i_7])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_37 [i_5] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_5 [i_9 - 1] [i_9 - 1] [i_9 - 1]))) ^ (((((/* implicit */_Bool) arr_5 [i_9 - 1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_5 [i_9 - 1] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) var_8))))));
                                arr_38 [i_5] [i_6] [i_9 - 1] [i_10] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_19 [i_9] [i_10] [i_11])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)0)))));
                                var_21 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)255))))));
                                arr_39 [(_Bool)1] [(unsigned short)2] [(signed char)15] [(signed char)15] [(signed char)15] [i_6] [i_6] = ((/* implicit */unsigned char) var_16);
                                arr_40 [i_5] [i_5] [i_11] [i_10] [(unsigned short)5] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_16);
}
