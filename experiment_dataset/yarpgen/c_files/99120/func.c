/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99120
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
    var_18 = ((/* implicit */short) ((int) ((unsigned long long int) ((var_5) / (((/* implicit */int) (short)-10096))))));
    var_19 = ((/* implicit */unsigned char) min((((((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (var_4))) + (62LL))))), (((/* implicit */long long int) var_5))));
    var_20 = ((/* implicit */signed char) 8668964681152880487ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((+(arr_4 [i_0] [i_0 + 1] [(unsigned char)6]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0 + 1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) arr_7 [i_0] [i_0])));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [(unsigned char)2] [i_1])) % (-6844917516945385538LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))) : (arr_2 [i_0 - 1] [i_0 + 1]))) - (((unsigned int) var_13))));
                    var_22 = ((/* implicit */unsigned int) ((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) > (((/* implicit */unsigned int) 1587236621))));
                }
            }
        } 
    } 
}
