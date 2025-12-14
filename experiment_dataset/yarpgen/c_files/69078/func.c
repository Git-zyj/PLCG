/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69078
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((+(((/* implicit */int) (unsigned short)49534))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_5))));
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_4 [i_1 - 1] [i_1 - 1]))) | (((arr_4 [i_1 - 2] [i_1 + 1]) | (arr_4 [i_1 - 1] [i_1 + 1])))));
        }
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                arr_14 [i_3] = (unsigned char)252;
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_3 + 1]);
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(0LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6000))) : (((unsigned long long int) ((((/* implicit */int) arr_7 [i_0])) ^ (((/* implicit */int) arr_0 [i_6])))))));
                            arr_23 [i_0] [i_2] [i_4] [i_2] [i_6] = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                var_20 += ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)6000)), (((((/* implicit */_Bool) ((int) (signed char)70))) ? (-8119799771731254197LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                arr_26 [i_0] [i_2] [i_7] = ((/* implicit */unsigned char) (+((+(arr_20 [i_0] [i_2] [i_2] [i_7 + 2] [i_7] [i_2])))));
                var_21 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+((+(((/* implicit */int) max(((signed char)-7), (((/* implicit */signed char) var_9))))))))))));
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_23 = ((/* implicit */long long int) var_3);
                var_24 = ((/* implicit */_Bool) (unsigned short)63148);
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 2; i_10 < 21; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_37 [i_11] = max((((((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_0] [i_0] [(signed char)5] [i_10] [i_11] [i_11])) + (((/* implicit */int) (signed char)19))))) + (((((/* implicit */_Bool) 1997687971)) ? (((/* implicit */long long int) 3209939377U)) : (-1LL))))), (((long long int) ((((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_10 - 2] [i_10 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58581))) : (var_8)))));
                            arr_38 [i_0] [i_2] [(unsigned char)6] [i_9] [5U] [i_11] [i_11] = ((/* implicit */signed char) ((_Bool) ((signed char) ((signed char) arr_17 [i_0] [i_0] [i_9]))));
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_32 [i_0] [i_9 + 1] [i_10 - 2] [i_9]))) ? (((12U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_10 + 1] [i_10 + 1] [i_11] [i_11] [i_10 + 1] [i_11]))))) : (((/* implicit */unsigned int) (+(1997687971))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    arr_42 [i_0] [i_2] [i_9] [i_12] = ((/* implicit */unsigned short) 4294967265U);
                    var_26 = 8593419933827433435LL;
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_33 [i_13] [i_0] [(unsigned char)20] [i_0] [i_0]))));
                    var_29 = ((/* implicit */unsigned short) var_8);
                    var_30 = (((!((!(((/* implicit */_Bool) 5311286277832384119LL)))))) || ((!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_13] [i_13]))))));
                }
            }
            arr_47 [i_0] = ((/* implicit */unsigned short) -8740298469943101306LL);
            arr_48 [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (max((var_8), (((/* implicit */long long int) arr_29 [i_2] [i_2] [i_0] [i_0]))))));
        }
        var_31 = ((/* implicit */unsigned short) ((max((5954845322450013164ULL), (5954845322450013164ULL))) * (((unsigned long long int) ((865799705U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 1; i_14 < 18; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_58 [i_0] [i_14] [i_15] [i_16] [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_15] [i_15]);
                                var_32 += ((/* implicit */long long int) ((unsigned short) ((arr_56 [i_0] [i_14] [i_17 - 1] [i_16] [i_16 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))))));
                            }
                        } 
                    } 
                    var_33 += ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_0] [i_0] [i_14 + 1] [i_15])) / (((((/* implicit */_Bool) ((arr_57 [i_15] [i_15] [i_15] [i_14 + 3] [i_14 + 2] [i_0] [i_0]) * (((/* implicit */unsigned long long int) 3642852903184350782LL))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)37732))))));
                }
            } 
        } 
    }
    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
    {
        var_34 = ((/* implicit */_Bool) arr_18 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
        arr_62 [i_18] = ((/* implicit */long long int) arr_57 [i_18] [(unsigned short)10] [i_18] [i_18] [i_18] [i_18] [3U]);
        var_35 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((arr_28 [i_18] [i_18]), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_18]))) ^ (arr_8 [i_18] [i_18]))) : (((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (14)))))))));
        var_36 = ((/* implicit */_Bool) (+(var_0)));
        arr_63 [i_18] [i_18] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_18])), (865799705U)))) ? ((+(var_8))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_12 [i_18] [i_18] [i_18] [i_18]))))))));
    }
    var_37 += var_9;
}
