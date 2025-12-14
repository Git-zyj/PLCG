/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6681
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((long long int) (unsigned short)36067))));
                        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9)));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0])) ? (((/* implicit */long long int) var_14)) : (arr_7 [i_0 - 1] [i_0 + 1])));
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) var_2))));
        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_10))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_14)) : (7188898188843791911LL)))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (short)15072);
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */short) var_7);
                            arr_21 [(unsigned char)7] [i_0] [9U] [i_4] [i_4] [i_7] [i_7] = var_11;
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_0] [i_4] [0LL] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_6))));
        }
    }
    /* vectorizable */
    for (long long int i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (unsigned short)29458))))) && (((/* implicit */_Bool) arr_3 [i_8] [i_9] [(_Bool)1]))));
                                var_25 += ((/* implicit */unsigned short) ((short) var_0));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            {
                                arr_43 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || ((_Bool)1)));
                                var_26 = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                    arr_44 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) var_1)))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) ((signed char) arr_9 [i_8] [i_8] [(unsigned char)2]));
    }
    var_28 = ((/* implicit */short) (~(var_7)));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))));
}
