/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92903
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(max((((/* implicit */int) arr_0 [i_0 - 1])), (1946342657))))))));
        var_20 = ((/* implicit */short) var_11);
        var_21 -= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)114)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (_Bool)1))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (max(((-(var_2))), (arr_1 [i_1])))));
        arr_9 [i_1] [i_1] &= ((/* implicit */int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) <= ((+(((var_3) & (228038231)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_23 = var_12;
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), ((~(((/* implicit */int) min(((unsigned char)9), (arr_7 [i_1]))))))));
        }
        var_25 = min((min((((/* implicit */int) arr_3 [i_1] [i_1])), (min((-2147483643), (var_15))))), (2147483647));
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_14 [(short)2] = min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (-1625005466))))))), (var_11));
        var_26 += ((/* implicit */_Bool) var_3);
        var_27 = ((/* implicit */unsigned char) var_10);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_28 = ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (short)0)) : (1262976962));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_29 = (!(((/* implicit */_Bool) (short)-32012)));
                    var_30 = ((/* implicit */int) min((var_30), ((-(((var_2) / (((/* implicit */int) (short)(-32767 - 1)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 14; i_7 += 1) 
        {
            for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
            {
                {
                    arr_27 [i_7] [i_7] = (~(((/* implicit */int) arr_10 [i_4] [i_8 + 1] [i_7 + 1])));
                    var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_7 + 1]))))));
                    arr_28 [i_7] [i_7] [i_7] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_8 + 3] [i_7 - 1] [i_7 + 1]))));
                    var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)14))));
                }
            } 
        } 
        var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2)) ? (((/* implicit */int) (short)32012)) : (var_9)));
    }
}
