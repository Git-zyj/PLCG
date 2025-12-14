/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65087
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) arr_5 [(short)22] [i_1] [i_2] [i_3]);
                                arr_14 [i_4] [i_3] [i_2] [i_4] = (_Bool)1;
                                arr_15 [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_16 [i_6 + 1] [i_5] [i_2] [i_0 + 1]))))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43720)) || (((/* implicit */_Bool) var_5)))))))) < (18446744073709551607ULL)));
                                arr_23 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                                arr_24 [i_0] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_30 [i_0] [19LL] [i_0] [i_0] [10U] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)18697)) ^ (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) (unsigned short)26557)) ^ (((/* implicit */int) arr_25 [i_0] [i_0 - 2] [i_0 - 2] [i_8 + 1]))))));
                                var_15 = ((/* implicit */unsigned long long int) (unsigned short)18667);
                                arr_31 [i_7] [i_2] [i_2] [i_7 + 2] [i_8] [i_2] = ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65526))))) > (((0U) + (arr_8 [i_0 + 1] [i_0 - 2] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (unsigned short i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) arr_12 [18ULL] [i_10 - 1]);
                        arr_43 [i_9] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) 1518139673U);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) (~(((/* implicit */int) ((17056270116319957367ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (arr_0 [i_9]))))))))));
    }
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        arr_47 [i_13] = ((/* implicit */_Bool) 2776827628U);
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 17; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 18; i_16 += 4) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            {
                                arr_58 [i_16] [i_16] [i_16] [i_16] [13LL] = ((/* implicit */_Bool) var_8);
                                var_18 = ((/* implicit */_Bool) (+(4294967294U)));
                            }
                        } 
                    } 
                    arr_59 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) & ((+(((/* implicit */int) var_9))))));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 1; i_19 < 18; i_19 += 4) 
                        {
                            {
                                var_19 = (!(((/* implicit */_Bool) arr_6 [i_15] [i_18])));
                                arr_66 [7LL] [i_19] [i_15] = ((7873545632205623533ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))));
                            }
                        } 
                    } 
                    var_20 = ((18140105037086631481ULL) < (16384ULL));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 3 */
    for (short i_20 = 0; i_20 < 21; i_20 += 4) 
    {
        for (short i_21 = 1; i_21 < 17; i_21 += 4) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 4) 
            {
                {
                    arr_76 [i_20] [i_21] [i_21] [(unsigned short)4] = ((/* implicit */unsigned short) ((var_4) > (((/* implicit */unsigned long long int) 6854221912287061240LL))));
                    arr_77 [i_21] = ((((/* implicit */unsigned long long int) var_10)) != (8677092884907595089ULL));
                    var_22 = ((/* implicit */unsigned char) (_Bool)0);
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 2; i_23 < 19; i_23 += 2) 
                    {
                        for (unsigned int i_24 = 1; i_24 < 18; i_24 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_0);
                                arr_83 [i_22] [(unsigned short)10] [i_22] [i_22] [i_22] [i_21] = ((/* implicit */unsigned short) arr_8 [(_Bool)1] [18ULL] [12U]);
                                arr_84 [i_21] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
