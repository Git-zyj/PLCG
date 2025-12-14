/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60500
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
    var_11 = ((/* implicit */unsigned long long int) min((2556195781U), (((/* implicit */unsigned int) (+(((int) 1738771514U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 3] [i_1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                arr_6 [i_0 + 1] = var_8;
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_12 [i_3] [3] = ((/* implicit */unsigned char) ((arr_8 [i_2 + 2]) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 2]))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        arr_19 [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_2])))) ? (((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_4] [(unsigned short)5])))) : (((/* implicit */int) arr_2 [i_2 + 3] [i_3 + 1] [i_4 + 1]))));
                        arr_20 [i_2] [i_3] [i_2 + 4] [i_2 + 2] = var_7;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (long long int i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_27 [i_6] [i_3] [i_6] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_2 + 3] [i_2 + 3] [i_6] [i_7 + 3])) : (((/* implicit */int) arr_25 [i_2 + 1] [i_7 - 1] [i_3] [i_7]))));
                        var_12 = ((/* implicit */long long int) var_8);
                        arr_28 [i_2] [i_3] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) var_6);
                        arr_29 [3ULL] [2ULL] [i_3] [i_3 + 1] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? ((+(2556195781U))) : (0U)));
                    }
                } 
            } 
        }
        var_13 = ((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 3])) ? (((/* implicit */long long int) arr_0 [i_2 + 4])) : (arr_23 [i_2 - 1] [i_2 - 1] [i_2] [i_2]));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 525770075)) ? (2556195781U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)13] [i_2 + 4]))))) << (((arr_9 [i_2 + 4]) - (544822670)))));
        arr_30 [i_2] [i_2 - 1] = arr_22 [(_Bool)0] [(_Bool)0] [(_Bool)0];
    }
    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        arr_34 [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(-155686260)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8] [i_8 + 1])) ? (var_5) : (((/* implicit */int) var_0)))))))));
        arr_35 [i_8] = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (arr_33 [16LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (var_7)))));
        arr_36 [i_8] [i_8] = ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 155686259)) ? (2367977736U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41823))))), (min((1871427416U), (((/* implicit */unsigned int) var_10))))))) == ((+(min((arr_32 [i_8] [i_8 + 1]), (((/* implicit */unsigned long long int) arr_4 [i_8])))))));
        arr_37 [i_8 + 1] = ((/* implicit */int) var_7);
    }
}
