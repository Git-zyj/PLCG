/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86639
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
    var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_0)) : (70368710623232LL)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                    {
                        var_11 = ((/* implicit */int) arr_6 [i_2 - 3]);
                        var_12 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) min((var_13), (max((((/* implicit */unsigned int) min((arr_7 [i_1] [i_1] [i_2 - 3]), (arr_7 [i_0] [i_0] [i_2 - 2])))), (2147483647U)))));
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2 - 2])), (arr_5 [i_2 + 1])))), (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_2 - 1]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)32512);
                        var_14 = ((/* implicit */signed char) arr_7 [i_2 - 2] [i_1] [i_2]);
                    }
                    var_15 = max((arr_9 [i_2 - 3] [i_2 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_5] [i_0] [i_6] = arr_18 [i_5];
                                var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 3])) ? (9007190664806400ULL) : (((/* implicit */unsigned long long int) arr_9 [i_2 - 2] [i_2 - 1]))))) ? (-7700061169357262931LL) : (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1])) ? (-4757832106403472888LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2 - 3] [i_2] [i_2]))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0])) ? (max((0LL), (arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned char)19] [i_1] [i_0])))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)992)))), (((/* implicit */int) arr_15 [i_0] [(_Bool)1] [(_Bool)1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_29 [i_9] [i_0] [i_9] [i_9] = ((/* implicit */short) arr_5 [i_7]);
                        arr_30 [i_0] [i_0] [i_9] [i_9] [i_9] = ((/* implicit */signed char) max((arr_23 [i_9]), (((/* implicit */int) arr_10 [i_0] [i_7]))));
                    }
                } 
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -6819642917896299437LL)) ? (((/* implicit */int) arr_15 [i_10] [i_10] [i_10])) : (((/* implicit */int) (unsigned char)4))))), (min((((/* implicit */long long int) 4294967295U)), (arr_4 [i_10])))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6875048090275021881ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_26 [i_10] [i_10])))) : (min((3758096384ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
    {
        arr_36 [i_11] [i_11] = ((/* implicit */unsigned long long int) (unsigned short)26438);
        arr_37 [i_11] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 66584576))));
        var_20 = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_15 [i_11] [i_11] [i_11])), (2066663635))), (((/* implicit */int) arr_33 [(unsigned short)2]))));
        var_21 = 6819642917896299438LL;
        var_22 = ((/* implicit */unsigned char) arr_16 [i_11] [i_11] [i_11] [i_11]);
    }
    var_23 = var_5;
}
