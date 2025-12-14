/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64823
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
    var_10 = (unsigned short)15;
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) > ((+(1071644672U)))))) <= (((/* implicit */int) ((((unsigned long long int) var_0)) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) ((arr_1 [12U]) < (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_1 [14ULL])));
        var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) 3822866480U)) ? (3123484087U) : (((/* implicit */unsigned int) arr_1 [i_0])))) <= (((/* implicit */unsigned int) (~(arr_1 [i_0]))))));
        var_14 = ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_15 = (!(((/* implicit */_Bool) var_7)));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (arr_3 [i_1])))))))) && (((/* implicit */_Bool) arr_2 [i_1 + 1] [i_2]))))));
            var_17 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((var_9) ? (arr_6 [i_1] [i_2] [i_2]) : (((/* implicit */int) var_0))))) / (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (((519764900U) * (3822866472U))))))));
            arr_7 [i_1] [i_2] = ((signed char) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1])))))));
            var_18 = ((/* implicit */_Bool) arr_0 [i_2]);
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3 + 1] = ((/* implicit */int) arr_2 [i_3] [i_3 + 1]);
        var_19 = ((((/* implicit */unsigned int) arr_6 [i_3] [i_3] [i_3])) * (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (signed char)50))))) ? (((((/* implicit */_Bool) arr_1 [6])) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) var_7);
                    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_5]) ? (max((((/* implicit */unsigned int) arr_2 [i_5] [i_4 - 3])), (2414391222U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49))))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_5 [i_3]))))))));
                    var_22 = ((/* implicit */signed char) var_0);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_3 + 1]) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_4])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_1 [i_5]) / (((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) var_0)) ? (arr_13 [i_5]) : (((/* implicit */int) arr_8 [i_3] [i_3])))))))) : (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_17 [i_4] [i_3])))) ? (arr_17 [i_4] [i_5]) : (arr_17 [i_5] [i_4]))))))));
                }
            } 
        } 
    }
}
