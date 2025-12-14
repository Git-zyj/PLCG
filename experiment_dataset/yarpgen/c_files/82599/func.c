/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82599
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) 2572866764U)), (arr_2 [i_0] [11] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1] [i_1])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (signed char)0))));
                arr_6 [(unsigned char)20] [i_1 + 2] = ((/* implicit */unsigned char) ((746778153131555278ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((746778153131555278ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))))) <= (((/* implicit */int) (unsigned char)231))))))));
                arr_7 [(_Bool)1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) 8521215115264LL)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 - 1])) ? (arr_3 [(short)8]) : (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((short) arr_3 [i_0 + 3])))));
            }
        } 
    } 
    var_13 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))), (((((/* implicit */_Bool) (~(6345183574006910444ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_11))) : (((/* implicit */unsigned long long int) var_1)))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) - (var_4)))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */unsigned long long int) var_3)) / (18014398509219840ULL))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0)))))))))));
}
