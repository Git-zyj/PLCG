/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94350
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
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)7)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_10))))));
    var_13 = ((((var_3) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (1177424552) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_8))))))) - (1177424547))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) (+((+(9267193504817355784ULL)))));
                    var_14 *= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 4294967295U)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-30150))));
                        var_15 = var_4;
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_4] [i_0] [i_2] = ((/* implicit */unsigned char) (!(arr_2 [i_0] [i_0] [i_0])));
                        var_16 = ((/* implicit */unsigned short) var_2);
                    }
                }
            } 
        } 
        arr_16 [i_0] = var_11;
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            arr_22 [i_5] [i_5] [(unsigned char)9] = ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
            var_17 = ((/* implicit */unsigned char) (-(((var_6) & (var_7)))));
            /* LoopNest 3 */
            for (signed char i_7 = 4; i_7 < 24; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    for (short i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) / (4294967295U)));
                            var_20 = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            } 
            arr_31 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -1437684505)) && (((/* implicit */_Bool) (signed char)121))));
        }
        var_21 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
        /* LoopSeq 3 */
        for (unsigned char i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            arr_34 [i_5] = var_2;
            arr_35 [i_10] = ((unsigned int) var_8);
            arr_36 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))));
        }
        for (signed char i_11 = 2; i_11 < 23; i_11 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)24026))));
            var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_11]))))) ? ((+(arr_3 [i_11 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        }
        for (signed char i_12 = 2; i_12 < 23; i_12 += 2) /* same iter space */
        {
            arr_41 [i_5] [i_12 - 1] |= ((/* implicit */unsigned short) ((arr_4 [i_5] [i_5] [i_5] [i_12]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_10)))))));
            arr_42 [i_5] [i_5] [(short)21] = ((/* implicit */int) var_10);
        }
        arr_43 [i_5] [i_5] = ((/* implicit */unsigned int) (unsigned short)56312);
        arr_44 [i_5] = ((/* implicit */unsigned int) var_1);
    }
}
