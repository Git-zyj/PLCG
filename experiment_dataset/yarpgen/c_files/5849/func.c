/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5849
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)47685)) << (((arr_0 [i_0]) - (8948116073557926974ULL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)47685)) << (((((arr_0 [i_0]) - (8948116073557926974ULL))) - (18129070335340836785ULL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((unsigned short) var_3)))));
                        var_18 |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])))))));
                    }
                    var_19 += ((/* implicit */unsigned int) arr_5 [i_0] [0ULL]);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2259793560U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2259793560U)) ? (((/* implicit */unsigned long long int) 2035173735U)) : (16003495496096827874ULL))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (-1) : ((-(var_7)))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2259793560U)) ? (arr_17 [i_7 + 1] [i_4] [(short)12] [i_4]) : (((/* implicit */long long int) var_6))));
                            var_24 += ((/* implicit */_Bool) ((long long int) 2443248577612723742ULL));
                            var_25 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_0] [9LL] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_0]))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */long long int) var_10);
                            var_26 = ((/* implicit */short) ((unsigned long long int) 16003495496096827874ULL));
                            arr_25 [i_0] [i_4] [i_5] [i_4] [i_8] = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) ((((arr_16 [i_0] [i_6 + 1] [i_8]) + (2147483647))) >> (((arr_16 [i_0] [i_4] [(short)3]) + (1315747877)))))) ? (((/* implicit */long long int) arr_13 [15U] [i_6 + 1] [15U] [i_4 - 1])) : (((long long int) 16003495496096827888ULL)))) : (((((/* implicit */_Bool) ((((arr_16 [i_0] [i_6 + 1] [i_8]) + (2147483647))) >> (((((arr_16 [i_0] [i_4] [(short)3]) + (1315747877))) + (472946649)))))) ? (((/* implicit */long long int) arr_13 [15U] [i_6 + 1] [15U] [i_4 - 1])) : (((long long int) 16003495496096827888ULL))));
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_19 [i_0]));
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) == (677115179U)))), (max((((/* implicit */unsigned long long int) arr_28 [i_10 - 1] [i_10 - 1])), (((unsigned long long int) 16003495496096827888ULL))))));
                    var_28 += ((((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_11] [8U] [i_9])), (var_10))))) : ((((_Bool)0) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) << ((((+(((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))))) - (105))));
                    var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_27 [i_10 - 1])) ? (524256LL) : (((/* implicit */long long int) 58321763U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9] [(unsigned short)3] [5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = 4294967295U;
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 2) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14257855356674826263ULL)) ? (((/* implicit */int) arr_35 [i_12] [i_12])) : (((/* implicit */int) (short)(-32767 - 1)))))) - (16003495496096827888ULL)))) ? (((/* implicit */int) arr_35 [i_12] [4LL])) : (((/* implicit */int) var_9))));
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            arr_50 [i_14] [19LL] [i_15] [i_14] [i_14] [i_13 - 1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_35 [i_13 - 2] [(unsigned char)11]))) * (((/* implicit */int) arr_44 [i_12] [i_13] [i_14]))));
                            var_32 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_45 [i_12] [(unsigned char)14] [i_14])) - (21423))))), (((((/* implicit */_Bool) arr_41 [i_12] [i_13] [i_12])) ? (1960405716) : (((/* implicit */int) arr_38 [i_13]))))))), ((~(((14257855356674826263ULL) << (((14257855356674826263ULL) - (14257855356674826220ULL)))))))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_38 [i_12]))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_34 -= ((/* implicit */unsigned int) 1525004089);
            var_35 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56325))))) : (((2035173736U) << (((var_2) - (7425305076539173071LL)))))));
        }
    }
    var_36 = ((/* implicit */unsigned long long int) ((long long int) max((var_0), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)24931)))))));
}
