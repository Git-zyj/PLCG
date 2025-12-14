/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/997
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
    var_17 = ((/* implicit */short) var_11);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54283)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54283)))))) && ((!(((/* implicit */_Bool) ((signed char) (unsigned short)11252)))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1159268027)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1227253664)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 11837715658905343528ULL)) || (((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_2]))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)32767);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 6609028414804208087ULL)) || (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) ((signed char) (short)3911)))));
        }
        for (unsigned int i_5 = 4; i_5 < 12; i_5 += 1) 
        {
            var_23 = ((/* implicit */signed char) ((long long int) 1985705314));
            arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)15)) * (((/* implicit */int) (short)-1)))) == (((/* implicit */int) ((unsigned short) var_8)))));
        }
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_24 = ((/* implicit */short) ((unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) (short)3918)))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((~(var_15)))));
        var_26 = var_11;
    }
}
