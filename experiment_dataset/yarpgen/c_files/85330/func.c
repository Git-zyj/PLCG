/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85330
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 &= ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51869))) | (4294967295U)))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)15)))))) | (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_0 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned short)7))))) : (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_5 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65521)) ? (arr_1 [i_0]) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((int) (unsigned short)61736))) : (((787712681U) | (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)65532)))))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) -3668041885754587699LL)) ? (3589633579U) : (((/* implicit */unsigned int) arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (-709180986833285535LL) : (-1LL)))))) : (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 32767U)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)65521))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) arr_6 [i_0])) : (var_11)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned short) ((((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) : (((long long int) var_5)))));
    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((3668041885754587699LL) ^ (var_11)))));
}
