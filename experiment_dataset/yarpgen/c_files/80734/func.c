/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80734
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) arr_0 [(unsigned char)5]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
                arr_6 [i_0] [i_1] [i_0] = (unsigned short)2016;
                var_19 = ((short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)12]))) > (-1840286674201180047LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (min((((((/* implicit */_Bool) 2942680002333476804LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (12569605957862858876ULL))), (var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        arr_10 [i_2 + 1] = ((/* implicit */_Bool) var_9);
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1841728328)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) : (((((/* implicit */_Bool) var_18)) ? (67108863ULL) : (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3]))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_3))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((1818923221U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)10992))))))));
            arr_14 [i_2] = ((/* implicit */_Bool) ((short) var_1));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)32)) ? (808988680300510464ULL) : (((/* implicit */unsigned long long int) 4294967282U))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 2])) ? (arr_17 [i_7] [i_5 + 3] [i_5 + 1]) : (arr_7 [i_2] [i_2 - 2]))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_1))) != (((/* implicit */int) arr_13 [i_2 - 1]))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            arr_27 [i_2] = ((/* implicit */short) (+(12475286713905825174ULL)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                {
                    {
                        var_27 = ((unsigned char) (short)19770);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */short) var_11);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_10] [(unsigned char)8] [i_10])) + (((/* implicit */int) arr_25 [i_2] [i_2 - 2]))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_30 [(short)20] [(unsigned char)4] [(short)20] [i_10] [(_Bool)1] [(_Bool)1]))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2 + 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [i_11])))))));
                        }
                    }
                } 
            } 
            arr_36 [i_2 - 2] = ((/* implicit */long long int) var_13);
        }
        var_32 = ((/* implicit */unsigned char) ((long long int) arr_19 [i_2 - 2] [i_2 - 1]));
    }
    var_33 = ((/* implicit */long long int) var_0);
    var_34 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */_Bool) 6905596740678830547LL)) && (((/* implicit */_Bool) 6905596740678830547LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) >= (var_17))))));
}
