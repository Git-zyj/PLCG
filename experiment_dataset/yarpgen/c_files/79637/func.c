/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79637
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
    var_11 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [(short)13] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                    var_12 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)26417)))))));
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_18 [i_0] [(unsigned short)4] [i_3] [i_4] [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        arr_19 [i_5] [i_4] [i_3 - 2] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_13 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))));
        var_14 &= ((/* implicit */unsigned short) var_10);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_15 |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
        arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        var_16 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
        var_17 = var_1;
    }
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (short)-6985)))) : (((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_2))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    arr_35 [i_9] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
                    arr_36 [i_9] [i_8] = ((short) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
