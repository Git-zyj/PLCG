/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/990
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
    var_13 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) (_Bool)1);
        var_15 ^= ((/* implicit */long long int) max((max((min((arr_3 [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (((~(arr_2 [(unsigned short)12] [(unsigned short)12]))) & ((~(arr_1 [i_0]))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 631895270294003959ULL)) ? (0) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 |= ((/* implicit */unsigned int) 8684488977942681223LL);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) -1)), (4294967295U))) << (((((((/* implicit */_Bool) 0LL)) ? (arr_8 [i_1]) : (arr_8 [i_1]))) + (7921503318013549694LL)))));
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 361224979)) ? (((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) var_2))))) : ((+(((8310536186557815988LL) << (((((/* implicit */int) (unsigned short)65534)) - (65534)))))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])))), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((signed char) min((8310536186557815988LL), (arr_2 [i_2] [i_2]))))))))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_4 [i_1]), ((unsigned short)1)))) != (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))) == (arr_3 [i_1] [i_1])));
            arr_15 [i_1] [i_1] [i_1] &= ((/* implicit */_Bool) arr_8 [i_1]);
            var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)7)))));
        }
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) 34359738367LL);
        arr_20 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)24)), ((short)-29798)));
        var_21 = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    }
}
