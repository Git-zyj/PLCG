/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83904
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
    var_19 = ((unsigned int) 8190);
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) 5041484465896743711ULL)))));
            var_20 = min((((/* implicit */unsigned long long int) ((short) var_15))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_7)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)48516)), (13405259607812807915ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
            arr_8 [i_0] [i_0] [(unsigned char)5] = (~(5041484465896743730ULL));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) min((((long long int) ((unsigned long long int) arr_0 [i_0 + 1] [i_0]))), (min((arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 1]), (arr_3 [i_0 - 2] [i_0 + 1] [i_0 - 2])))));
        arr_10 [i_0] = ((/* implicit */unsigned int) (+(5239182348356353212LL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_21 |= ((/* implicit */unsigned char) min((((var_1) / (min((var_2), (((/* implicit */unsigned long long int) arr_12 [i_2])))))), (var_16)));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_17)))))) + (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13405259607812807903ULL)) ? (82987144810608979LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (5041484465896743711ULL)))));
    }
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        var_23 &= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (-(arr_12 [8LL])))))));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((+(var_7))))))));
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned int) 5041484465896743717ULL)))) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_14 [i_3])) <= (((/* implicit */int) var_4))))))) : ((~(((/* implicit */int) arr_11 [i_3]))))));
        var_25 |= ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_3 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_13 [i_3]))))))));
    }
}
