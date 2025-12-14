/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82144
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) (-((~(4294967279U))))))));
    var_17 *= ((/* implicit */int) 0U);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0])))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (~(arr_2 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) (((-(arr_8 [i_1]))) % (((/* implicit */unsigned long long int) arr_2 [i_1] [14]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(22U)))) & ((+(arr_8 [i_1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */int) arr_1 [i_2]);
        arr_13 [15ULL] = ((/* implicit */int) ((short) min((arr_8 [i_2]), (arr_8 [i_2]))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_23 [i_5 + 1] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((unsigned int) ((var_7) >> (((arr_14 [i_3] [i_4]) + (1712423378)))))), (((/* implicit */unsigned int) arr_17 [i_3]))));
                    arr_24 [i_4] = ((/* implicit */unsigned long long int) var_8);
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned short) min(((!(((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3])))), (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [i_4]))))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_2 [i_3] [1U])))) ? (arr_16 [i_5] [i_3]) : (((/* implicit */int) arr_22 [3] [i_4] [3]))))) > (var_7))))));
                    arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((int) (~(arr_7 [i_3]))))));
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (min((6U), (((/* implicit */unsigned int) (+(arr_17 [i_3]))))))));
        arr_27 [i_3] [i_3] = ((/* implicit */short) ((unsigned long long int) min((arr_22 [i_3] [i_3] [i_3]), (arr_22 [i_3] [i_3] [i_3]))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (17ULL) : (arr_11 [i_3])))) ? (((/* implicit */unsigned int) arr_14 [i_3] [i_3])) : (4294967287U))))));
    }
}
