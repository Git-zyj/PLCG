/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94747
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
    var_15 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_16 |= ((/* implicit */short) (((~(((/* implicit */int) var_6)))) % (((/* implicit */int) (unsigned short)58515))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~((~(((/* implicit */int) (short)-9269)))))))));
            var_18 ^= ((/* implicit */signed char) arr_3 [i_0 + 1] [i_0 - 2]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(var_1)))) % (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_4 [i_0 + 1] [i_0 + 1])))));
                        arr_10 [i_1] &= var_10;
                        arr_11 [(short)11] [i_1] [i_1] [i_0] [i_3 + 2] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_7))))) % ((~(-4033975111454031655LL)))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-4033975111454031655LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_0] [i_4] [i_0] [i_4] [i_0 + 2]))))) + (9223372036854775807LL))) >> (((arr_4 [i_4] [i_4]) - (9019268689145110988LL)))));
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 8; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((long long int) (unsigned short)53285));
                        arr_21 [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)9283))))));
                        var_21 = ((/* implicit */int) var_11);
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_26 [i_0] [5] [i_0] [8] [i_7] = ((/* implicit */short) var_8);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [(unsigned short)5] [(unsigned short)5])) ? (((/* implicit */int) var_5)) : (arr_12 [i_0] [i_0 - 2] [i_0])));
                        }
                    }
                } 
            } 
            arr_27 [i_0] [i_4] [i_4] |= ((/* implicit */int) var_12);
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (short)18831))))) || (((/* implicit */_Bool) (+(arr_4 [i_0] [(signed char)6]))))));
        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1211694781)))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)17)))) : (((/* implicit */int) var_6))));
    }
}
