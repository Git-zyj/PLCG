/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66039
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)27435))))) ? (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_2]) <= (((/* implicit */unsigned int) var_15))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) >= (-2147483647))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0)))) | (((unsigned int) (short)-1034))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_18 = ((((_Bool) var_0)) ? (max((((/* implicit */int) var_10)), (var_15))) : (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)22734)))));
                    var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_5 [i_4] [i_3] [i_4])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_17 [i_6] = (!(var_9));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_26 [i_5] [(unsigned short)1] [5U] [i_7] [i_6] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                            var_21 -= ((/* implicit */unsigned int) ((short) arr_23 [i_9] [i_5] [i_7] [i_8] [i_9]));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (short)-32756)) + (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_23 [i_7] [i_5] [i_5] [i_5] [i_5])))))))));
            }
            for (int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((signed char) var_3));
                            arr_38 [i_5] [i_5] [i_10] [i_5] [i_5] |= ((/* implicit */_Bool) ((signed char) ((((-1073741824) + (2147483647))) >> (((var_1) + (967167930))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            arr_44 [i_6] [i_13] [i_10] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6] [i_6])) || (((((/* implicit */_Bool) (short)16378)) || ((_Bool)0)))));
                            arr_45 [i_5] [i_5] [i_5] [i_13] [i_6] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (((/* implicit */int) (short)-32756)))) ^ (((((/* implicit */int) arr_2 [19U] [i_6] [19U])) + (-6)))));
                        }
                    } 
                } 
                arr_46 [i_6] [i_6] [i_6] = ((/* implicit */int) ((_Bool) arr_0 [i_6]));
                var_24 = ((/* implicit */_Bool) ((unsigned short) 1073741814));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        arr_54 [4U] [i_16] [i_15] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_15] [i_5]))));
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                        arr_55 [11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [i_17] [i_5] [i_5]))))) && (((/* implicit */_Bool) arr_41 [i_5] [i_16]))));
                    }
                } 
            } 
            var_26 += ((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)32763))));
        }
        arr_56 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_8)))))) : (arr_24 [i_5] [i_5] [i_5] [(short)12] [(short)12] [i_5])));
    }
    var_27 += ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
}
