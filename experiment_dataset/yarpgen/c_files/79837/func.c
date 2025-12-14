/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79837
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -1531967451)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) != (0))))));
        arr_5 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((4499173870609855981ULL) < (12902257445893122987ULL)))) * (2147483647)));
        var_11 = ((/* implicit */int) 8190825230077617236ULL);
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10255918843631934387ULL)) ? (-2217520053039324423LL) : (((/* implicit */long long int) 536870911))))) || (((/* implicit */_Bool) -1872677425007522160LL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((4834675133556885448ULL) == (((/* implicit */unsigned long long int) 35183835217920LL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2655216171U)) ^ (12902257445893122979ULL)))))))));
        arr_11 [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)163)))))));
        arr_12 [i_1] = ((/* implicit */_Bool) 1282170223U);
    }
    var_13 = ((/* implicit */unsigned int) min((827148181), (((/* implicit */int) (unsigned char)161))));
}
