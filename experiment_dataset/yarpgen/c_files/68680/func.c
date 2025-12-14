/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68680
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
    var_15 &= ((/* implicit */long long int) var_0);
    var_16 = ((/* implicit */unsigned int) ((min((((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_14))), (((/* implicit */long long int) ((_Bool) (unsigned char)36))))) << (min((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((_Bool) var_13)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (arr_1 [i_0]))))))) >= (((/* implicit */int) min((((unsigned short) 1082588535)), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)138)) >= (((/* implicit */int) (unsigned char)162))))))))));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                arr_6 [i_1] [i_1] [i_0] = ((unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)194))))) >= (11674730900169413325ULL)));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) max((1795004895), (((/* implicit */int) arr_1 [16ULL]))))), (var_2))) >= (((((((/* implicit */_Bool) (unsigned char)104)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> (((/* implicit */int) ((_Bool) var_14)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1795004895)) ? (((/* implicit */unsigned int) 1925886775)) : (2137636782U)));
}
