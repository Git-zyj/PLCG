/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87717
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
    var_18 = ((/* implicit */unsigned short) 4294967283U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_11);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3])) ? (((((/* implicit */_Bool) 72057594037927808LL)) ? (var_6) : (((/* implicit */long long int) arr_3 [i_0 - 3] [i_1] [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)-120))))))))));
                        var_20 -= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)53993))));
                        var_21 -= ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_3])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_3] [i_3])));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1]);
        }
        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
        {
            var_23 *= ((/* implicit */short) arr_1 [i_4] [1ULL]);
            var_24 = arr_4 [i_0 - 2];
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_15 [i_5] = ((/* implicit */unsigned long long int) (unsigned short)53989);
        var_26 = var_8;
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((8526849015944654800ULL) == (((((/* implicit */_Bool) (signed char)-120)) ? (arr_12 [i_5]) : (((/* implicit */unsigned long long int) var_8)))))))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_27 = ((/* implicit */int) 16925045338217514305ULL);
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_6])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)119)) : (var_9))))))));
    }
}
