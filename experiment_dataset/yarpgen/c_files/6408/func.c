/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6408
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) var_1)) ? ((~(2605784884297627212LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_1])) : (var_11))) : (((/* implicit */int) ((short) arr_0 [(unsigned char)17])))))) ? ((~((~(((/* implicit */int) arr_1 [i_0] [(short)13])))))) : (((min((((/* implicit */int) (signed char)95)), (var_11))) & (((/* implicit */int) arr_0 [i_1 + 1]))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [(unsigned char)18] [i_1 + 1]);
                }
            } 
        } 
        arr_11 [4] &= ((/* implicit */long long int) (-(var_9)));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)768)) * (((/* implicit */int) (signed char)40))));
            arr_15 [i_0] = (-(((/* implicit */int) (unsigned char)16)));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_19 [i_4] [(signed char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)21])) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_14 [(short)3])) : (((/* implicit */int) (short)15872)))) : (((int) (signed char)92))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */int) arr_14 [i_4]))))) ? (((/* implicit */int) min(((short)-10514), (((/* implicit */short) (signed char)107))))) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))) : (var_4)));
        arr_20 [i_4] = ((/* implicit */short) min(((+(((/* implicit */int) arr_18 [i_4])))), (((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (short)-15903)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)127))))))));
    }
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_32 [i_7] = ((/* implicit */unsigned char) (-(min((arr_3 [i_7]), (((/* implicit */int) arr_31 [i_5 + 1] [i_7] [i_5 + 1] [i_7]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (arr_34 [i_5] [i_6] [i_7 - 1] [i_7])));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_23 [i_5 - 2]))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [6LL] [(unsigned char)0]))) ? (((((/* implicit */int) arr_2 [i_5] [24])) * (((/* implicit */int) arr_2 [i_5] [(unsigned char)2])))) : (((/* implicit */int) ((unsigned char) arr_2 [i_5] [(unsigned char)18])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_47 [i_9] = ((unsigned char) (-(arr_4 [i_10] [i_11])));
                        arr_48 [i_5] [i_9] [i_5] [i_11] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)101)))) > (((((/* implicit */_Bool) arr_24 [i_5 + 3])) ? (var_4) : (((/* implicit */int) arr_1 [i_5 + 2] [i_5 - 1]))))));
                        arr_49 [i_9] [i_10] [i_10] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) (unsigned char)30))) : (arr_3 [i_9])));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
}
