/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85183
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(max((-731335606), (((/* implicit */int) var_17)))))))));
        arr_3 [i_0] &= min((((/* implicit */unsigned long long int) min((-731335614), (731335614)))), (var_4));
        arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_1])) : (-1813791719))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_2 - 1] [i_3] = arr_2 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_21 [i_1] [(unsigned short)8] &= ((/* implicit */short) min((((/* implicit */long long int) min(((short)7030), (((/* implicit */short) arr_13 [(unsigned short)4] [i_5 - 1]))))), (((long long int) arr_16 [i_1] [(unsigned short)10] [i_3] [i_4] [i_5 + 1]))));
                                var_21 ^= ((/* implicit */signed char) -731335604);
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_1 [i_3]))));
                                var_23 += ((/* implicit */short) (+((+(((/* implicit */int) (!(var_16))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+((+(var_13))))))));
                                arr_27 [i_1] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */int) (!(((((/* implicit */long long int) 1813791703)) == (((((/* implicit */_Bool) 1813791711)) ? (-8231769957682380360LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_1] = ((/* implicit */short) min((var_10), (((/* implicit */unsigned int) var_13))));
    }
    for (short i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        var_25 = ((/* implicit */long long int) max((3139574458U), (((/* implicit */unsigned int) (short)3))));
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_18 [i_8 - 1] [i_8 - 1] [i_8] [(short)4] [i_8] [i_8 - 1]);
        arr_33 [(signed char)13] = ((/* implicit */short) var_1);
    }
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    for (signed char i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_45 [(_Bool)1] [i_12] [i_11] [i_12] = ((/* implicit */int) (+(262143U)));
                            var_26 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_15 [(short)14] [i_10] [i_10] [i_9] [i_10 - 1]), (((/* implicit */unsigned short) (short)-7030))))), (min((((unsigned long long int) (short)-7045)), (arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_12 + 1] [i_9])))));
                            var_27 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (short)-14954)) ? (4294705153U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))))));
                            arr_46 [i_12] [i_12] [i_9] = ((/* implicit */unsigned int) arr_23 [i_9] [i_9] [i_10] [i_9] [i_12]);
                        }
                    } 
                } 
                var_28 += ((long long int) ((_Bool) arr_13 [i_9] [i_10 + 4]));
                var_29 |= ((/* implicit */short) (!((!(((/* implicit */_Bool) ((short) var_5)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_13 = 1; i_13 < 18; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_12)))));
                                var_31 ^= ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) arr_19 [i_13] [22ULL] [i_14] [2] [i_13] [2] [i_17]))), (((long long int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [6ULL] [i_14 + 2]))) : (((((/* implicit */_Bool) ((unsigned short) 1813791681))) ? (((/* implicit */unsigned int) -1813791719)) : (262143U))));
                            }
                        } 
                    } 
                    var_32 = (-((-(var_8))));
                }
            } 
        } 
        var_33 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((-763976756), (1340327146)))), (min((13015632711431338448ULL), (((/* implicit */unsigned long long int) var_2))))));
    }
    var_34 ^= ((/* implicit */short) (~(((/* implicit */int) (short)32767))));
    var_35 = var_15;
}
