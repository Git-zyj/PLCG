/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73517
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
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), (var_10)));
    var_12 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) 55234577U);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (var_4)))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -1121435787)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_1])) ? (arr_0 [i_2]) : (var_8)))) : (max((arr_4 [i_0] [13LL]), (((/* implicit */unsigned long long int) var_3))))))));
                    var_15 = ((/* implicit */long long int) var_7);
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_16 = (!(((/* implicit */_Bool) arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) var_7);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 1] [i_5] [i_4])) ? ((~(arr_4 [7LL] [12U]))) : (((/* implicit */unsigned long long int) var_5))));
                                var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) var_5)) / (var_10)))));
                                arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((_Bool) (+(var_5))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) || (arr_2 [i_3] [i_4 - 1])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    arr_20 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) var_2);
                    /* LoopSeq 2 */
                    for (short i_7 = 4; i_7 < 12; i_7 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned char) ((long long int) arr_6 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1]));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(var_8))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_23 *= var_9;
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        arr_27 [i_6] = ((/* implicit */unsigned short) ((arr_26 [7U] [(unsigned short)8] [i_6]) <= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_6] [i_8])))));
                        var_25 = ((/* implicit */unsigned int) arr_18 [i_6] [i_1] [i_0]);
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0]))));
                            var_27 = ((/* implicit */int) var_10);
                            arr_31 [i_0] [i_1] [i_6] [i_8] [(signed char)7] = ((/* implicit */unsigned long long int) ((((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))))) ^ (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))))));
                            var_28 = ((/* implicit */unsigned int) (signed char)8);
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        arr_35 [i_1] = ((/* implicit */signed char) var_9);
                        arr_36 [i_0] [(_Bool)1] [i_0] [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_10 + 1] [i_6] [i_6] [i_0]))));
                        var_29 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    }
                }
                var_30 = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (+(var_4)));
    var_32 |= ((/* implicit */unsigned long long int) var_3);
}
