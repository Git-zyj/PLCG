/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93650
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
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) (~(((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
            var_12 = ((/* implicit */int) arr_1 [i_0]);
            arr_5 [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)2)))), (((/* implicit */int) (!(arr_1 [i_0]))))));
            var_13 = ((/* implicit */int) arr_3 [7U] [(signed char)20] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)203)) ? (6812889651747400227LL) : (((/* implicit */long long int) arr_11 [i_2 + 1] [i_0 + 1] [i_0 + 2]))));
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_2 + 2] [i_3 - 1] [i_3 - 1]))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) > (((/* implicit */int) arr_3 [i_0 + 1] [i_2 - 1] [8ULL])))))));
            var_17 = ((/* implicit */signed char) (-(-340087907)));
        }
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0 + 1] [i_0 - 1]), (((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0 + 1] [i_0]) < (((/* implicit */int) arr_7 [(short)17] [i_0 + 1] [i_0])))))) : (((((/* implicit */_Bool) (short)-3804)) ? (arr_10 [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : (((/* implicit */long long int) arr_8 [i_0] [i_0 + 1] [(_Bool)1]))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            arr_18 [i_5] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)22))))) ? ((+(((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) min((arr_19 [i_7 + 1] [i_7] [i_7] [i_0]), (arr_19 [i_7 - 1] [i_7] [i_7] [i_5]))))));
                        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)80))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((max((((((/* implicit */int) (signed char)-67)) % (((/* implicit */int) (short)63)))), ((~(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0])))))) | (((((/* implicit */_Bool) arr_21 [i_0 + 2] [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) arr_21 [i_0 + 2] [i_5 + 3] [i_5] [i_5]))))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) (short)-53))));
        var_22 += ((/* implicit */signed char) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 3]))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (arr_15 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6]) : (((/* implicit */int) (_Bool)1))))), (1837469224U))))));
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */long long int) arr_15 [i_8] [i_8] [(unsigned char)4]);
        var_23 = min((max((arr_3 [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8] [i_8]))), (((/* implicit */unsigned short) ((short) (signed char)98))));
        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) (-(0ULL)));
    }
    var_24 = ((/* implicit */unsigned char) var_6);
}
