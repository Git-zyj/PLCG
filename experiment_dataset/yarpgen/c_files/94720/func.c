/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94720
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
    var_19 &= ((/* implicit */unsigned short) ((long long int) min((var_13), (max((var_13), (((/* implicit */unsigned long long int) (signed char)-113)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (!(var_1)))), ((unsigned short)62556))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    var_21 |= ((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) arr_6 [5] [i_1] [(unsigned char)7])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (((470568566U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))))));
                    var_22 = ((unsigned long long int) (~(3824398730U)));
                    var_23 = ((/* implicit */short) -5389038022153274358LL);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */unsigned long long int) var_17)) : (arr_5 [i_1])));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((unsigned short) ((arr_1 [i_3]) / (var_12)))))));
                }
                var_26 = (((((~(var_12))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3]))))));
                var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_6 [11LL] [11LL] [i_0 - 2])) * (((/* implicit */int) var_14)))));
            }
        } 
    } 
}
