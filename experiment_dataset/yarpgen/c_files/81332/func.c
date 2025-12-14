/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81332
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (-(var_11))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1])) != (arr_4 [i_0] [i_1] [i_1])));
            var_13 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
        }
        for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_14 ^= ((/* implicit */short) ((unsigned short) (unsigned char)185));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
                var_16 = ((/* implicit */unsigned short) ((arr_12 [i_2] [i_2] [i_2 + 4] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            }
            for (short i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
            {
                var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) & (arr_9 [i_4 + 1]));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned short) arr_11 [i_2 + 1] [i_4 + 2]);
                    arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_5]))) + (630869446257196671ULL)))) ? (((long long int) var_1)) : (((/* implicit */long long int) arr_6 [i_2 + 3] [i_2 + 2] [i_2 + 3]))));
                    var_19 = ((/* implicit */_Bool) ((long long int) arr_16 [i_2] [i_2 - 1] [i_2 + 1] [i_4] [i_4 + 2]));
                }
            }
            for (short i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (int i_8 = 1; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (+(((((/* implicit */int) var_8)) >> (((var_2) - (3645102221252042401ULL)))))));
                            arr_27 [(_Bool)1] [(_Bool)1] [i_6] [i_6] [i_7] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_6 - 2] [i_8])));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [14ULL] [i_2 + 4]))));
            }
            for (short i_9 = 2; i_9 < 15; i_9 += 3) /* same iter space */
            {
                arr_31 [i_9 - 2] |= (-(((/* implicit */int) arr_0 [i_9 + 2])));
                var_22 = ((/* implicit */int) 4388915211486440296ULL);
            }
        }
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((arr_14 [(unsigned short)14] [(unsigned short)14]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10])))))) : (arr_21 [i_0] [i_0] [i_0])));
            arr_34 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_10] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [6ULL]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) (_Bool)1))))));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1916550894)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))));
        var_25 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) >= (arr_4 [i_0] [i_0] [i_0]))))) : (var_2)));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(0ULL))))));
    }
    var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((((/* implicit */unsigned long long int) var_1)) & (var_12)))))));
    /* LoopNest 3 */
    for (long long int i_11 = 4; i_11 < 15; i_11 += 4) 
    {
        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                {
                    var_28 = ((/* implicit */_Bool) arr_36 [i_11]);
                    arr_42 [i_11] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_11 - 3] [i_11 - 3] [i_13]))) ? (arr_32 [i_11 - 1] [i_12]) : (arr_12 [i_11 - 4] [i_11 - 4] [i_12 - 1] [i_12 + 3]))));
                }
            } 
        } 
    } 
}
