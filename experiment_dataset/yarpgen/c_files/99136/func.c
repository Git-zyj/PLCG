/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99136
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (min((arr_5 [i_1] [i_0]), (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) (short)-14314);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3006673902U)) ? (2147483647) : (arr_0 [i_0])))) ? (min((((/* implicit */long long int) 257674992U)), ((((_Bool)1) ? (arr_2 [i_1]) : (((/* implicit */long long int) arr_4 [8U])))))) : (((/* implicit */long long int) arr_3 [i_1] [i_0]))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1]);
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) max((arr_8 [i_0] [0LL] [i_2]), (max(((-(((/* implicit */int) (_Bool)1)))), (min((-963211309), (2147483634)))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */long long int) arr_5 [10] [i_1]))))) && (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) || ((!(((/* implicit */_Bool) 2147483647))))))));
                }
                var_25 *= ((/* implicit */unsigned int) arr_8 [i_0] [(_Bool)1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (short)2415)) : (63)));
        var_26 = ((/* implicit */unsigned long long int) arr_1 [i_3] [9U]);
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_7 [i_3] [i_3 + 2] [18ULL]))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [(short)24])) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_0 [(signed char)7])) : (222937636U)))) && ((!(((/* implicit */_Bool) (short)32767))))))) : (((arr_11 [i_3 + 2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967264U))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_3 [i_3 + 2] [i_3]))))))))));
        var_29 = ((/* implicit */short) 2147483647);
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((((/* implicit */_Bool) arr_12 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) % (arr_5 [i_4] [i_4 + 1])))));
        var_30 = ((/* implicit */short) (-(252U)));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_11 [i_4 - 1]))));
        arr_17 [i_4 - 1] = ((/* implicit */short) (_Bool)1);
    }
    for (int i_5 = 1; i_5 < 8; i_5 += 2) /* same iter space */
    {
        arr_20 [i_5 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_5] [2U] [8LL])) + (2147483647))) >> ((((~(((/* implicit */int) (short)-22973)))) - (22948)))));
        var_32 = ((/* implicit */long long int) 2110269685U);
        arr_21 [i_5] = ((/* implicit */int) min((3059828174U), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_2 [i_5 + 1]))))));
    }
}
