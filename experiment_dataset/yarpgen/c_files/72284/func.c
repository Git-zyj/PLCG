/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72284
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19666)) ? (6665286708362886611ULL) : (6665286708362886611ULL)));
    var_19 = ((/* implicit */signed char) ((unsigned long long int) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((unsigned int) var_9));
                var_21 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) <= (arr_1 [i_0 + 3] [i_0 - 1])))));
                var_22 = ((/* implicit */short) ((((/* implicit */int) (short)19666)) + (((/* implicit */int) (short)19666))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4] [i_2] [i_2])))))) > (var_0))))));
                    var_24 ^= ((/* implicit */unsigned int) 6665286708362886611ULL);
                    arr_14 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_7 [i_3] [i_4 - 1] [i_3 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_3] [i_3 + 1] [i_3] [9ULL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) != (((unsigned int) var_8))));
                                var_25 = ((/* implicit */unsigned long long int) 645819411);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                {
                    var_26 *= arr_10 [i_7 + 2] [i_7] [i_7 - 1];
                    var_27 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_20 [i_2] [i_7] [i_8] [i_8] [i_8 + 3])) ? (arr_20 [i_2] [(short)4] [i_2] [i_8] [i_8 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 - 1] [i_7] [i_8])))))));
                    arr_26 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -645819412)) ? (1U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_8] [i_8 - 2])) : (((/* implicit */int) arr_19 [i_8] [i_8 + 2]))))) : (((unsigned long long int) arr_19 [i_2] [i_8 - 1]))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_16))));
                }
            } 
        } 
    }
}
