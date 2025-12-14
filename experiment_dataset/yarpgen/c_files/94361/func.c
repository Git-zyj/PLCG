/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94361
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
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (arr_0 [i_0])));
        var_19 = ((/* implicit */unsigned short) (signed char)-22);
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_2]))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [i_2]))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_22 |= ((/* implicit */unsigned long long int) (-(3792533625542785112LL)));
            arr_9 [10LL] &= (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)0))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1 + 1] [i_1 + 1]);
        var_24 *= ((/* implicit */_Bool) arr_2 [9ULL]);
    }
    var_25 = var_8;
    var_26 = ((/* implicit */unsigned int) var_12);
    var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
}
