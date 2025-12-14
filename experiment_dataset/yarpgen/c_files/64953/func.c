/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64953
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
    var_17 = ((/* implicit */long long int) (+(max((-314141667), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_0)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned short) (unsigned char)0);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)54576)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) 314141666);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_19 = var_8;
        var_20 *= ((_Bool) ((((/* implicit */_Bool) min((arr_6 [i_1]), (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -314141667)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (-2926084507317020136LL)))) : (9382117123073396373ULL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (-(((long long int) min((((/* implicit */long long int) arr_9 [i_2])), (2926084507317020135LL))))));
        var_22 = ((/* implicit */_Bool) (((_Bool)0) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2926084507317020136LL)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)1553))))), (arr_6 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_2]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) arr_12 [i_3]);
        arr_14 [i_3] = ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (0LL) : (-2926084507317020136LL)));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3])), (arr_7 [i_3] [i_3])))) ? (max((arr_7 [i_3] [i_3]), (((/* implicit */long long int) arr_13 [i_3])))) : (((((/* implicit */long long int) arr_13 [i_3])) + (arr_7 [i_3] [i_3])))));
    }
    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (var_13) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3)))))))), (((((((/* implicit */_Bool) (unsigned short)60412)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-74))))))));
}
