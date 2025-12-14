/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7850
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
    var_15 = ((/* implicit */unsigned int) (unsigned short)65521);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_3 [i_1]) : (9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (12472)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_3 [i_0]), ((~(((long long int) 9223372036854775793LL))))));
                arr_7 [i_1] = ((/* implicit */int) 7655045198609832727LL);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_0))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_2)))) ? (((unsigned int) 16527371514084261459ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13156)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) 266569586U);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) min(((-(min((var_13), (((/* implicit */unsigned int) arr_8 [i_2])))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_0 [(unsigned short)1]))))))));
    }
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_12 [i_3]))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (unsigned short)61410))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4148)))))));
        var_22 = ((/* implicit */unsigned char) (~(arr_16 [i_4])));
    }
    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (_Bool)1);
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) -6099538732064847021LL);
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) 9223372036854775807LL);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_16 [i_5])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1562809022849812257LL))))))), (((((/* implicit */int) arr_12 [i_5 + 1])) ^ (((/* implicit */int) arr_13 [i_5 + 1])))))))));
    }
    var_25 = 965025585U;
}
