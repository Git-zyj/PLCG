/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96913
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) -1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (short)32767))));
                    var_19 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 12566300117344471277ULL)) ? (5880443956365080337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min(((-((-(var_1))))), (((/* implicit */unsigned long long int) ((arr_3 [i_0 - 1] [i_0 - 1]) >> (((arr_3 [i_0 + 2] [i_0 + 1]) - (3333446107U)))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_0 + 1])) && (((/* implicit */_Bool) arr_5 [i_0 + 2])))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1729382256910270464ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))) : (arr_2 [i_3] [i_3])))) && (((/* implicit */_Bool) max((arr_11 [i_3]), (arr_11 [i_3]))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (6679599899309375370ULL) : (((/* implicit */unsigned long long int) var_17))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [13U])) ? (((/* implicit */unsigned long long int) 7061594898996432227LL)) : (536870911ULL)))))))))));
    }
    var_23 = (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-275))))) * (((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */unsigned long long int) var_17)) : (var_1))))));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_1)));
}
