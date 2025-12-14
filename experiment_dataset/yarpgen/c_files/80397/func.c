/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80397
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) (~(5577412284473806059LL)));
        var_17 = ((/* implicit */unsigned long long int) var_12);
        var_18 = ((/* implicit */int) (-(arr_1 [i_0 - 2])));
    }
    for (short i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1 + 1])) >> (((/* implicit */int) arr_4 [i_1 - 2])))) != (((arr_4 [i_1 - 3]) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_4 [i_1 - 3])) : (((var_7) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_4 [(unsigned char)9]))))));
            arr_8 [i_2] = ((/* implicit */long long int) ((1135055780U) << (((134217216U) - (134217193U)))));
        }
        arr_9 [i_1 + 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1]))))), (((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (5577412284473806059LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))))) % (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)109)) : (var_8))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_3 [i_3])))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1]))))) : ((~(((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 6; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) min((arr_11 [i_4] [i_1]), (6U)))) ? ((~(((/* implicit */int) (unsigned short)61965)))) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_6))))))));
                                arr_21 [i_3] = (unsigned char)147;
                                var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max(((short)-15740), (((/* implicit */short) (signed char)109))))) ? (((/* implicit */int) arr_19 [i_1] [i_1 + 1] [i_6])) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-6))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((arr_4 [i_1 - 2]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_3 - 1] [i_1]))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (2U)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_7 = 4; i_7 < 7; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_7] = ((unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_28 [i_8]))), (((/* implicit */unsigned long long int) (~(var_1))))));
                        arr_30 [i_7] [i_1] [(unsigned char)5] [i_8] [i_9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_7])) ? (max((4294967295U), (arr_11 [i_9] [i_7]))) : ((~(3748484757U)))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_3)))))))) << (((((/* implicit */int) (unsigned short)33024)) - (33005)))));
    var_24 = ((/* implicit */unsigned int) var_15);
}
