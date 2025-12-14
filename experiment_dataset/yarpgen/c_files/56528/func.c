/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56528
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [2] = ((/* implicit */signed char) ((unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (-8531988774121960457LL))) / (((/* implicit */long long int) ((var_6) & (((/* implicit */unsigned int) var_5))))))));
                arr_7 [i_0 - 1] [i_0 - 1] [12U] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3153157182U)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (signed char)-30))))) && (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 - 1]))))), (((min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0] [i_1]))) ^ (((((/* implicit */_Bool) var_0)) ? (arr_1 [5U] [i_0]) : (((/* implicit */unsigned int) arr_5 [i_1] [i_0 - 1])))))));
                arr_8 [i_1] = (unsigned short)50050;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2])) - ((~(((/* implicit */int) arr_10 [i_2]))))))) - ((-(var_1)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_16 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (var_11) : (var_6)))) ? (((9223372036854775800LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((2147483647) - (((/* implicit */int) var_12)))))));
            arr_17 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        }
        arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_12 [i_2] [i_2] [i_2]), (arr_12 [i_2] [i_2] [i_2])))) >> (((var_4) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))));
        arr_19 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_0))), (((/* implicit */unsigned int) (-(-116649912))))))));
        arr_20 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2])) || (((/* implicit */_Bool) var_3))))) + (((/* implicit */int) min(((_Bool)0), (arr_12 [i_2] [i_2] [i_2]))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(unsigned char)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [18]))))), (max((((/* implicit */unsigned int) var_3)), (var_0)))))));
    }
}
