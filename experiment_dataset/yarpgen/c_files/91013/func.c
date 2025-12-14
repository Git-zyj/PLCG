/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91013
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
    var_20 *= ((/* implicit */short) ((((((((/* implicit */int) var_18)) & (((/* implicit */int) var_3)))) != (((/* implicit */int) (short)6046)))) && (((/* implicit */_Bool) ((((long long int) var_18)) + (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_4))))))));
    var_21 *= (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)32767)))))))));
    var_22 = (~(min((((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_2))))), (((var_14) / (((/* implicit */long long int) var_8)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 6; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((arr_0 [i_0]) ? (((/* implicit */int) arr_4 [8LL] [i_0 + 4] [i_1])) : (((/* implicit */int) arr_0 [i_0]))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24773)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_8 [i_4]))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((((-2147483647 - 1)) - (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((-2147483647 - 1))))));
                            var_25 = ((/* implicit */short) ((var_5) / ((~(arr_10 [i_0] [7ULL])))));
                        }
                    } 
                } 
            } 
            arr_15 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0 + 4] [i_1] [i_0]))) <= (-4125125121997071303LL)))) + ((~(2147483647)))));
            var_26 = ((/* implicit */short) ((((var_8) << (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1]) - (4884499321816441119ULL))))) <= ((~(((/* implicit */int) (short)-32767))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (short)-32542))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)3082)) ? (1266871010) : (((/* implicit */int) (short)-32764))))));
                arr_23 [i_6] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_11)))));
            }
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (short)-1))))) - (((long long int) (short)32744)))))));
            arr_24 [4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) - (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) (short)32766)))) : (((((/* implicit */int) (_Bool)1)) - (var_19)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
        {
            arr_29 [i_0 + 4] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((arr_28 [i_0] [i_0] [i_0]) + (1926137146))))));
            arr_30 [i_7] = ((/* implicit */unsigned char) (~(arr_26 [i_0])));
            var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (short)0)) : (arr_26 [i_0])))) > (((((/* implicit */_Bool) (short)32749)) ? (arr_27 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))));
            var_30 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_16)) > (arr_28 [i_0] [i_0] [i_7]))))));
        }
        arr_31 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))));
        arr_32 [i_0 + 1] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) var_16))) + ((-9223372036854775807LL - 1LL))))));
        var_31 *= ((((int) arr_2 [i_0] [i_0 + 3])) < ((~(((/* implicit */int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 6; i_8 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (~((~(var_14))))))));
        arr_35 [i_8] |= ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_0 [i_8 + 4])))));
    }
    var_33 = ((/* implicit */unsigned long long int) 2147483647);
}
