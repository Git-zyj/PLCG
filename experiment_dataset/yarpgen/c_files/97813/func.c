/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97813
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) / (((/* implicit */int) ((var_6) || (arr_0 [(signed char)4]))))));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [6LL]))));
        var_15 = arr_0 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [(unsigned char)0] = ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_4 [i_1]))))) / (15878694327497919317ULL)));
        var_16 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) arr_1 [i_1]))), ((+(((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */_Bool) arr_8 [i_2]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) max((arr_13 [i_2] [i_3] [i_4] [i_4]), (((/* implicit */long long int) ((_Bool) 2568049746211632299ULL)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_2])));
                    var_18 &= ((/* implicit */unsigned char) arr_0 [i_2]);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_11))))) != (max((15878694327497919317ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4])) != (((/* implicit */int) (unsigned short)20378)))))))) : (max((max((((/* implicit */unsigned long long int) var_12)), (arr_14 [i_2] [i_4] [11LL] [12U]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_4]))))))))));
                }
            } 
        } 
    }
    var_20 -= ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_11))))));
}
