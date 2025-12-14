/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57239
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((1801626632) >= (((/* implicit */int) arr_0 [i_0] [(short)14]))));
        arr_3 [i_0] = -1435826324;
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) arr_0 [i_1] [i_1]);
        var_14 ^= ((/* implicit */unsigned char) ((((int) var_0)) == ((~(((/* implicit */int) arr_4 [i_1]))))));
        arr_6 [i_1] = ((int) (-(((/* implicit */int) arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_15 [3] [i_3] [5] [(unsigned short)3] = ((/* implicit */short) ((unsigned long long int) var_9));
                    var_15 = arr_14 [i_3];
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_12 [i_2] [i_2]) : (arr_12 [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_12 [i_2] [i_2]) : (-1537508980))) : ((~(-1537508989)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_17 = max((((/* implicit */int) (unsigned short)61698)), (-1537508985));
                                var_18 = ((/* implicit */int) var_7);
                                var_19 = ((/* implicit */int) (!(((((/* implicit */int) arr_13 [i_6 - 1])) >= (((/* implicit */int) arr_13 [i_6 + 1]))))));
                                var_20 = ((/* implicit */unsigned short) arr_7 [(short)3] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_21 -= (+(((/* implicit */int) (unsigned char)94)));
                        var_22 += ((/* implicit */short) min((min((1435826339), (((/* implicit */int) (unsigned char)94)))), (max((var_1), (arr_18 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_8 + 1] [13])))));
                    }
                } 
            } 
        } 
        arr_30 [19] = ((/* implicit */int) (unsigned char)168);
    }
    var_23 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) var_7))) : ((+(var_0))));
}
