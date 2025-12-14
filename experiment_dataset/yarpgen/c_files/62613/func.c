/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62613
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((unsigned long long int) var_10))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (var_10))))))) * (-7795718317120713602LL))))));
                    var_15 += ((/* implicit */int) ((signed char) (signed char)2));
                    arr_7 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7020437093443168280LL)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)2))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_17 [i_5] = ((/* implicit */unsigned char) min((min((arr_1 [i_5 + 2] [i_3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */unsigned int) (unsigned char)120))));
                    arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_4 + 1])) || (((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 2])))))));
                    var_16 = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        arr_21 [i_3] [i_4] [i_5] [i_4] [i_6] [i_5] = ((/* implicit */unsigned short) ((arr_16 [8LL] [8LL] [i_6]) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_5])))));
                        arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_11)));
                        arr_23 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_4 + 2])) || (((/* implicit */_Bool) var_1))));
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (var_8)))) ? (((7849933915295990995LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)2))))) : (arr_16 [i_5 - 3] [i_5 - 2] [i_5 - 2])));
                    }
                }
            } 
        } 
    } 
}
