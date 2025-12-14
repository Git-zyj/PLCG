/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84549
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
    for (short i_0 = 4; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((unsigned short) ((arr_0 [i_0 + 3] [i_0]) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 + 1])), (arr_1 [i_0] [(_Bool)1]))) : (min((18446744073709551607ULL), (((/* implicit */unsigned long long int) 4095U)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 3] [7ULL])) << (((var_4) - (2690005926U))))))));
    }
    for (short i_1 = 4; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_2] [(unsigned short)5] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_4))) ? (((arr_8 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) 4294963200U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])))));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 3])) == (((/* implicit */int) arr_3 [i_1 + 2]))));
            arr_10 [i_2] = ((/* implicit */signed char) ((arr_1 [i_1 - 1] [i_1 - 1]) ^ (arr_1 [i_1 - 3] [i_2])));
            arr_11 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24576)) ? (arr_1 [i_1 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)1]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3])))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = (~(arr_4 [i_1 - 1]));
            /* LoopNest 3 */
            for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        {
                            arr_22 [i_5] [i_3] [i_3] [i_1 - 1] = ((/* implicit */unsigned int) 35184372088320ULL);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((short) arr_5 [i_3])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35184372088304ULL)) ? (((/* implicit */int) arr_25 [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_17 [i_1 + 2] [i_1 - 2] [i_1])) : (((/* implicit */int) (short)32763))));
            var_24 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
        }
        arr_26 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned char) var_11);
    }
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (unsigned short)20)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))));
    var_26 = ((/* implicit */unsigned short) ((unsigned int) (~(((((/* implicit */int) var_9)) % (((/* implicit */int) var_17)))))));
    var_27 = ((/* implicit */signed char) var_0);
}
