/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88019
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-5059462492702984227LL) : (((/* implicit */long long int) var_3))))) / ((+(var_16)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 4151195720U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (143771575U))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1])))))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (143771598U))) | ((~(((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (4151195698U)))))));
    }
    var_21 = ((/* implicit */short) var_12);
    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_13)) >= (var_12))))))) <= ((+(var_16)))));
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            {
                var_23 *= max((arr_5 [i_1 + 1] [i_1 + 1]), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [20ULL]))) : (arr_5 [i_1 - 1] [i_1 + 1]))));
                arr_8 [i_1] [i_1] = ((/* implicit */_Bool) max((((unsigned short) arr_4 [i_1])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1739806213U)) && (((/* implicit */_Bool) arr_4 [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((1460595762U), (var_10)))), (max((var_4), (((/* implicit */unsigned long long int) var_7)))))) >= (((/* implicit */unsigned long long int) var_14))));
}
