/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56900
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [(unsigned short)3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) max(((unsigned short)25607), (arr_1 [i_0] [i_0])))) != (((/* implicit */int) max((arr_3 [i_0]), (arr_1 [i_0] [i_0])))))))));
        var_17 |= arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)21611)) - (((((/* implicit */int) (unsigned short)39914)) + (((/* implicit */int) (unsigned short)34778))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [(unsigned short)4] [i_4] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) (unsigned short)39872)) - (39864)))))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_4] [i_2] [i_3] [i_1])))), (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(unsigned short)9] [i_4]))));
                                var_19 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned short)2])) ? (((/* implicit */int) (unsigned short)2003)) : (((/* implicit */int) arr_9 [i_1] [(unsigned short)2])))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1])))))) ^ (((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0] [(unsigned short)5] [i_0] [i_2]), ((unsigned short)39923))))));
                                arr_16 [i_1] [i_2] [i_3] = var_9;
                            }
                        } 
                    } 
                    var_20 = (unsigned short)39907;
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_31 [i_5] = arr_22 [i_8];
                                arr_32 [i_5] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_9] [i_5])) < (((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)19))))));
                            }
                        } 
                    } 
                    arr_33 [i_7] [i_5] [i_5] [i_5] = (unsigned short)39879;
                }
            } 
        } 
        arr_34 [(unsigned short)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)25629)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)25628))));
    }
    var_21 = min((((/* implicit */unsigned short) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_7))))), (max((var_13), ((unsigned short)39923))));
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 3) 
    {
        for (unsigned short i_11 = 1; i_11 < 24; i_11 += 3) 
        {
            {
                arr_41 [(unsigned short)24] [(unsigned short)8] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)25638)))) & (((((/* implicit */_Bool) arr_37 [i_11 + 1] [i_10 - 1])) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_10 + 1])) : (((/* implicit */int) (unsigned short)59289))))));
                var_22 += max(((unsigned short)5106), (min((var_0), (var_5))));
            }
        } 
    } 
}
