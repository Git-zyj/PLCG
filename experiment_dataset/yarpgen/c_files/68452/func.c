/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68452
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
    var_16 = ((/* implicit */unsigned short) min((((((unsigned long long int) 92599244893097204LL)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) ((((min((var_12), (var_2))) + (2147483647))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (var_15))) - (18446744072350744521ULL))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)60)), (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_0] [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (var_12) : (var_3)))) : (max((((/* implicit */unsigned long long int) (unsigned short)13)), (var_15)))))));
                    var_17 -= ((/* implicit */int) ((unsigned char) max((902715993415975069ULL), (((/* implicit */unsigned long long int) -2050258710)))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)61)) ? (var_4) : (((/* implicit */long long int) var_0)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_14)) : (-1404121798674631565LL)))))) ? ((((-(902715993415975090ULL))) / (((/* implicit */unsigned long long int) (+(3717921482309791156LL)))))) : (((/* implicit */unsigned long long int) (-(var_14))))));
    var_19 = (~(902715993415975069ULL));
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
}
