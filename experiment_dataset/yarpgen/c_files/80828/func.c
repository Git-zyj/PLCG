/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80828
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = (+(-2147483631));
            arr_5 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1 + 1];
            arr_6 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [17U] [17U])), (((((/* implicit */int) arr_0 [i_1 + 2])) - (((/* implicit */int) arr_0 [i_1 - 1]))))));
        }
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) min((arr_2 [i_2] [i_2]), (var_4)))), ((~(arr_7 [i_2]))))) >> (((((/* implicit */int) var_8)) + (152)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_7 [(short)5]))))) == (((/* implicit */int) var_14))));
            var_20 = ((/* implicit */signed char) 2147483631);
        }
        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_2] [i_4 - 1])))) | (((/* implicit */int) (unsigned char)154))));
            arr_15 [i_2] = ((/* implicit */int) ((-9223372036854775794LL) + (((/* implicit */long long int) 524427156))));
            arr_16 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) arr_0 [i_4 + 2])), (arr_10 [i_2] [i_2])))) ^ ((~(2147483631))))) - (((/* implicit */int) ((((/* implicit */int) var_3)) == (((((((/* implicit */int) arr_0 [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_2] [i_2])) + (30757))) - (26))))))))));
        }
        arr_17 [i_2] = ((/* implicit */short) min((((unsigned int) arr_14 [i_2] [i_2])), (((/* implicit */unsigned int) arr_0 [i_2]))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_22 [i_2] [i_5] [i_6 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 4807634490581880803LL)) ? ((-2147483647 - 1)) : (2147483631)));
                    arr_23 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_2] [i_6 - 1]))));
                    arr_24 [i_2] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_2] [i_6 - 1])) - (((((/* implicit */_Bool) (signed char)-37)) ? (arr_21 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_11 [i_2] [i_5]))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_19 [i_2] [i_2] [i_2]))))) ^ (((1284809516) ^ (((/* implicit */int) (short)2203))))));
    }
    var_23 = ((/* implicit */unsigned char) min(((-2147483647 - 1)), (-2147483642)));
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 15; i_7 += 1) 
    {
        arr_28 [i_7 + 3] [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (unsigned char)0))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_3 [i_7] [i_7]);
        arr_30 [i_7] [i_7] = ((/* implicit */short) (-(min((((/* implicit */long long int) arr_26 [i_7 + 2])), (arr_27 [i_7 + 2])))));
        arr_31 [(_Bool)1] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_14)))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_7])) ^ (((/* implicit */int) (_Bool)0))))) ? ((~(2147483641))) : (((/* implicit */int) (signed char)54))))));
    }
}
