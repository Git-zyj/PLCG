/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72573
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_5 [(short)14] [i_0] [i_1] = ((((((/* implicit */_Bool) (unsigned char)55)) ? (arr_4 [i_1]) : (var_3))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) % (6992476414171046873LL))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((arr_1 [i_1 + 2] [i_1]) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1]))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (short)24779))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))), ((~(((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        var_21 = ((/* implicit */unsigned long long int) arr_4 [i_2]);
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), ((short)32767))))) * (((((/* implicit */_Bool) (unsigned char)15)) ? (18166805231765729993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))))));
    var_23 |= ((/* implicit */_Bool) var_19);
    var_24 = ((/* implicit */long long int) 279938841943821639ULL);
}
