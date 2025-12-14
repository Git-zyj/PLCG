/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68421
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
    var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((short) var_16)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((((/* implicit */int) (signed char)-101)) != (((/* implicit */int) (signed char)-101)));
        var_22 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_12))) >= (((/* implicit */int) (signed char)87))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) ((unsigned short) var_15));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_7 [i_1] [(short)8] [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                        arr_13 [i_1] [2LL] [2] &= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)116))));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-101))))) & (((/* implicit */int) (signed char)-101))));
            arr_15 [i_2] [(signed char)2] = ((/* implicit */unsigned long long int) var_14);
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) (-(((/* implicit */int) var_12)))))) ^ ((-(((/* implicit */int) (signed char)-101))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_18))));
                        var_27 &= ((/* implicit */signed char) var_9);
                        var_28 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_6))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) ((unsigned char) ((short) var_17))))));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_30 -= ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_31 [(unsigned short)2] [i_11] &= ((/* implicit */unsigned char) var_14);
                            var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                            var_32 = (+(((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
                            var_33 = ((/* implicit */int) var_2);
                        }
                        var_34 &= ((/* implicit */_Bool) 1951280702);
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)85))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-82))))))) && (((/* implicit */_Bool) 16320))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (unsigned int i_14 = 4; i_14 < 15; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) 2293465003U);
                        arr_44 [7] [i_13] [i_15] [7] = ((long long int) (!(((/* implicit */_Bool) 3895356257732126315ULL))));
                        var_37 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)69))));
                        var_38 = (+(((/* implicit */int) (signed char)100)));
                        var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
        var_40 = (+(-6));
        arr_45 [1] = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_50 [i_12] [i_16] [(unsigned short)2] = ((/* implicit */int) ((_Bool) (unsigned short)45881));
                    arr_51 [i_12] [(unsigned char)5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
                }
            } 
        } 
    }
}
