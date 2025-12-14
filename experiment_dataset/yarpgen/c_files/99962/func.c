/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99962
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
    var_14 = var_8;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) var_9)))) * (max((((((/* implicit */int) (short)-1768)) & (((/* implicit */int) var_6)))), (((/* implicit */int) var_1))))));
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((14179921253069484429ULL), (arr_2 [i_0])))) ? (((((/* implicit */int) (short)1768)) - (((/* implicit */int) (unsigned short)56996)))) : (((((/* implicit */_Bool) arr_1 [11U] [11U])) ? (((/* implicit */int) (short)1778)) : (((/* implicit */int) var_7)))))) + ((-(((/* implicit */int) (unsigned short)8525))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1768)) ? (1088952985U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */_Bool) (unsigned short)8540)) ? (9233206741011915062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56996)))))))), (max((((((/* implicit */_Bool) (short)20662)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12477))) : (var_10))), (((/* implicit */unsigned long long int) max((arr_5 [i_1]), (arr_5 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-30874)))) && ((!((_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)12477)))))));
            var_18 -= ((((/* implicit */int) (short)1772)) < (((/* implicit */int) arr_11 [15ULL] [i_2] [i_2])));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)45391))))));
        var_20 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56996)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((_Bool) var_3))))));
    var_22 -= ((/* implicit */unsigned long long int) var_0);
    var_23 -= var_11;
}
