/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8756
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
    var_12 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) (short)1611)) + (((/* implicit */int) (short)-1611)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) -662443688540736093LL))))) + (min((((/* implicit */int) var_2)), (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-1613)), (min((arr_5 [i_1 + 3] [i_2 - 1] [i_1 + 3]), (((/* implicit */long long int) (unsigned short)12839))))));
                    arr_12 [i_2] [i_1] [i_1] [i_0] = (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)0), ((unsigned short)0))))) ^ (((long long int) 606087839)))) : (((/* implicit */long long int) 2223407687U)));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), (min((4294967295U), (((/* implicit */unsigned int) arr_6 [i_0]))))))));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_3]));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) / (var_4)))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_13 [i_3]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_14 [i_3] [i_3])) >> (((var_10) + (1925938843))))))))));
    }
}
