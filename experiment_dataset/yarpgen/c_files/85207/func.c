/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85207
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) / (((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */_Bool) max((max((((/* implicit */int) (_Bool)1)), (var_14))), (((/* implicit */int) ((unsigned short) (short)-31964)))))) && (arr_3 [i_1 + 3])))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = (!((!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3])))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) (signed char)-34);
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [i_3] [15U])), ((~(((unsigned long long int) arr_2 [i_3] [i_3]))))));
        var_20 = ((/* implicit */int) arr_3 [i_3]);
    }
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? ((-(10670225218296758016ULL))) : (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) var_11))));
    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((((/* implicit */int) var_0)), (var_13)))) : (((long long int) 18446744073709551615ULL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (1591615167U) : (var_10)))))))));
}
