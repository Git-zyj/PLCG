/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89586
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
    var_20 = ((/* implicit */unsigned short) max(((-(15141283061982316606ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_14)))), (((((/* implicit */int) var_16)) % (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) * (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_18)) > (((/* implicit */int) var_13))))), ((short)32767))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_15)))) ? (min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (short)-32740))));
        arr_5 [i_0] = ((/* implicit */int) ((long long int) ((signed char) max((0LL), (9223372036854775807LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            arr_9 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (short)-25973);
            arr_10 [i_1] = ((/* implicit */_Bool) ((signed char) ((arr_3 [i_1 - 1] [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-32761)))));
        }
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            arr_13 [(signed char)20] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_19))) ? ((~(((arr_3 [i_0] [i_2 + 3]) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_8 [i_0])))))) : (((((/* implicit */_Bool) ((unsigned int) (signed char)7))) ? (max((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */int) arr_2 [i_2] [i_2])))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_8 [i_0])))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (max((0LL), (((/* implicit */long long int) (unsigned char)0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_3])))))) ? (((unsigned int) ((((/* implicit */int) (unsigned short)45606)) > ((-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3])))));
                var_23 += ((/* implicit */unsigned short) (-(min((arr_15 [i_2 + 2] [i_2] [16]), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_2] [i_5] [i_4] [i_5] [i_5] = arr_3 [i_2] [i_4];
                            var_24 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -1))) && (((_Bool) (signed char)127))))), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_20 [i_5 + 1] [(short)11] [i_3] [i_2 - 1])) : (((/* implicit */int) (short)32740))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                arr_27 [(_Bool)1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6]))));
                var_25 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [(unsigned short)4] [i_0] [i_2] [i_2] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (signed char)92)) : (var_4)))));
                arr_28 [i_0] [i_2] [i_0] [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 - 1] [i_2 + 2] [(unsigned char)21] [i_2 + 2]))));
                arr_29 [i_6] [i_2 - 3] [i_0] = ((/* implicit */unsigned char) ((2825016527U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [4LL] [i_6] [i_2] [i_6] [i_0] [i_0])))));
                arr_30 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 3] [i_2] [i_2 + 1] [i_2 - 2]))));
            }
            var_26 = ((int) ((unsigned char) max((((/* implicit */int) (short)-32731)), (var_4))));
        }
    }
}
