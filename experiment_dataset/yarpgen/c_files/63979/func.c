/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63979
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        var_13 = ((/* implicit */_Bool) ((1747139241) >> ((((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767)))))) + (32778)))));
        var_14 = ((/* implicit */signed char) max((((var_6) + (((/* implicit */int) var_4)))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108))))), ((+(var_6)))))));
        var_15 = ((/* implicit */unsigned short) ((unsigned long long int) var_1));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = (((((_Bool)0) ? (((/* implicit */int) arr_5 [i_1])) : (var_6))) >> (((((unsigned int) var_2)) - (3002029129U))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [10U] [i_1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [(unsigned char)18])) >> (((((/* implicit */int) arr_5 [i_1 - 1])) + (31778)))));
            arr_11 [i_1] [14LL] |= ((/* implicit */_Bool) var_7);
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            var_16 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3 + 1]);
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            var_17 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) (signed char)93)) ? (arr_13 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (3660170370U)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((((((/* implicit */_Bool) (signed char)93)) ? (arr_13 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (3660170370U))) - (1694602425U))))));
            arr_19 [i_1] [i_1] = ((/* implicit */_Bool) (~(var_7)));
            arr_20 [(signed char)6] [i_4] &= ((/* implicit */_Bool) (+(var_6)));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_4) && ((_Bool)0))))));
            arr_24 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        }
    }
    var_19 &= ((/* implicit */unsigned short) (((_Bool)1) ? (var_2) : (((/* implicit */long long int) -1654389374))));
    var_20 |= ((/* implicit */unsigned int) ((unsigned char) ((int) ((var_6) >> (((((/* implicit */int) (unsigned short)65535)) - (65522)))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 3; i_6 < 8; i_6 += 4) 
    {
        for (unsigned short i_7 = 2; i_7 < 7; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_21 = arr_26 [i_9];
                            var_22 = ((/* implicit */short) ((long long int) ((var_2) >> (((/* implicit */int) arr_26 [i_6 - 1])))));
                            /* LoopSeq 1 */
                            for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                            {
                                arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((var_9), (((/* implicit */short) arr_0 [i_6] [i_6]))))))) >> ((((((((-(((/* implicit */int) arr_7 [i_10])))) + (2147483647))) >> (((((/* implicit */int) (_Bool)0)) >> (((15539370) - (15539362))))))) - (2147483594)))));
                                arr_38 [i_6] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((_Bool) ((arr_13 [i_6 - 1] [i_9]) >> (((((/* implicit */int) var_9)) + (984))))));
                                var_23 += ((/* implicit */long long int) ((((/* implicit */int) max((arr_31 [i_7 - 2] [i_7 + 3] [i_7 + 2]), (arr_31 [i_7 + 2] [i_7 + 2] [i_7 + 2])))) * (((/* implicit */int) min((arr_31 [i_7 + 2] [i_7 + 2] [i_7 + 2]), (arr_31 [i_7 + 1] [i_7 + 2] [i_7 - 1]))))));
                                arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [i_10] [i_8] [i_8] [i_7])), (var_11))))))) ? (((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) >> (((max((((/* implicit */long long int) (_Bool)0)), (589762164738545803LL))) - (589762164738545773LL))))) : (max((var_2), (var_3))));
                            }
                        }
                    } 
                } 
                var_24 -= ((/* implicit */unsigned long long int) arr_36 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6]);
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            arr_46 [i_6] [i_7] [i_6] [i_6] |= ((/* implicit */long long int) ((unsigned int) ((short) (_Bool)1)));
                            var_25 -= ((((/* implicit */_Bool) min((arr_9 [i_7 - 2] [i_11 - 2] [i_7 - 2]), (((/* implicit */int) var_4))))) ? (min((((/* implicit */long long int) arr_9 [i_7 + 3] [i_11 - 2] [i_11 - 2])), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_11 - 2])) ? (arr_27 [i_7 + 3] [i_11 + 1]) : (((/* implicit */unsigned int) arr_9 [i_7 - 2] [i_11 - 2] [i_11 - 2]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (arr_41 [i_7 - 2]) : (((/* implicit */int) arr_16 [i_7 + 3] [i_6 + 2])))) & (((((/* implicit */_Bool) 589762164738545809LL)) ? (arr_41 [i_7 - 2]) : (((/* implicit */int) var_9))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_0);
}
