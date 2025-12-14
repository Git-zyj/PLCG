/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72220
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
    var_18 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9)))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
    var_19 &= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)54973)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))), (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)98)))) >= (((((/* implicit */_Bool) arr_6 [(signed char)6] [i_1] [i_2 + 2] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13187)), (arr_3 [i_1] [(signed char)5]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 2] [i_2 + 2]))));
                                var_22 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1])), (arr_11 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 1])))));
                                var_23 -= ((/* implicit */int) (~(((unsigned int) arr_13 [i_1] [i_1] [(short)8]))));
                                var_24 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 4; i_5 < 23; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_23 [i_0] [i_5] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((max((((/* implicit */int) (short)13187)), ((~(((/* implicit */int) (unsigned char)8)))))) + (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)25158)) : (arr_8 [i_0] [(_Bool)1] [i_6] [i_7])))))));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 - 2] [i_6 - 1] [i_6 + 1])))))));
                        var_26 = min((max((-91547962), (1313521706))), (((/* implicit */int) min((arr_2 [i_5 + 1]), (arr_2 [i_5 - 1])))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned char) 2842893758U);
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (!((!(((/* implicit */_Bool) 1322141351U)))))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 3; i_9 < 18; i_9 += 3) 
        {
            {
                var_29 ^= ((((/* implicit */_Bool) (~(2253356723U)))) ? (((/* implicit */unsigned int) max((arr_8 [i_9 - 1] [i_9 - 2] [i_9 + 1] [i_9 - 1]), (((/* implicit */int) arr_28 [i_8] [i_9] [i_9]))))) : (((((/* implicit */_Bool) (unsigned char)68)) ? ((-(3933182890U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13588))))));
                var_30 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_28 [i_8] [i_9 - 1] [i_9 - 3])), (((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_8]))))))));
                var_31 = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
}
