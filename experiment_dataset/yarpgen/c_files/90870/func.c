/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90870
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
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8)))) ? (((/* implicit */int) (unsigned char)121)) : (((((/* implicit */int) (unsigned char)216)) << (((2147483647) - (2147483646)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)117))))) ? ((+(((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) (unsigned char)3)));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) >= (393371130)));
        var_18 = (+(((/* implicit */int) (unsigned char)14)));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)205))))) ? ((-(((/* implicit */int) (unsigned char)242)))) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)242)))));
        arr_8 [i_1] = (+(-211080834));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), ((~((-(((/* implicit */int) (unsigned char)28))))))));
                        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)78))))) ? (((((/* implicit */int) (unsigned char)109)) + (4161536))) : (((((/* implicit */_Bool) 1447886621)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)14)))));
                        var_21 = (unsigned char)20;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            arr_21 [i_1] [i_2] [i_2] [i_1] = ((((/* implicit */int) (unsigned char)2)) / (((((/* implicit */_Bool) (unsigned char)14)) ? (1064205417) : (((/* implicit */int) (unsigned char)122)))));
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)35))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)80)) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)11)))) : (((/* implicit */int) (unsigned char)68))))));
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)232)))) ? (((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)100)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)102)))))));
                }
            } 
        } 
    }
}
