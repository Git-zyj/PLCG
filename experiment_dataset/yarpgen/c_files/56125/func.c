/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56125
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
    var_20 = ((/* implicit */short) var_7);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_22 += ((/* implicit */short) var_12);
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned long long int) min((var_8), (((long long int) var_1))));
            arr_6 [3LL] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) var_5)), ((+(-5983470537377661477LL)))));
            var_25 -= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [(signed char)3] [i_0] = ((/* implicit */int) var_16);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_8))));
            arr_10 [i_0] = ((/* implicit */short) var_2);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_27 *= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 2]))))));
                        arr_20 [i_0] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_5])) ? (var_3) : (((/* implicit */long long int) var_10))))) ? (((var_2) ? (var_1) : (((/* implicit */unsigned long long int) -386941143)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
                    }
                } 
            } 
            arr_21 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_14)) != (((((/* implicit */_Bool) min((((/* implicit */int) (short)-5085)), (273805348)))) ? (((/* implicit */unsigned long long int) var_8)) : (arr_14 [i_0] [i_3] [i_0] [i_3])))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((unsigned long long int) ((_Bool) max((((/* implicit */long long int) var_0)), (var_17)))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [5] [i_6] [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))));
            arr_27 [i_6] [i_6] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (arr_14 [i_0] [i_6] [i_6] [4]) : (var_18))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_29 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((3748986905936966111LL), (((/* implicit */long long int) 411077872)))) : (-3198809560299582178LL))) + (((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_7]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 411077868)) ? (arr_28 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(unsigned short)7])))))) : (-6294799386071500174LL)))));
        arr_30 [i_7] = ((/* implicit */int) var_6);
        arr_31 [i_7] = ((/* implicit */unsigned long long int) ((var_9) ? (min((((/* implicit */unsigned int) arr_29 [i_7])), (arr_28 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_30 ^= ((/* implicit */int) (+((+((-(3198809560299582178LL)))))));
        arr_35 [i_8] = ((/* implicit */long long int) min((((arr_33 [i_8] [i_8]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_33 [i_8] [i_8])))), (((/* implicit */int) (!(arr_33 [i_8] [i_8]))))));
        var_31 = ((/* implicit */unsigned short) arr_34 [i_8]);
        var_32 = ((/* implicit */short) max((var_32), (min((((short) arr_29 [i_8])), (((/* implicit */short) ((signed char) (_Bool)1)))))));
    }
    var_33 ^= ((long long int) var_0);
    var_34 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_18)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_0))))) : ((~(var_14)))))));
}
