/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56679
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
    var_11 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) (!(((/* implicit */_Bool) var_8))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            arr_5 [(_Bool)1] [i_1 - 2] = ((/* implicit */short) (-(((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned char)235))))))));
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~((~(((/* implicit */int) ((unsigned char) var_7))))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_0))))))));
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_10)))));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (-(var_3)))))));
            var_14 = ((/* implicit */short) ((unsigned char) ((int) (~(arr_8 [i_0])))));
            arr_15 [i_0] [i_0] [i_3] &= ((/* implicit */_Bool) ((long long int) ((_Bool) (~(((/* implicit */int) (signed char)33))))));
            var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)33))))))));
            arr_16 [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((signed char) ((_Bool) ((short) var_7))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            var_16 += ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned char)152))))));
            arr_21 [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((unsigned char) arr_1 [i_4]))))));
        }
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                for (unsigned int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_34 [i_8] [i_7] [i_6] [i_6] [3LL] = ((/* implicit */signed char) (~(((unsigned int) ((unsigned char) var_5)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_38 [i_5] [i_6] [i_7] [i_8 + 1] [i_6] [i_7 + 4] [i_7] = ((/* implicit */unsigned char) (-((-((~(arr_3 [i_5] [i_5])))))));
                            var_17 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((_Bool) arr_37 [i_9]))))));
                            arr_39 [i_6] [i_5] [i_6] [i_7 + 3] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned char)98))))));
                            arr_40 [i_5] [i_6] [i_7] [i_6] [i_9] [(unsigned short)10] = ((/* implicit */int) ((signed char) ((int) (+(106549834)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_0)))))))))));
                            arr_44 [i_5] [i_5] [i_6] [i_5] [(unsigned short)11] [i_5] = ((/* implicit */int) ((unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned char)104))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) (-((+(var_2)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1))))))));
                            arr_48 [i_6] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)91)))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)102)))));
                            var_22 = ((/* implicit */int) ((signed char) ((unsigned long long int) var_3)));
                        }
                        var_23 = ((/* implicit */short) ((long long int) (!((!(((/* implicit */_Bool) 106549828)))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((_Bool) (+(((unsigned int) var_4))))))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */unsigned int) ((unsigned long long int) (~((~(-675576627))))));
        arr_49 [i_5] [i_5] = (-((~(((unsigned long long int) arr_12 [i_5] [i_5] [i_5])))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 15; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_26 += (+((-(((unsigned int) (_Bool)0)))));
                        arr_60 [i_12] [i_13 + 2] [i_13 - 1] = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) ((unsigned int) 2246150807U))));
                    }
                } 
            } 
            var_27 -= ((/* implicit */unsigned short) (~((-(((unsigned long long int) var_0))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) ((unsigned long long int) -483399258814890854LL)))))))));
            var_29 = ((/* implicit */long long int) max((var_29), ((+((-(((long long int) var_0))))))));
        }
    }
    for (unsigned char i_16 = 2; i_16 < 16; i_16 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_9 [i_16 + 2] [i_16])))))))));
        arr_65 [15] [i_16 + 3] = ((/* implicit */unsigned int) ((int) ((short) ((unsigned char) var_8))));
        arr_66 [i_16 - 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (-(arr_63 [i_16])))))));
    }
    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (+((+(((unsigned long long int) arr_52 [i_17] [i_17] [i_17])))))))));
        arr_69 [i_17] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
        arr_70 [2ULL] |= ((/* implicit */long long int) ((int) (+(((unsigned int) (unsigned short)35031)))));
        var_32 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((int) (signed char)7))))));
    }
}
