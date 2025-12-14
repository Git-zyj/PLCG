/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59848
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
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_4))))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 1758416378701967101LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1261260378) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (max((var_1), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) 5686464269953393853LL))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) 72057594037927872ULL))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59367))))) ? (5686464269953393833LL) : (((/* implicit */long long int) min((((((/* implicit */_Bool) -5686464269953393854LL)) ? (3213776542U) : (3213776550U))), (3213776552U))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 2])) ? (756449081U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1])))))) ? (-5686464269953393853LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) < (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 2]))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2])) ? (3213776523U) : (((/* implicit */unsigned int) var_12))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_1 + 1])), (arr_5 [i_1 - 2] [i_1 + 2]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) 1081190764U));
        arr_12 [i_2] = ((/* implicit */unsigned int) arr_1 [i_2]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_22 = ((/* implicit */short) 3226254090790975886LL);
        var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1047)) ? (((/* implicit */unsigned int) var_10)) : (3213776539U)))))) ? (arr_9 [i_3]) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (unsigned short)19452))))));
    }
}
