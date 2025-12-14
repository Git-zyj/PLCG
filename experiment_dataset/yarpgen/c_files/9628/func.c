/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9628
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2214655558U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))) : (((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) var_3))))) ? ((-(var_5))) : (min((1826930727U), (1826930730U))))))))));
    var_11 = var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned int) (-(538997093229729310LL)));
            arr_5 [i_0] [i_0] [i_0] = (-(arr_1 [i_0] [i_1]));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
            {
                var_13 = ((/* implicit */_Bool) (~(arr_0 [i_0] [i_2])));
                var_14 = 2054521274U;
                arr_8 [19U] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_6)))))));
            }
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
            {
                var_15 = (~((-(var_2))));
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_17 = ((((/* implicit */long long int) (~(var_1)))) & (arr_3 [i_0]));
                    var_18 = ((/* implicit */long long int) 3127713259U);
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((arr_14 [7U] [(_Bool)1] [(_Bool)1] [i_4] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_3]))))))));
                }
                for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2013019466U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (-(arr_17 [i_0] [i_0] [i_3] [i_5])))) : (arr_16 [i_5] [i_3] [i_1] [i_0])));
                    arr_18 [i_0] [8LL] [i_0] [i_0] [i_0] = ((arr_7 [i_5] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_3]))) : (arr_4 [14U] [(_Bool)1] [i_3]));
                }
            }
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_22 [i_0] [i_6] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_6] [i_0]))))) ? (((/* implicit */long long int) (+(1826930727U)))) : (-1862271788454722801LL));
            arr_23 [i_6] [i_6] = ((/* implicit */long long int) (+(var_1)));
        }
        var_21 = ((/* implicit */_Bool) ((long long int) arr_13 [12U] [i_0] [i_0] [i_0] [i_0] [12U]));
    }
}
