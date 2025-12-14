/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82368
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
    var_18 = ((/* implicit */signed char) (((+(((6590305007617722705LL) / (-646868670120648359LL))))) * (((((646868670120648358LL) / (-646868670120648359LL))) * (((-646868670120648341LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] [(short)10] = ((/* implicit */unsigned char) 646868670120648359LL);
                var_19 -= ((/* implicit */signed char) max((((/* implicit */short) (signed char)-25)), ((short)-31303)));
                var_20 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11031))) : (-646868670120648341LL));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5776))) & (646868670120648357LL)))) ? (max((646868670120648357LL), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) | (-1443506660541992549LL))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29850)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)31306))))), (((-1482455623857898508LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                arr_5 [i_0 + 1] [i_1] [3U] |= ((/* implicit */unsigned int) (signed char)-25);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) 646868670120648362LL);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-63)) && (((/* implicit */_Bool) (signed char)-85)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)31284))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))))) ? (min((17106400980404380895ULL), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)118))))))) : (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2720971359U)) && (((/* implicit */_Bool) 1912155673677851400LL))))))))));
}
