/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73052
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_1] [i_0] [i_1] &= ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (signed char)0)))))) | (((arr_0 [i_1]) | (((/* implicit */unsigned int) arr_6 [i_0] [i_1]))))))) * (((long long int) min((((/* implicit */unsigned int) arr_2 [15U])), (arr_1 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] |= ((/* implicit */unsigned int) arr_4 [i_1] [6U]);
                            arr_19 [i_0] [i_2] [i_0] [i_4] = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 - 3] [i_3])) ? (-2144028983055454243LL) : (var_6));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_12 ^= ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_5] [i_2] [i_2] [i_1] [i_0]))));
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [13U] [i_3]);
                            var_13 &= ((/* implicit */unsigned int) (~(var_2)));
                        }
                        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((((/* implicit */int) var_0)) + (2147483647))) >> (((2939047904U) - (2939047885U))))), ((~(((/* implicit */int) (short)-4))))))), (((((/* implicit */_Bool) -91197647869107700LL)) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
                        var_15 = max((max((arr_0 [i_2 - 3]), (arr_0 [i_2 - 2]))), (arr_17 [i_0] [i_1] [i_1] [i_2 - 1] [i_3]));
                    }
                } 
            } 
            var_16 += var_3;
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), (4294967295U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
            arr_25 [i_0] = ((/* implicit */unsigned char) (((-(arr_22 [i_1] [i_1] [i_0] [(_Bool)1]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
        }
        arr_26 [17U] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */short) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_6 [i_6 - 1] [i_6])) / (1245144728U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6])) && (((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6])))))) : (min((((/* implicit */unsigned int) arr_9 [i_6] [i_6 - 1] [i_6])), (arr_0 [i_6 + 2])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) <= (((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_6 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (var_10) : (((/* implicit */long long int) arr_1 [i_6 - 1] [i_6])))) : ((-9223372036854775807LL - 1LL))))));
    }
    var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (1358064767U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5)))));
    var_20 = ((/* implicit */signed char) min((((max((((/* implicit */long long int) var_3)), (var_4))) / (var_6))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) var_9)))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_0))));
}
