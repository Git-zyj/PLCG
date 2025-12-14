/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78737
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
    var_19 = ((/* implicit */signed char) var_5);
    var_20 += ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                arr_10 [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_2 + 2]), (var_14)))) || (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (349358826))))));
                var_21 = ((/* implicit */long long int) ((131071U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            var_22 = ((/* implicit */short) arr_5 [i_0 - 2] [i_0 - 2]);
            arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1])) || ((!((_Bool)0))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                {
                    {
                        arr_18 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_12 [i_4 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]), ((signed char)-88))))));
                        arr_19 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [i_4 - 1]))));
                        arr_20 [i_3] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))), (arr_9 [i_0 - 1]))) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_6 [i_0] [i_1]) : ((+(var_0))))))));
                        arr_21 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_3 [i_1]) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))) < ((-(((/* implicit */int) var_16))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) >= (var_15)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((((/* implicit */long long int) (-(var_7)))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)88))) : (var_0)))));
            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_36 [i_9] [i_8] [i_7] [i_0] [i_6] [i_0] |= ((/* implicit */int) arr_26 [i_0]);
                            var_26 *= ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-72)), ((short)31690))))));
                            var_27 += ((/* implicit */short) max((((((/* implicit */int) (short)-32121)) % ((~(((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7 - 1]))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((/* implicit */unsigned short) ((short) arr_14 [i_0 - 1] [10U]))), (arr_14 [i_0] [(_Bool)1]))))));
        }
        arr_37 [i_0] = ((/* implicit */_Bool) var_4);
        var_29 = ((/* implicit */_Bool) arr_16 [6] [i_0] [i_0] [i_0 - 2] [6]);
        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(12757646740157692776ULL))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))) ? (max((((arr_30 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_17))), (((/* implicit */unsigned long long int) (!((_Bool)1)))))) : (min((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_4))))));
        var_31 -= ((/* implicit */unsigned short) var_0);
    }
    var_32 &= ((/* implicit */signed char) var_3);
}
