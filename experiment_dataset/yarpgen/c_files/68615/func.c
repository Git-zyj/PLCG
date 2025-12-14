/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68615
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(262143U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25487))) : (2376445870U)))) ? (((/* implicit */int) (short)-25487)) : ((~(((/* implicit */int) (unsigned char)16)))));
        var_19 |= ((/* implicit */short) min(((~(arr_2 [i_0 + 3] [(_Bool)1]))), (((/* implicit */long long int) ((signed char) arr_2 [i_0 - 2] [i_0 + 2])))));
        var_20 *= ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    var_21 ^= (-(1942135700U));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 12; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */int) (~(arr_2 [i_4 - 2] [i_4 + 2])));
                                arr_18 [i_1] [i_2] [i_3] [i_3] [i_1] [i_5] |= ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) (-(arr_12 [i_1])));
                }
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [6LL] [4LL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (arr_7 [(signed char)0])))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 7; i_8 += 1) 
            {
                {
                    var_24 -= ((/* implicit */unsigned char) max(((~(arr_5 [i_6]))), (((/* implicit */int) ((((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_8 [i_8 + 3])))) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_24 [(_Bool)1] [i_7] [(_Bool)1])))))))));
                    arr_26 [i_6] = ((/* implicit */short) 262143U);
                    var_25 -= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_4 [(short)8]))));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned int) min((max((3004429317083497925ULL), (((/* implicit */unsigned long long int) 4294705153U)))), (((/* implicit */unsigned long long int) (-(-9138570099951647563LL))))));
        var_27 = ((/* implicit */_Bool) (short)26442);
        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (-9138570099951647563LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)7));
}
