/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84995
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) -189690864))));
                var_15 = ((/* implicit */short) -189690864);
                var_16 = ((/* implicit */signed char) (short)-14047);
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (short)-14047))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) -2147483630);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] = ((/* implicit */int) 17001418141146914538ULL);
                var_19 ^= ((/* implicit */unsigned char) 2147483629);
                var_20 &= (short)-24309;
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */short) (signed char)30);
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */short) 1445325932562637076ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (short)-1681);
                                var_23 ^= ((/* implicit */unsigned long long int) (unsigned short)11600);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 3) 
                    {
                        arr_33 [i_11] = ((/* implicit */unsigned char) (signed char)31);
                        var_24 = ((/* implicit */_Bool) (short)14046);
                        var_25 += ((/* implicit */int) (_Bool)1);
                        arr_34 [i_4] [i_9] [i_10] [0ULL] = ((/* implicit */short) -8970184848687671894LL);
                    }
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_26 += ((/* implicit */unsigned char) (short)-14047);
                        var_27 = ((/* implicit */unsigned char) (signed char)102);
                    }
                    arr_37 [i_4] [i_9] = ((/* implicit */unsigned short) 2738698952659951788ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) 2147483644);
                                var_29 = 189690864;
                                var_30 = ((/* implicit */int) (short)14028);
                                var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_32 = (unsigned char)196;
        var_33 = ((/* implicit */signed char) (short)-1681);
        arr_46 [i_15] |= ((/* implicit */_Bool) (signed char)80);
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 19; i_16 += 4) 
    {
        arr_49 [5ULL] [5ULL] = ((/* implicit */unsigned int) (signed char)-31);
        var_34 += ((/* implicit */unsigned short) -189690869);
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned short i_19 = 2; i_19 < 19; i_19 += 1) 
                {
                    {
                        arr_59 [i_16 + 2] = (short)32068;
                        var_35 = ((/* implicit */int) (unsigned short)39902);
                        arr_60 [i_16] [i_16] = -8483994570660279498LL;
                        var_36 |= ((/* implicit */_Bool) (unsigned short)39927);
                        var_37 = ((/* implicit */short) (unsigned short)39936);
                    }
                } 
            } 
        } 
    }
}
