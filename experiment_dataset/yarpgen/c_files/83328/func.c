/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83328
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
    var_10 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-13269))))))) <= (((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13264))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-13274)) && (((/* implicit */_Bool) var_8))))))))));
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (var_1)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)216)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13262)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (short)-24498)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-24508)) : (((/* implicit */int) (short)13271)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)873)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [14]))) + ((+(arr_1 [i_0] [14U]))))))));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (var_1))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13260)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24484))) : (var_0))) : (((((/* implicit */_Bool) (short)-13265)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24478))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1] [(signed char)14]) : (((/* implicit */unsigned long long int) 94788173U)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) arr_3 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_5)) : (arr_3 [i_1]))) : (((/* implicit */int) ((134217727U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)28662))))))));
    }
}
