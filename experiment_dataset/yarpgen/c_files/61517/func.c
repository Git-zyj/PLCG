/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61517
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_4);
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-6380509327900791984LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) 1075842355)), (464115328U))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_20 += ((/* implicit */short) -1075842356);
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0)))));
                        var_23 ^= ((/* implicit */int) arr_3 [i_2]);
                        var_24 = ((/* implicit */unsigned long long int) var_11);
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_2]);
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1075842356))));
            arr_17 [i_1] = ((/* implicit */_Bool) ((arr_1 [i_5] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_5])))));
            var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 202918642U)) ? (287948901175001088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
}
