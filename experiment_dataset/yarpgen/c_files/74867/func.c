/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74867
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) -2048921699)) + (2372305474348907697ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) : (((/* implicit */int) (!(var_1))))));
                var_16 ^= ((/* implicit */unsigned int) ((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_7))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) arr_8 [(unsigned char)8])) ? (var_7) : (((/* implicit */long long int) arr_8 [(short)12]))))));
        arr_9 [(unsigned short)20] |= ((/* implicit */signed char) (-(2048921698)));
        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2 + 1]))));
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14527))) < (min((((/* implicit */unsigned int) (unsigned short)65526)), (2348670789U))))))));
        var_22 -= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_8 [(unsigned short)18])))));
        arr_12 [16] &= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) arr_10 [2U])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (2048921688))), (((/* implicit */int) min((arr_6 [(_Bool)1]), (arr_6 [(unsigned char)14]))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
    {
        var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 288230376151711743ULL)) ? (((long long int) (~(((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25948)))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                for (signed char i_7 = 4; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_24 += (unsigned short)0;
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_13 [i_4]))));
                        var_26 *= ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) arr_10 [i_6 + 1])));
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned long long int) arr_15 [i_4]);
    }
}
