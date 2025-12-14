/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8860
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
    var_10 = ((/* implicit */unsigned int) (((+(var_7))) >> ((((+(((/* implicit */int) var_2)))) + (65)))));
    var_11 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) (~(19)))) & (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (min((var_7), (((/* implicit */long long int) var_1))))))) ? (max((((((/* implicit */_Bool) 0)) ? (var_5) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)48))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_13 = (unsigned char)143;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = (~(((/* implicit */int) ((arr_3 [i_0] [i_0]) || (((/* implicit */_Bool) arr_4 [i_1 - 1]))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) (~(((-2147483633) ^ (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_4 [i_2 + 2])) ? (2172301273U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_1)))) & ((~(((/* implicit */int) (unsigned char)245))))));
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(-339607197)))), (min((((/* implicit */unsigned int) -2147483618)), (4294967265U)))))), (max((arr_0 [5ULL]), (((/* implicit */unsigned long long int) ((-1380429608) / (((/* implicit */int) (short)32755)))))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) var_5);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108)))))) - (min((((((/* implicit */_Bool) arr_0 [i_3])) ? (var_4) : (((/* implicit */unsigned int) var_3)))), (0U)))));
    }
}
