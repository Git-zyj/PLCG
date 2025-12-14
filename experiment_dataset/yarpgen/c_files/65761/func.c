/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65761
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 ^= arr_2 [i_1] [i_0];
                var_20 = ((/* implicit */unsigned int) var_7);
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11158))))) ? (min((((/* implicit */long long int) arr_0 [i_1] [i_1 - 2])), (arr_2 [i_0] [i_1]))) : (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1 + 2] [i_0] [1U]))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))));
                }
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    var_23 &= ((/* implicit */unsigned int) ((signed char) -962539401930039899LL));
                    var_24 = ((/* implicit */unsigned short) max((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1 - 3] [i_3 + 1])));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((unsigned int) (unsigned short)16049)) < (((unsigned int) var_1)))))));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_0 [i_0] [12U]))));
                }
                for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    var_27 = max((((unsigned int) ((((/* implicit */_Bool) 1470136264U)) || (arr_7 [i_0] [i_0] [i_0] [i_4])))), (arr_1 [(signed char)16] [i_1]));
                    var_28 = ((/* implicit */_Bool) arr_3 [i_1]);
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)-1))));
                    arr_15 [i_0] |= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28410))) & (arr_13 [i_0] [i_0] [i_4]));
                }
                var_30 ^= ((/* implicit */unsigned short) ((long long int) ((unsigned int) ((arr_14 [(signed char)0] [i_1 + 1] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (68719476735LL))));
}
