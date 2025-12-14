/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65060
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        arr_3 [i_0] &= var_4;
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(min((min((((/* implicit */int) (unsigned short)42947)), (arr_4 [i_1] [i_1]))), (((/* implicit */int) min(((unsigned short)38866), (((/* implicit */unsigned short) (_Bool)1)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_6) : (var_6)))));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)22594), ((unsigned short)26697))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) max(((short)23281), (((/* implicit */short) var_12))))), ((~(3030617088U))))) != (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)26)) : (var_6))))))));
    }
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))));
    var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) | (max((1264350180U), (((/* implicit */unsigned int) (unsigned short)22585))))))) || ((!(((/* implicit */_Bool) var_10))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & ((~(var_6)))))) ? ((((!(((/* implicit */_Bool) (signed char)37)))) ? (((((/* implicit */_Bool) (short)23303)) ? (((/* implicit */int) var_5)) : (-1966866511))) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned short)38819)))))))));
}
