/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93903
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
    var_20 = ((/* implicit */unsigned char) -1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) var_16);
                    var_22 = ((((/* implicit */int) ((unsigned char) (unsigned short)62621))) ^ (((/* implicit */int) var_1)));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((8389479155289802404ULL) >> (((min((arr_6 [i_0] [(unsigned short)9] [i_1] [10ULL]), (((/* implicit */unsigned int) var_6)))) - (2871171815U)))))) ? (max((min((((/* implicit */unsigned long long int) (unsigned short)65161)), (8389479155289802404ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)379), (arr_8 [i_0] [i_0] [i_0] [10])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)32197)) : (((/* implicit */int) (unsigned short)65534))))) < ((-(var_3)))))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_17), (((/* implicit */unsigned long long int) -1542599686)))), (((/* implicit */unsigned long long int) ((8389479155289802404ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))))))))) ? (((((/* implicit */_Bool) ((-683109119) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(short)2] [(short)2])) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_5)))))) : (var_18)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((var_18) <= (((/* implicit */int) (short)29209))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((/* implicit */int) var_11)), (max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_13)))))))));
}
