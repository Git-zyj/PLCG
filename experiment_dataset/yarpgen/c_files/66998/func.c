/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66998
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) var_6)) : (var_4))) : ((+(var_5)))));
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0] [i_0 + 4]))))));
        var_18 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (unsigned short)29746)) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13438)))))))));
        var_19 = ((/* implicit */int) var_4);
        var_20 = ((/* implicit */short) arr_0 [i_0 + 4] [i_0 + 4]);
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_21 *= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [19U]))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (short)7))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_14)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_2]))))) : (((((/* implicit */_Bool) var_0)) ? (2341174290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))))))) : (((/* implicit */unsigned int) ((((var_10) >= (arr_5 [i_2]))) ? (((/* implicit */int) ((arr_5 [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))))) : (((/* implicit */int) ((short) arr_4 [i_2]))))))));
        var_23 = ((/* implicit */unsigned int) ((signed char) arr_5 [i_2]));
        var_24 = ((/* implicit */unsigned int) (unsigned short)47615);
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 24; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [i_3 - 2] [i_4] = ((/* implicit */unsigned int) ((int) var_5));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_10 [i_2] [i_3 - 2]))))) ? (((/* implicit */int) ((signed char) arr_2 [i_2] [i_3 - 1]))) : (((/* implicit */int) arr_10 [i_2] [i_3 + 1]))));
                    var_26 = ((/* implicit */unsigned short) var_10);
                    var_27 = ((/* implicit */signed char) ((short) max((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) var_4)))))));
                }
            } 
        } 
    }
}
