/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72233
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
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_17))));
    var_19 *= (-(var_6));
    var_20 ^= ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) (unsigned short)65464)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15980)) ? (((/* implicit */int) arr_3 [i_1] [i_3 + 1])) : (((/* implicit */int) (_Bool)1))))) : ((~(var_5)))))));
                        var_22 = ((/* implicit */unsigned int) arr_4 [i_2]);
                    }
                    var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)27271)) ? (((/* implicit */int) arr_9 [i_5] [i_4 + 1] [i_0])) : (((/* implicit */int) (unsigned short)10346)))) > (((/* implicit */int) arr_4 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) (short)(-32767 - 1));
                        var_26 = ((/* implicit */signed char) 951552547);
                        var_27 = ((/* implicit */unsigned char) -519217874);
                        var_28 = ((/* implicit */long long int) (unsigned short)15980);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0]);
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0] [i_4 + 1])) : (((/* implicit */int) arr_1 [i_7] [i_4 - 1]))))) == ((~((+(1765867610U))))))))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (~(2596126386U)));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_32 = ((((/* implicit */int) arr_24 [i_8])) >= (((/* implicit */int) arr_24 [i_8])));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_8] [i_8])) + (((/* implicit */int) arr_24 [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 22; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    var_34 = (i_8 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) arr_24 [i_8])) << (((((((/* implicit */_Bool) 3965344941U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8]))) : (arr_31 [i_8] [i_9 - 3] [i_10] [i_8]))) - (142ULL)))))) : (((/* implicit */short) ((((/* implicit */int) arr_24 [i_8])) << (((((((((/* implicit */_Bool) 3965344941U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8]))) : (arr_31 [i_8] [i_9 - 3] [i_10] [i_8]))) - (142ULL))) - (82ULL))))));
                    var_35 = ((/* implicit */unsigned char) (signed char)-13);
                    var_36 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_26 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_14))));
    }
    for (int i_11 = 3; i_11 < 16; i_11 += 4) 
    {
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)10))))) ? (((((/* implicit */_Bool) (unsigned short)61088)) ? (arr_31 [i_11 - 2] [i_11 + 3] [i_11] [i_11 + 3]) : (arr_31 [i_11] [i_11 - 2] [i_11] [i_11 - 2]))) : (((arr_31 [i_11] [i_11 + 3] [i_11] [i_11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_39 = ((/* implicit */long long int) ((signed char) min((arr_29 [i_11] [(_Bool)0] [i_11] [i_11 - 3]), (((/* implicit */unsigned long long int) var_9)))));
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) 1698840910U))));
    }
    var_41 ^= var_4;
}
