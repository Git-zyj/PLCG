/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69961
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
    var_16 &= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (var_15)))), (((unsigned long long int) var_2)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5672208357437623619ULL))))), (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_0 + 1])), ((unsigned short)26511))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0 + 4])), (max((((/* implicit */unsigned long long int) arr_4 [i_0])), (0ULL)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)172)), (arr_1 [i_1 + 3])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_1 + 2]))) : (max((18446744073709551615ULL), (5672208357437623619ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) != (((min((5672208357437623619ULL), (((/* implicit */unsigned long long int) 2294447902U)))) >> (((((/* implicit */int) arr_3 [20U])) - (31151)))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) var_4);
    }
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 &= ((((2294447902U) / (arr_15 [i_3] [i_4]))) + (arr_13 [i_3]));
            var_20 = ((unsigned char) ((13224486363271324604ULL) % (((/* implicit */unsigned long long int) arr_15 [i_3] [i_4 - 1]))));
            var_21 |= ((/* implicit */long long int) 12998971676593758283ULL);
        }
        arr_17 [i_3] = max((((/* implicit */unsigned int) ((unsigned short) max((0ULL), (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3 - 1])))))), ((-(((((/* implicit */_Bool) 3096613049855484410ULL)) ? (arr_15 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23208))))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned int) max((-180617192), (180617192)));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) arr_14 [i_5 + 1] [i_5 + 1]);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_14 [i_5] [i_5]) : (var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12774535716271927997ULL)) || (((/* implicit */_Bool) ((arr_2 [i_5]) ? (3722876807U) : (arr_15 [i_5] [i_5]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_6 + 2]))));
        arr_27 [i_6] = ((/* implicit */unsigned int) var_11);
    }
}
