/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70766
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                        arr_14 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_2 [i_3])), (max((max((((/* implicit */unsigned int) var_9)), (arr_9 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) != (((((/* implicit */_Bool) 6500157682285464426LL)) ? (-6500157682285464426LL) : (-6500157682285464426LL)))))) * (((/* implicit */int) var_10))));
                        arr_16 [8] |= ((/* implicit */_Bool) var_5);
                        arr_17 [i_2] [14ULL] [i_2] [14ULL] = ((((/* implicit */_Bool) (+(-6500157682285464426LL)))) || (((/* implicit */_Bool) (unsigned short)18743)));
                    }
                } 
            } 
            arr_18 [i_0] = ((/* implicit */_Bool) (-(arr_0 [i_0])));
        }
        arr_19 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
    }
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)31969)), (16607846437273980988ULL)))));
    var_18 = var_9;
    var_19 = ((/* implicit */long long int) (+((-(((/* implicit */int) max((var_9), (((/* implicit */signed char) var_14)))))))));
}
