/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96137
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
    var_19 |= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_20 &= (+(var_11));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 + 1] [i_3 - 1] [(_Bool)1] [i_3 + 2] [i_3 + 2])) ? (arr_7 [i_3] [i_3 + 1] [8LL] [i_3] [i_3 + 2] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26579)))));
                        var_22 = ((/* implicit */signed char) (~(var_12)));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) (-(4294967295U)));
        /* LoopNest 3 */
        for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    {
                        arr_20 [i_4] [i_5] [i_6] [(short)1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) 16U)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 16; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))))));
                    arr_26 [i_8] [i_8] = 4294967295U;
                }
            } 
        } 
        arr_27 [i_4] [i_4 - 1] = ((/* implicit */signed char) (((!((_Bool)1))) ? ((-(((/* implicit */int) var_3)))) : (((((-2032436386) + (2147483647))) >> (((((/* implicit */int) var_9)) + (10549)))))));
    }
    for (int i_10 = 3; i_10 < 17; i_10 += 2) /* same iter space */
    {
        arr_31 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_9 [i_10]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26593)) ? (((/* implicit */int) var_1)) : (arr_14 [i_10] [i_10 - 3] [14LL])))) : (((long long int) arr_9 [i_10]))));
        var_27 |= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_24 [8] [14ULL] [i_10 - 1] [i_10 - 1]))), (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) max(((unsigned short)40932), (((/* implicit */unsigned short) var_13))))) : (var_10)))));
        var_28 &= ((/* implicit */_Bool) max((((/* implicit */int) arr_9 [12])), (((((/* implicit */_Bool) 2182232391265492055ULL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [(_Bool)1] [16U])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))))))));
    }
    for (int i_11 = 3; i_11 < 17; i_11 += 2) /* same iter space */
    {
        arr_34 [i_11] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_0)))) % (((/* implicit */int) arr_23 [i_11] [i_11] [14U]))));
        arr_35 [i_11] [i_11 - 3] = ((/* implicit */unsigned short) var_7);
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (((~(arr_10 [i_11 - 2]))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
        arr_36 [(_Bool)1] = ((/* implicit */signed char) max((max((var_10), (((/* implicit */int) var_7)))), (((/* implicit */int) ((4290151119U) != (((1U) | (((/* implicit */unsigned int) var_10)))))))));
    }
}
