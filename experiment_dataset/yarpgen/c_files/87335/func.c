/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87335
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 = arr_1 [i_0 - 3] [i_0];
        var_13 = ((/* implicit */unsigned char) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (signed char)30);
        var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
    }
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 *= arr_6 [i_2] [i_2];
        var_16 = ((/* implicit */unsigned long long int) min((arr_7 [i_2]), (arr_7 [i_2])));
        var_17 = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        arr_10 [i_3] = (signed char)94;
        arr_11 [i_3] = ((/* implicit */_Bool) arr_3 [i_3 - 2]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_18 = 8434640635504093349ULL;
                                var_19 = arr_21 [i_5] [i_7];
                                arr_25 [i_6] [i_7] [i_6] [i_5] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_21 [i_6] [(_Bool)1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7]))))), (((/* implicit */unsigned long long int) min((arr_6 [i_8] [i_7]), (((/* implicit */short) arr_16 [i_4] [i_5] [i_6] [i_6])))))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_7] [i_4])) / (((/* implicit */int) arr_15 [i_4] [i_5])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) arr_22 [i_4] [i_4] [i_4]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]);
            arr_28 [i_9] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_15 [i_4] [i_4])) - (max((2147483647), (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (max((((/* implicit */int) arr_22 [i_4] [i_4] [i_4])), (arr_18 [i_4] [i_4] [i_9])))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_33 [i_10] [i_10] = arr_12 [i_4] [i_10];
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                var_22 = ((_Bool) (short)-9313);
                var_23 = ((/* implicit */short) ((arr_16 [(_Bool)1] [i_10] [i_10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((8434640635504093349ULL) * (((/* implicit */unsigned long long int) arr_19 [11] [i_10] [i_4]))))));
                arr_37 [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_20 [i_4] [i_10] [i_11] [i_4] [i_4]);
            }
            var_24 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_20 [i_4] [i_4] [i_10] [i_10] [i_10])), (min((arr_32 [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) (signed char)0)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (2147483647)))) ? (((long long int) arr_20 [i_10] [i_10] [i_10] [i_4] [i_4])) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)6] [(_Bool)1]))))))));
            arr_38 [i_10] = ((/* implicit */unsigned long long int) var_4);
        }
        for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            arr_43 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])), (min((min((10012103438205458267ULL), (((/* implicit */unsigned long long int) (signed char)100)))), (max((((/* implicit */unsigned long long int) arr_39 [i_4] [i_12] [i_12])), (arr_30 [i_4] [i_12] [i_4])))))));
            var_25 |= ((/* implicit */_Bool) arr_29 [i_12]);
            var_26 = ((/* implicit */unsigned int) (_Bool)1);
        }
        var_27 = ((/* implicit */int) 8434640635504093348ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
    {
        arr_47 [i_13] = ((/* implicit */unsigned int) arr_30 [i_13] [i_13] [i_13]);
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_19 [i_13] [i_13] [i_13])) : (8434640635504093349ULL)));
    }
}
