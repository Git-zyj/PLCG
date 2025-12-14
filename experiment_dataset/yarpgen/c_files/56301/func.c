/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56301
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)6] [(unsigned short)6] [i_0] [i_0]))))))));
                                var_18 = -1LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_7) ? (318867064U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5])))))) >> ((((-(((((/* implicit */int) (signed char)38)) << (((var_12) - (3892589274066272232ULL))))))) + (79691781)))));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)44))));
    }
    for (signed char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)49))))) ? (((((((/* implicit */int) arr_13 [i_6])) - (((/* implicit */int) arr_12 [i_6])))) - (((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) arr_13 [i_6])) : (var_5))))) : (((/* implicit */int) var_4)))))));
        arr_17 [i_6] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_6])))))))));
        var_21 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        arr_18 [i_6] = arr_13 [i_6];
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned int) arr_25 [i_9] [i_7] [i_7] [i_6]);
                        arr_28 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */int) (_Bool)1);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_8))));
                    }
                }
            } 
        } 
    }
    for (signed char i_10 = 1; i_10 < 9; i_10 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) var_14);
        arr_31 [i_10] = ((/* implicit */int) 1817652660228399878ULL);
    }
    for (unsigned char i_11 = 4; i_11 < 16; i_11 += 1) 
    {
        arr_35 [i_11] = ((/* implicit */short) ((var_3) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -8112456772119187537LL)) ? (((/* implicit */int) arr_33 [i_11])) : (((/* implicit */int) (signed char)-41)))) ^ (((((/* implicit */int) arr_34 [i_11])) & (((/* implicit */int) arr_32 [i_11])))))))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 17; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                {
                    arr_41 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_36 [i_11] [i_12] [i_11])) || (((/* implicit */_Bool) (-(arr_38 [i_11] [i_11] [i_11] [i_11])))))) ? (((/* implicit */int) var_0)) : ((-((~(((/* implicit */int) arr_34 [i_11]))))))));
                    var_26 &= ((/* implicit */unsigned int) arr_37 [(short)6]);
                }
            } 
        } 
    }
}
