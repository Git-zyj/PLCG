/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5985
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
    var_10 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -886390090)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))))))), (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((~(-1929864840820955324LL))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3575140254U)) ? (14511104032727504982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2606664436U), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((((/* implicit */_Bool) (~(-564309107195691837LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 781076626U)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_0))))) : (min((((/* implicit */long long int) var_5)), (2404939482801855334LL))))) : (((/* implicit */long long int) min((((int) (unsigned short)60316)), (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)15773)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57115)) ? (3989389086996001570LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))));
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)180))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((((unsigned char) ((signed char) (_Bool)1))), (((unsigned char) (~(((/* implicit */int) (unsigned short)21108)))))));
        var_15 += ((/* implicit */_Bool) max((arr_5 [i_1]), (arr_5 [i_1])));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(142372313)));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (1918087355034796805LL)))) ? (((((/* implicit */_Bool) 2676969997U)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)16395)))) : (((/* implicit */int) ((_Bool) arr_2 [i_2] [i_2])))))));
        var_17 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) arr_5 [i_2])), (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 4618025177892216762LL))))))));
    }
}
