/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8383
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(-123653249)))) && ((!(((/* implicit */_Bool) (short)-19334)))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_1)))))))));
        var_20 = ((/* implicit */_Bool) var_16);
        var_21 = ((/* implicit */signed char) (((~(arr_1 [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        arr_2 [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >> (((arr_1 [i_0] [i_0]) - (4450301934488328013LL)))))) * (min((((/* implicit */unsigned int) var_3)), (var_2))));
    }
    var_22 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (signed char)-2)))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (1639212991U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((signed char)-6), ((signed char)17)))))))));
}
