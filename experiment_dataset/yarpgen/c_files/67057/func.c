/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67057
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)149)) * (((/* implicit */int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (var_14)))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_1)) - (((/* implicit */int) ((unsigned char) 3995405409U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) var_17);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_19)))))) ? (arr_0 [i_0]) : ((((!(((/* implicit */_Bool) 3995405396U)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) var_2))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)65))), (17458556329115378409ULL)));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_3])) ? (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_4 - 1])) ? (var_2) : (((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)101)))))) : ((-(((/* implicit */int) var_3))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)238)) % (((((/* implicit */_Bool) max(((unsigned char)90), ((unsigned char)255)))) ? (((/* implicit */int) (_Bool)1)) : (var_2)))));
                                var_24 += ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)73)) && (((/* implicit */_Bool) -1326877003))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1 + 2] [i_5 + 1] [i_6 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (unsigned char)255)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) min(((unsigned char)88), ((unsigned char)159)));
                    arr_24 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_28 ^= ((/* implicit */signed char) min(((_Bool)1), ((!(((/* implicit */_Bool) var_19))))));
                        arr_29 [i_0] [i_1] [i_7] [i_1 + 2] = min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) arr_15 [i_1 + 1])) ? ((+(2519233707U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9 + 1] = max((((/* implicit */long long int) -112527418)), (-609966248511425117LL));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (3995405401U)));
                    }
                }
                /* vectorizable */
                for (unsigned int i_10 = 4; i_10 < 17; i_10 += 2) 
                {
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_27 [i_10 - 2] [i_10] [i_0] [i_1 + 2] [i_0] [i_0]));
                    var_30 = ((/* implicit */unsigned char) 299561870U);
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_31 |= ((/* implicit */long long int) 11019236106885659543ULL);
                        arr_39 [i_0] [i_1] [i_0] [i_10] [i_10] [i_11] = ((/* implicit */int) ((signed char) (unsigned char)145));
                        arr_40 [i_10] [i_1] [i_1] [i_11] [i_11] [i_11] = ((unsigned char) (~(((/* implicit */int) arr_21 [i_0]))));
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        arr_45 [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                        arr_46 [i_1] = ((/* implicit */_Bool) 3995405400U);
                    }
                    arr_47 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 3995405426U);
                }
                var_32 = ((/* implicit */unsigned long long int) 299561894U);
            }
        } 
    } 
}
