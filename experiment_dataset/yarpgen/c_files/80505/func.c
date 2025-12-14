/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80505
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
    var_20 = ((/* implicit */signed char) var_19);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (signed char)124);
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [11U] [11U] [i_1 + 1])), (arr_2 [i_0] [i_1 - 1])))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_1 + 1])))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_2))))) : (max((((/* implicit */unsigned long long int) var_16)), (arr_2 [i_0] [i_0]))))))));
        var_25 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747)))))), (min((0), (((/* implicit */int) (signed char)-124))))))));
    }
    var_26 = min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))))));
    var_27 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_13))) - (((long long int) (_Bool)0)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1LL)), (9963541090960528623ULL)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) == (var_6)))))))));
}
