/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98553
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (max((min((1287866284U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) var_1))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0 + 3] [i_0 + 3] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (min((((/* implicit */unsigned int) arr_1 [(short)1])), (arr_2 [i_0]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_2 [0U]), (((/* implicit */unsigned int) var_8))))))))));
        var_12 = ((/* implicit */short) (((~(0U))) / (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-125))))), (((699607562U) + (699607558U)))))));
    }
    var_13 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_1 - 2]))));
            arr_10 [(_Bool)1] [(_Bool)1] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1])))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_15 = max((((_Bool) max((arr_9 [i_3]), (arr_6 [i_1] [i_3])))), (((_Bool) ((arr_7 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            var_16 -= (-(((/* implicit */int) var_5)));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                for (int i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) var_10);
                            arr_25 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [(unsigned short)5] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_5))))));
                        }
                        arr_26 [i_6] [i_6] [i_5] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) arr_19 [i_1] [i_1 - 2] [i_1]);
                        arr_27 [i_1] [i_1] [i_4] [7] [i_5] [1U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)40427)) : (var_8)));
                    }
                } 
            } 
            var_18 = ((/* implicit */signed char) ((((699607558U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >> (((((/* implicit */int) (unsigned short)40775)) - (40757)))));
            arr_28 [i_1] = ((/* implicit */int) ((((arr_6 [i_4] [i_1]) ^ (var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 1] [i_4])))));
            arr_29 [i_4] = ((/* implicit */unsigned long long int) ((arr_14 [i_1 - 1] [i_1 - 1] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        }
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 7; i_9 += 2) 
            {
                for (signed char i_10 = 4; i_10 < 9; i_10 += 2) 
                {
                    {
                        arr_41 [i_1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_8] [i_8]))) * (arr_11 [i_1] [i_1])))))))));
                        arr_42 [i_1 + 1] [i_1 + 1] [(short)1] [(short)1] = ((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) ((var_3) ? (var_2) : (((/* implicit */int) arr_22 [i_1])))))))));
                        var_19 = ((/* implicit */unsigned int) ((var_5) ? ((~(((/* implicit */int) max((var_3), ((_Bool)1)))))) : (((/* implicit */int) ((_Bool) 3337497205U)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 6; i_13 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 381926650U))) || (((/* implicit */_Bool) ((signed char) var_1))))))));
                        var_21 = ((/* implicit */_Bool) min((max((arr_38 [i_11 - 1] [i_1 - 1]), (arr_38 [i_11 - 1] [i_1 - 1]))), (((/* implicit */unsigned short) ((signed char) var_5)))));
                        var_22 += ((arr_7 [(_Bool)1]) < (((/* implicit */unsigned int) ((((/* implicit */int) ((var_9) || ((_Bool)1)))) / (((/* implicit */int) var_9))))));
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_53 [i_12] = ((/* implicit */unsigned int) (signed char)-115);
                            arr_54 [i_12] [i_11] = min((min((((/* implicit */unsigned int) arr_5 [i_14])), (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1 - 1])) * (((/* implicit */int) var_10)))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_57 [i_15] [i_11 + 1] [i_13] [(_Bool)1] [(signed char)0] [i_11 + 1] [(short)7] = ((/* implicit */unsigned int) ((min((var_2), ((-(((/* implicit */int) arr_44 [i_11] [i_12])))))) / (((/* implicit */int) ((_Bool) arr_47 [i_13 - 1] [i_11 - 1] [i_1 + 1])))));
                            arr_58 [i_15] [(_Bool)1] [i_15] [0U] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) / (min((arr_6 [i_15] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1])))));
                            arr_59 [i_1] [i_11] [i_11] [i_12] [(unsigned short)2] [i_13] [i_15] = ((/* implicit */signed char) min(((~(((arr_49 [i_12] [i_12] [i_12] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) arr_0 [i_11]))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
        }
    }
    var_24 = ((/* implicit */signed char) var_10);
}
