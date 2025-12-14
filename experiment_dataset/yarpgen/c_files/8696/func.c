/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8696
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) : (max((arr_3 [i_0] [i_1] [i_0]), (max((((/* implicit */int) var_4)), (var_7)))))));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 45028098381841933LL)) ? (var_11) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)10] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0 - 1]))))))) / (((/* implicit */long long int) max((((/* implicit */int) ((short) var_10))), (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned char)153)) : (arr_3 [2] [i_0] [i_0 + 1]))))))));
                arr_5 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((var_17) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1])), (var_9)))) - (23))))), (((/* implicit */unsigned int) var_13))));
                var_20 = ((/* implicit */int) ((_Bool) (((-(((/* implicit */int) (short)-32755)))) < (arr_3 [i_0] [i_1] [i_1]))));
                var_21 = ((/* implicit */short) var_12);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_0);
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) var_14)))) >= (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) (short)-32755)))))))))) << (((((unsigned long long int) var_4)) - (18446744073709536645ULL))))))));
}
