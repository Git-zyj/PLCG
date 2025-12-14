/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6176
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
    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])), (((unsigned long long int) (short)-31644))))) ? (max((6194754133866386821LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) var_12)))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) (-(min((var_6), (1570448292)))))) ? (min((-1LL), (((/* implicit */long long int) arr_1 [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((2288434015U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((unsigned short) var_17))))))))));
        var_20 = ((/* implicit */unsigned short) arr_1 [(_Bool)1]);
        var_21 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (short)28385)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_0] = (~(((/* implicit */int) (_Bool)1)));
                            var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                            arr_14 [i_0 + 2] [i_0] [i_0 + 1] = ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (signed char)-15)));
                        }
                    } 
                } 
            } 
            var_23 -= (+((~(((/* implicit */int) (unsigned short)3357)))));
            arr_15 [i_0] [i_0] [i_0] = (-(arr_4 [i_0 + 2] [i_0]));
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0] [i_0] [i_1]))))) : (((/* implicit */int) var_13))));
            var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (13LL) : (((/* implicit */long long int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))));
        }
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_21 [i_5] = min((((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_9 [(unsigned short)12] [6] [i_5] [i_5])))))), (var_10));
        var_25 = ((/* implicit */unsigned char) var_1);
    }
    var_26 = ((/* implicit */long long int) 2288434015U);
}
