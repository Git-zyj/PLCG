/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64386
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [24U] |= ((/* implicit */unsigned char) arr_1 [i_1]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) ? (12996500255053161929ULL) : (((/* implicit */unsigned long long int) 0LL))));
                    var_11 = ((/* implicit */short) (+(arr_2 [i_1] [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    var_12 = arr_8 [i_3] [i_1] [i_0];
                    arr_9 [i_0] [i_0] [i_0] [i_3] |= ((/* implicit */unsigned int) arr_1 [i_1]);
                    arr_10 [i_1] = ((/* implicit */unsigned char) ((short) arr_1 [i_1]));
                    arr_11 [i_3] [i_1] [i_1] [21U] = ((/* implicit */int) (-(arr_7 [i_1] [i_1] [i_1] [i_0])));
                }
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)27797), ((unsigned short)16708)))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_0])) ? (((/* implicit */unsigned int) arr_6 [i_0] [13LL] [i_0] [i_0])) : (min((arr_13 [i_0] [i_1] [i_4]), (((/* implicit */unsigned int) arr_15 [i_1] [i_4])))))) : (((unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) var_0)) : (0ULL))))));
                    arr_17 [i_1] = min(((short)7680), (((/* implicit */short) (signed char)(-127 - 1))));
                }
                for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)208));
                    var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)243))))) ? (min((arr_18 [i_1]), (((/* implicit */long long int) (unsigned char)142)))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [22]))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((var_7) < (4207784357U))))))));
    /* LoopSeq 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_23 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [10U] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_6 - 1] [12U] [17LL] [i_6])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6])), (arr_22 [(_Bool)1] [i_6])))) ? (((var_4) - (((/* implicit */unsigned long long int) arr_6 [i_6] [18U] [i_6] [i_6])))) : (((unsigned long long int) arr_7 [i_6 - 1] [i_6 - 1] [20U] [i_6]))))));
        var_16 |= ((/* implicit */unsigned char) (short)-23327);
        var_17 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6 - 1] [i_6 - 1])) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6])))))), (min((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_6] [i_6] [i_6 - 1] [i_6 - 1]))))));
        var_18 -= ((/* implicit */unsigned int) arr_3 [(_Bool)0]);
        var_19 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)240)), (17434535069193954686ULL)));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) arr_3 [i_9]);
                    var_21 ^= ((/* implicit */unsigned long long int) arr_14 [(unsigned short)23] [(unsigned short)23] [i_9] [i_8 - 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 22; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            {
                                var_22 |= (((-(((((/* implicit */_Bool) (unsigned char)128)) ? (arr_33 [i_7] [i_8] [i_9] [i_10] [i_11] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))))) >= (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_7])), ((short)-28746))))) : (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7]))) : (var_1))))));
                                var_23 = min((((arr_28 [i_8 - 1] [i_10 + 1]) ? (((/* implicit */int) arr_28 [i_8 - 1] [i_10 - 3])) : (((/* implicit */int) arr_20 [i_9] [i_10 + 1] [i_11])))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (arr_33 [i_7] [i_7] [i_7] [i_7] [18U] [5LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [(_Bool)1] [i_7]))))))))));
                                arr_36 [i_7] [i_7] [i_9] [i_9] [i_11] = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_5 [i_7] [i_8] [i_11] [i_8])))))), (min((((/* implicit */long long int) ((arr_19 [i_9] [i_10] [i_11]) ? (((/* implicit */int) arr_25 [i_11])) : (var_6)))), (arr_7 [i_10 - 2] [i_9] [i_9] [i_8 - 1])))));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_25 [i_10 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                for (unsigned char i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    {
                        arr_44 [i_7] [i_7] [i_7] [i_14] = ((/* implicit */short) (_Bool)0);
                        var_25 = ((/* implicit */long long int) arr_39 [i_7] [i_12] [i_13 + 1] [i_14 + 1]);
                    }
                } 
            } 
        } 
    }
}
