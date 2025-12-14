/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56637
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
    var_20 = ((/* implicit */long long int) ((short) ((((755352939) >> (((-9219330735502402817LL) + (9219330735502402840LL))))) - (((/* implicit */int) var_18)))));
    var_21 = ((/* implicit */unsigned char) -755352939);
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((755352959) & (((/* implicit */int) var_16))))))) <= (4038686525U)));
    var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 755352960)) != (3550759691U))))) | ((-(var_2))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned short) (short)14016)))))))), ((-(max((((/* implicit */long long int) arr_0 [i_0])), (-8454436837039862103LL)))))));
        var_25 = ((/* implicit */unsigned short) (short)-1);
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_26 = ((/* implicit */long long int) (+(max(((-(((/* implicit */int) arr_3 [6U])))), (((/* implicit */int) arr_6 [i_1]))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9080895807749968884LL)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_5 [i_1]))))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) (short)-5801)))), (((((/* implicit */_Bool) 4393050642548400800LL)) && ((_Bool)1))))))));
        arr_7 [i_1] &= ((/* implicit */unsigned short) var_12);
    }
    for (short i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        var_28 += ((/* implicit */_Bool) max((max(((~(((/* implicit */int) var_1)))), (((((/* implicit */int) arr_6 [i_2])) | (var_14))))), (((/* implicit */int) ((unsigned short) ((unsigned int) arr_9 [i_2]))))));
        var_29 = ((((unsigned long long int) min((arr_9 [i_2]), (arr_6 [(short)0])))) >= (((/* implicit */unsigned long long int) ((unsigned int) (-(-2147483642))))));
    }
}
