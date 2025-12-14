/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55915
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 *= ((/* implicit */_Bool) ((int) (-(((var_14) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [12U])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
            var_16 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) var_12)))) ? (4149259748U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19874)))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_8)))) != (((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (16657)))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
            {
                var_17 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)24))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [(signed char)6] [i_0])) ? ((~(4149259748U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)1] [i_1 - 2] [i_3] [i_2])))));
                    var_18 &= ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_7))))));
                }
                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2108010136U)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [(_Bool)0])) : (((/* implicit */int) (unsigned char)46))))) : (arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 1])))));
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
            {
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (var_3)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_8))))));
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 725629348)) ? (1603543854U) : (((arr_15 [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3074138033U), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)21990))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-78)));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_5] [i_5 + 1] [i_5 + 1]), (arr_3 [i_5] [i_5 + 1] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5])))))));
            arr_20 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_5 + 1] [i_5 + 1] [i_5])), (var_1))))));
        }
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_25 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_0] [i_6]))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)-100)))) : ((+(((/* implicit */int) var_13))))))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_0])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11)))))))))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    {
                        arr_28 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_7 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7 - 1]))) : (-788054237714605366LL))))));
                        var_27 *= ((/* implicit */short) ((long long int) (-((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))));
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */short) ((unsigned int) (_Bool)0));
}
