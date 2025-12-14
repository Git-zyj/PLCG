/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73729
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] &= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-16028))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) max((var_18), (var_3)));
        arr_7 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)3531)) ? (((/* implicit */int) arr_6 [(short)8] [(short)8])) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_10))));
            arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_8))));
            arr_14 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_11 [i_3 + 3] [i_3 - 3])) : (((((/* implicit */int) arr_11 [(short)24] [i_3])) + (((/* implicit */int) (short)11))))));
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_4] [i_2]), ((short)-1)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) max((arr_8 [i_2]), (arr_10 [i_4] [(short)7] [i_2]))))))) ? (max((((/* implicit */int) ((short) arr_15 [i_2]))), (((((/* implicit */_Bool) (short)-12544)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [(short)12])) : (((/* implicit */int) arr_16 [i_2] [i_4])))))) : (((((/* implicit */_Bool) max(((short)-19683), ((short)-1370)))) ? (((/* implicit */int) min((var_5), ((short)30518)))) : (((/* implicit */int) var_8))))));
            var_19 ^= arr_18 [i_2] [i_4];
            arr_20 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2])) || (((/* implicit */_Bool) arr_15 [i_2]))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4])) ? (((/* implicit */int) (short)-22303)) : (((/* implicit */int) arr_16 [i_4] [i_4]))))));
            arr_21 [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7957)) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_11 [i_2] [(short)23])))) : (((/* implicit */int) (short)24773))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_15 [i_4]), ((short)-22284))))))) : (((/* implicit */int) ((((/* implicit */int) (short)9)) != (((/* implicit */int) ((short) (short)1023))))))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_20 = arr_18 [i_5] [i_2];
            var_21 = arr_17 [i_2] [i_2];
        }
        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            arr_28 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_27 [i_2] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32757)))) : (((((/* implicit */_Bool) arr_22 [(short)21] [i_2] [i_2])) ? (((/* implicit */int) ((short) (short)-1))) : (((((/* implicit */int) var_9)) * (((/* implicit */int) (short)15872))))))));
            arr_29 [i_2] [i_6] [i_6] = arr_8 [i_2];
            arr_30 [i_2] = ((/* implicit */short) ((((/* implicit */int) min((arr_23 [i_2] [i_2] [i_6]), (arr_25 [i_6])))) <= (((/* implicit */int) (short)(-32767 - 1)))));
        }
        var_22 -= ((/* implicit */short) (+(((/* implicit */int) min((max((var_9), (var_5))), ((short)-1))))));
    }
    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-23988)) ? (((/* implicit */int) (short)126)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)16614)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) ((short) min(((short)6388), ((short)-121)))))));
    var_24 = (short)(-32767 - 1);
}
