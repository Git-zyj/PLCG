/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97682
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (-(((/* implicit */int) var_12)))))));
        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_0 [4])) ^ (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)0])) == (((/* implicit */int) arr_0 [8ULL])))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) var_1)), (8672685190772928876LL))))) && (((/* implicit */_Bool) var_9)))))));
    }
    var_18 = ((/* implicit */short) max(((signed char)-44), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-4277)))))));
}
