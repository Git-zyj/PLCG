/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61732
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((unsigned long long int) var_5)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (4194362682U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24983)))))))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (max((((/* implicit */unsigned int) (signed char)62)), (0U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_22 |= ((/* implicit */int) max((((/* implicit */long long int) (+((+(((/* implicit */int) (_Bool)0))))))), ((~(-1913454070998761760LL)))));
                arr_6 [i_0] [i_0] = 1075315542;
                var_23 = ((/* implicit */unsigned short) (-((+(((-3865578433574015576LL) + (((/* implicit */long long int) var_7))))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)62))))))) || ((((+(((/* implicit */int) var_12)))) <= (min((arr_1 [i_0] [i_0]), (((/* implicit */int) (unsigned short)1))))))));
                arr_8 [21LL] [i_1] [(signed char)1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)17366)), (9067322295975303661ULL)));
            }
        } 
    } 
}
