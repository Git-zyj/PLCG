/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67293
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(943354457)))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)28679))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((943354457), (943354457)));
                var_21 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [13ULL]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 943354457))))) && (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((((/* implicit */int) arr_0 [i_0] [(unsigned short)15])) - (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_24 += var_16;
    var_25 ^= ((/* implicit */unsigned char) 943354457);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) var_7);
        arr_10 [i_2] [i_2] = ((/* implicit */int) (!(arr_2 [i_2])));
        arr_11 [i_2] [(unsigned short)8] = ((/* implicit */int) arr_7 [i_2]);
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < ((-(((((/* implicit */_Bool) (signed char)16)) ? (13457384355940987802ULL) : (((/* implicit */unsigned long long int) var_16)))))))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))))))))));
    }
}
