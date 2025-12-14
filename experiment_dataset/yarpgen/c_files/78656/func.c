/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78656
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) 1497281524);
        var_13 |= (short)30824;
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) -1487443837)), (1097859150U))) ^ (((/* implicit */unsigned int) min((arr_0 [i_1]), (arr_0 [i_1]))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (2766538683U) : (((/* implicit */unsigned int) arr_5 [i_1]))))) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 4; i_2 < 17; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
            arr_10 [(short)18] [(unsigned char)12] |= ((((/* implicit */int) min((arr_1 [12]), (arr_1 [14])))) | (max((arr_0 [i_2 + 1]), (((/* implicit */int) var_4)))));
            arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [1U])))) ? ((+(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 1565324104U)) : (18446744073709551612ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_10)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [3])) / (var_11))))))))));
            var_17 = ((/* implicit */short) (~(min((arr_8 [i_1] [i_2 - 1]), (arr_8 [i_1] [i_1])))));
            arr_12 [i_2] [i_2] [i_1] = ((short) (+(var_8)));
        }
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)23872)), (((((/* implicit */int) (short)18749)) - (((/* implicit */int) (short)13757))))))) ? (((/* implicit */int) (unsigned short)44822)) : (((((/* implicit */_Bool) var_6)) ? (((int) var_5)) : (((/* implicit */int) ((short) var_0))))))))));
}
