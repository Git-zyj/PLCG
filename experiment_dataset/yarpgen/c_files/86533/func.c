/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86533
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
    var_17 = ((/* implicit */signed char) 8639902455509693745ULL);
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)16644)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1647424037)) ? (arr_1 [i_0 - 2]) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17671))))))) : (((888899428U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */short) arr_0 [i_1]);
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) & (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) (short)6317)) : (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) arr_4 [9ULL])) : (arr_1 [i_1])));
            var_20 *= ((/* implicit */unsigned int) var_11);
            var_21 -= ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0 + 3])), (arr_1 [i_1])))) ? (max((((/* implicit */int) arr_6 [i_0 - 1])), (arr_1 [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_10 [i_2] [i_0 + 3] = 16550828750109184160ULL;
            arr_11 [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((1647424023) - (1647424023)))) : (((unsigned long long int) (signed char)-80))));
            arr_12 [i_2] = ((/* implicit */short) (((_Bool)1) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1])))));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(arr_1 [i_0 + 2])))), (((((/* implicit */unsigned int) 1647424029)) + (1249401686U)))));
            arr_15 [i_0] [i_3] = ((/* implicit */_Bool) min((((arr_0 [i_0 + 2]) ? (((unsigned int) 10U)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [3U] [i_3]))))) ? (((/* implicit */int) ((signed char) arr_8 [i_0] [i_3]))) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
            var_23 = ((/* implicit */signed char) (~(((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_3])) : (((((/* implicit */_Bool) 5694761662845500784ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_3]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
            {
                arr_18 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1647424038)) ? (((/* implicit */int) arr_4 [i_4 - 1])) : (((/* implicit */int) arr_4 [i_4 + 1]))));
                arr_19 [i_0] |= ((unsigned long long int) ((((/* implicit */int) (signed char)93)) + (((/* implicit */int) arr_6 [i_0 - 2]))));
            }
        }
    }
    var_24 = (+(((unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_7))))));
}
