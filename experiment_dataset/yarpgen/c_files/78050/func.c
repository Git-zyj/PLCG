/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78050
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1893180343)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) -5837721699089462811LL))))))));
    }
    var_20 = ((unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2455015958U)))), (((((/* implicit */_Bool) 2455015968U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1445))) : (arr_6 [i_1]))))));
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_17 [i_1] [2U] [i_2] = ((/* implicit */unsigned int) (unsigned short)4095);
                        var_22 = ((/* implicit */_Bool) (~(max((20ULL), (((/* implicit */unsigned long long int) (unsigned short)4114))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_5])) * (((/* implicit */int) var_5))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_9 [(short)12] [i_5]))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1055982944)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (short)5638))));
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (short)-1))))) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) 1055982953))));
        var_25 *= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 12734421321546099497ULL)) ? (((/* implicit */unsigned long long int) -3859195298525260542LL)) : (1311498917820001555ULL))));
    }
    var_26 = ((/* implicit */int) var_11);
    var_27 = ((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned long long int) (+(var_10))))));
}
