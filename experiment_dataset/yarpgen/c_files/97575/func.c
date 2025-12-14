/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97575
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_13 &= ((/* implicit */unsigned char) var_4);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_18 [i_1] [i_4] [i_3] [i_2] [i_2 + 1] [i_1] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_11 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) arr_13 [i_1] [i_1] [i_4]))))) <= (((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_17 [i_1 + 2] [i_2] [i_3] [9ULL] [9ULL] [i_3])))))));
                        arr_19 [i_1] = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_1 - 1] [(_Bool)1] [i_3] [i_4])) ? (var_10) : (var_0))) / (((((/* implicit */int) var_11)) % (arr_11 [i_1 - 1] [i_2 - 1] [i_3] [i_4]))))));
                        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8U] [8U])) ? (((arr_5 [i_4]) ? (((/* implicit */int) var_9)) : (arr_11 [i_3] [i_3] [(short)1] [i_3]))) : ((-(((/* implicit */int) arr_10 [(unsigned char)8] [i_3]))))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_9 [i_1] [i_4])))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((short) arr_6 [(unsigned short)8] [i_1]));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_16 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((var_7) ? (var_10) : (arr_11 [i_1 - 1] [i_1] [i_5] [i_5]))))));
            arr_22 [i_1] [i_5] [i_5] = ((/* implicit */signed char) arr_21 [(unsigned char)11] [i_5] [i_5]);
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_25 [(unsigned char)6] [(unsigned char)6] |= ((/* implicit */short) min((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_10 [(_Bool)1] [i_6])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_6] [i_6] [i_1] [i_1]) : (((/* implicit */int) arr_12 [(unsigned char)12]))))) ? (((/* implicit */int) max((var_11), (var_11)))) : (((var_1) - (var_0)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (max((var_10), (((/* implicit */int) var_9))))))) : ((~((-(var_12)))))));
                var_18 = ((/* implicit */short) (~((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_2))))))));
            }
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_6])) ? (((/* implicit */int) arr_24 [i_6] [i_1] [i_1])) : (arr_14 [i_1 + 1]))) != (var_0))))));
        }
    }
    /* vectorizable */
    for (short i_8 = 3; i_8 < 15; i_8 += 1) 
    {
        var_20 *= ((/* implicit */short) (~((-(((/* implicit */int) arr_5 [i_8]))))));
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_8] [i_8])) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_6 [i_8] [i_8])))));
    }
    var_21 += ((/* implicit */unsigned int) var_1);
    var_22 ^= ((/* implicit */signed char) var_7);
}
