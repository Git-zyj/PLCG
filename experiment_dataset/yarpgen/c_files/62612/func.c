/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62612
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_2])))) ? ((-(597234532U))) : (597234532U)))) && (((((/* implicit */_Bool) var_5)) && ((_Bool)1))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2 + 1])))) ? (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) ((short) 6934921559413007444LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_12 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (((((/* implicit */_Bool) var_3)) ? (4594838269621058278ULL) : (var_7))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (max((var_7), (((/* implicit */unsigned long long int) 4294967291U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)125))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_2))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (((~(var_7))) < (((/* implicit */unsigned long long int) var_4))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < ((-(((/* implicit */int) var_3)))))))));
}
