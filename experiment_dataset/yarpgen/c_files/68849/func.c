/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68849
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
    var_20 &= var_5;
    var_21 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 106280378U)) ? (((/* implicit */int) min(((short)(-32767 - 1)), ((short)(-32767 - 1))))) : (((/* implicit */int) var_15))))), (5810519322480653417ULL)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_22 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))));
            var_23 = ((/* implicit */int) var_3);
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) var_18)))));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 3])) - (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1])))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_4 [i_0]))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) <= (arr_8 [i_0] [i_2])));
            arr_10 [i_2] = ((/* implicit */_Bool) -1135354406);
        }
        arr_11 [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : ((+(var_13)))))) ? (var_13) : (((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)511), (((/* implicit */short) var_17)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (1135354405)))));
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_1))) >= (((/* implicit */int) ((signed char) arr_15 [i_3] [i_3])))));
    }
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4 + 1] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
        var_27 = ((/* implicit */_Bool) arr_15 [i_4] [i_4]);
    }
    var_28 &= ((/* implicit */short) var_8);
}
