/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71457
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118)))))));
                var_12 |= ((/* implicit */int) arr_0 [(short)6] [i_1]);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_13 = ((/* implicit */short) max((((/* implicit */int) var_7)), (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) - (12218)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [1] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_3] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_14 = ((/* implicit */unsigned char) arr_3 [(unsigned short)1] [i_1]);
                    }
                    for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_4 - 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) max((var_8), (((/* implicit */int) arr_2 [i_4 - 3] [(_Bool)1] [i_4 - 3])))))));
                        var_15 -= ((/* implicit */short) ((int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3])))));
                    }
                    var_16 = ((/* implicit */long long int) arr_1 [(signed char)9] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned short) var_7);
                                arr_22 [i_5] [i_5] [3ULL] [i_5] [i_2] [i_5] = (-(max((-1357049887), (((/* implicit */int) (unsigned short)63)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 |= ((/* implicit */short) (-(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_36 [i_7] [i_8] [(signed char)6] [1] [i_11] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (unsigned char)90))))));
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8 - 1] [i_8]))) < ((~(var_4))))))));
                                var_20 ^= ((/* implicit */unsigned short) (((~((-(var_8))))) < ((-((-(((/* implicit */int) var_10))))))));
                                arr_37 [(_Bool)1] [i_8] [(short)13] [i_10 - 2] [7ULL] [(unsigned short)15] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7] [i_8] [i_9])))))));
                                var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_30 [i_7] [i_11] [i_8 + 1])))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_8 - 1]))) ^ (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_8 + 1] [i_10 + 2] [i_8 + 1] [i_9] [i_10] [i_11])) || (((/* implicit */_Bool) arr_30 [i_10 + 3] [i_10 - 2] [i_10 + 3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_8 + 1] [i_8])) || (((/* implicit */_Bool) arr_31 [i_8 + 1] [i_8 + 1] [i_8])))))));
                        var_23 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_28 [i_8 + 1] [i_8 - 1])) ? (arr_28 [i_8 + 1] [i_8 - 1]) : (((/* implicit */long long int) var_8))))));
                    }
                    var_24 = ((/* implicit */long long int) arr_24 [i_7] [11LL]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) - (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))))));
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((signed char) var_10))))) : (max((var_6), (((/* implicit */long long int) var_0))))));
}
