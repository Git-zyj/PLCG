/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92941
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
    var_13 = ((/* implicit */unsigned char) ((unsigned short) (short)-23378));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_10))), ((!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) min(((short)-23378), (((/* implicit */short) (_Bool)0)))))));
    var_15 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_5))));
                var_17 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)-23378)) > ((-(((/* implicit */int) (short)-23378)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                arr_10 [i_2] [(short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23362)) ? (((/* implicit */int) (short)-23378)) : (arr_9 [i_2 - 1] [i_3] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_3 - 2] [i_3 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [9ULL] [i_3 - 3])))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_8)))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))))) & (var_6)))) ? (min((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (min((var_10), (((/* implicit */unsigned long long int) (unsigned char)215)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)36832), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) <= (((/* implicit */int) var_8)))))) : (var_1))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_10))) >> (((((var_1) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))))) + (2660062857410217735LL))))) >> (((((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) >> (((1795404912U) - (1795404856U)))))) : (min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_2])))))) - (41ULL)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23378)) ? (1795404912U) : ((~(1709981467U)))));
                        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_7))) || (((/* implicit */_Bool) ((9772158116883160289ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31777))))))));
                        var_22 ^= ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_3] [i_3 - 2] [i_2 - 1] [i_2])) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) (short)23378))));
                    }
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        var_24 ^= ((/* implicit */unsigned long long int) arr_0 [i_5]);
                        arr_22 [i_7] [i_7] [i_5] [i_5] [i_3] [i_2] = ((/* implicit */short) ((var_10) + (((/* implicit */unsigned long long int) var_0))));
                        arr_23 [i_2] [8LL] [i_2] [i_2] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (var_11)));
                    }
                }
            }
        } 
    } 
}
