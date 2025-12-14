/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59016
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
    var_20 |= max(((-((-(var_19))))), (((/* implicit */unsigned long long int) var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_10)))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_10)))))));
                    var_22 = ((/* implicit */int) var_7);
                    arr_9 [i_0] [2] [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (18446744073709551615ULL)));
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1092047144)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 2] [i_2])))) >> (((var_17) - (11102693998593907600ULL)))));
                }
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_4)) < (((/* implicit */int) var_6)))) && ((_Bool)1)))) + ((~((~(((/* implicit */int) var_8))))))));
                    arr_14 [i_0] [11] [11] = ((/* implicit */unsigned long long int) min((((signed char) min((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_3] [i_0])))), (((/* implicit */signed char) var_8))));
                    arr_15 [i_0] = (!(((/* implicit */_Bool) ((short) var_9))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_4] [i_0] = ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1 - 1] [i_0])) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) ((unsigned short) var_13))));
                    arr_20 [i_0] [7U] [7U] [i_0] = ((/* implicit */_Bool) (~((-(arr_0 [i_0] [i_1 + 1])))));
                    var_24 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                }
                var_25 = ((/* implicit */signed char) ((unsigned int) max((max((((/* implicit */int) arr_1 [i_0] [i_1])), (-1092047144))), (((/* implicit */int) var_0)))));
            }
        } 
    } 
}
