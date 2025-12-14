/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91903
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), ((unsigned char)158)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0])) + (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) min((arr_7 [i_0]), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 9079256848778919936ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (var_6)))))));
                    var_20 *= ((/* implicit */signed char) arr_7 [12ULL]);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (17592185782272LL) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) -545357387))))))));
}
