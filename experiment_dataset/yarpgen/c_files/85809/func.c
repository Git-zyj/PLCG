/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85809
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))))))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (var_6)))) ? ((~(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_9))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10))))) : (var_5)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)18))))) : (var_8))))));
        }
        arr_10 [i_1] = ((/* implicit */unsigned char) var_10);
        var_17 = ((/* implicit */_Bool) min((var_17), (var_10)));
        arr_11 [i_1 + 3] [i_1] = ((/* implicit */unsigned int) var_8);
    }
    var_18 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
    var_19 = var_12;
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)233))))))))))));
}
