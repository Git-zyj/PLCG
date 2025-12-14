/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78277
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [8] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) min((arr_3 [i_3]), (((/* implicit */long long int) var_10))))));
                            arr_12 [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 8798175782227876348LL)) ? (-8798175782227876348LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) ((arr_20 [i_6] [i_6] [i_6] [i_5] [i_4] [i_1] [i_0]) > (((/* implicit */int) (unsigned short)24833))))), (((short) arr_0 [i_0]))))) ? (-8798175782227876351LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1] [7] [i_6])))))));
                                arr_23 [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_0] [i_4] [i_5] [i_6]))) ? (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)40703)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 1] [i_6 + 2] [(unsigned short)11]))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 3; i_9 < 22; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (!(((_Bool) arr_31 [i_9 - 2] [i_9 + 1] [i_9 - 2] [i_9 + 1]))));
                                var_18 = ((/* implicit */long long int) max((min((arr_20 [i_10] [i_11] [i_10] [10ULL] [10ULL] [i_10] [i_9 + 1]), (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_11] [1U] [i_11] [1U] [i_11] [i_11] [i_9 - 2])) && (((/* implicit */_Bool) arr_20 [i_11] [i_11] [i_11] [i_10] [i_10] [i_10] [i_9 + 2])))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [i_9] [i_9])), (((var_1) >> (((arr_27 [i_8] [i_8]) + (4209705417861563604LL)))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((short) 8798175782227876345LL))) ? (min((((/* implicit */long long int) arr_24 [7] [i_13 - 1])), (-8798175782227876349LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)40705))))))));
                                var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_12] [i_9] [i_8])) ? (-8798175782227876348LL) : (8798175782227876335LL)))) ? (arr_6 [i_7] [i_8] [i_12]) : (min((arr_6 [i_9 - 2] [i_12] [i_12]), (arr_6 [i_7] [i_8] [14ULL])))));
                            }
                        } 
                    } 
                    arr_43 [i_7] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) arr_22 [i_7] [i_8] [i_9] [12LL] [i_7]);
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_48 [i_7] [i_8] [i_9 - 3] [i_14] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_9 + 2])) ? (arr_0 [i_9 - 3]) : (arr_0 [i_9 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((arr_0 [i_9 - 1]) ^ (arr_0 [i_9 - 2]))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_8] [i_9] [i_7] [i_7] [i_7]))));
                                arr_49 [i_7] [i_8] [i_8] [i_14] [i_7] [i_8] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9] [i_9])) || (((/* implicit */_Bool) (~(4294967289U)))))));
                                arr_50 [i_7] [i_8] [i_9] [i_14] [i_8] [i_15] |= ((/* implicit */short) ((((-8798175782227876336LL) != (((/* implicit */long long int) 10U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_9 - 3] [i_9] [i_9] [i_9] [i_9 - 3])) && (((/* implicit */_Bool) arr_46 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 2])))))) : ((-(((long long int) (unsigned short)63441))))));
                                arr_51 [i_7] [i_7] [i_7] [i_14] [(unsigned short)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_47 [15] [i_8] [i_9 - 1] [i_14] [i_15] [i_8]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [5U] [5U] [i_9 + 2] [i_14] [i_15] [i_14])) ? (arr_6 [i_9 - 1] [i_9 + 1] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24822)))))) : (((((/* implicit */_Bool) arr_47 [i_7] [i_8] [i_9 + 2] [i_14] [i_7] [i_9])) ? (var_11) : (((/* implicit */unsigned long long int) arr_6 [i_9 + 1] [i_9 - 1] [i_9 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 22; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            {
                                arr_56 [i_7] [i_17] [i_9] [i_16] [i_17] = max((((unsigned long long int) ((((/* implicit */_Bool) arr_35 [13ULL] [i_8] [13ULL] [13ULL] [i_17])) && (((/* implicit */_Bool) (unsigned short)24822))))), (((/* implicit */unsigned long long int) arr_2 [i_8] [i_9])));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((arr_20 [i_7] [i_7] [i_7] [i_7] [i_16 + 2] [i_16] [i_16]) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_16] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 1] [i_16] [i_17])) && (((/* implicit */_Bool) arr_20 [i_9] [i_16 - 2] [i_16] [i_16 - 2] [i_16 + 1] [(signed char)23] [i_16]))))))))));
                                var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_9] [i_9] [i_16 + 2] [i_16] [i_16])) ? (((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_16 - 2])) : (((/* implicit */int) arr_44 [i_9 - 2] [i_9] [i_16] [i_16]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) var_1);
}
