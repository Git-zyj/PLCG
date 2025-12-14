/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86130
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
    var_17 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (signed char)39);
                        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                        var_20 = ((/* implicit */unsigned int) -5608864545148091206LL);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_22 [i_4] [i_7] = ((/* implicit */unsigned short) ((arr_8 [i_4 + 1] [i_4 + 1] [i_7] [i_7] [i_4 + 1] [i_4 + 1]) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)19450))) / (9223372036854775807LL))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) arr_24 [i_4] [i_4] [i_4] [i_4]);
                            var_23 = ((/* implicit */short) max((var_23), (var_12)));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (short i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] |= ((/* implicit */short) (~(((((((/* implicit */int) (short)-28804)) + (2147483647))) >> (((((/* implicit */int) (short)-22763)) + (22769)))))));
                            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)39))) ? (((/* implicit */int) arr_25 [i_11 - 1])) : (((/* implicit */int) (short)29397))));
                        }
                    } 
                } 
            } 
        }
        var_25 |= ((/* implicit */short) arr_11 [i_4]);
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */int) (short)-19455))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (3201669872U))))))));
        var_27 = ((/* implicit */int) min((var_27), (((int) (signed char)-79))));
    }
    /* LoopNest 3 */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        arr_44 [i_12] [i_12] = ((/* implicit */unsigned int) arr_17 [i_12] [i_12 - 1] [i_12] [i_12]);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((_Bool) (+(var_6))))), (1912482979U))))));
                    }
                    for (short i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                    {
                        var_29 -= (+(((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                        arr_47 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_12] [i_12] [i_12])) != (((((-9223372036854775790LL) + (9223372036854775807LL))) >> (((-513351480) + (513351535)))))));
                        var_30 |= ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)-2311)), (513351461))) & (((/* implicit */int) ((((/* implicit */int) arr_33 [i_12] [i_12 - 1] [i_16] [i_12 - 1] [i_12 - 1])) != (max((arr_14 [i_12] [i_12] [i_12]), (((/* implicit */int) arr_24 [i_16] [i_16] [i_16] [i_16])))))))));
                    }
                    for (short i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
                    {
                        arr_52 [i_17] &= ((short) 2147483647);
                        arr_53 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_12] [i_12]))));
                        arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] = var_5;
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_13] [i_13] [i_13])), (((((/* implicit */int) (short)8064)) | (var_9))))))));
                        var_32 = ((/* implicit */unsigned int) var_12);
                    }
                    arr_55 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */int) ((unsigned long long int) var_8));
}
