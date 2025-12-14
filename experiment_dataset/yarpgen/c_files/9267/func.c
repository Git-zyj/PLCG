/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9267
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
    var_17 = ((/* implicit */unsigned char) 1225610211U);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned char) (+(5961876271016815037ULL)));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) var_14);
            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))), (1225610211U)));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (short)-6573);
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) var_7);
                    }
                } 
            } 
            var_22 &= (_Bool)1;
        }
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_26 [6ULL] [i_8] [i_8] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)8534))));
                                var_24 |= ((/* implicit */long long int) (-(18018941669223999384ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_4] [i_4] = ((/* implicit */unsigned long long int) (short)8536);
    }
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 12; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    var_25 |= ((/* implicit */signed char) max((18018941669223999389ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                }
            } 
        } 
        arr_38 [1ULL] [i_9] = ((/* implicit */signed char) var_4);
        var_27 = ((/* implicit */unsigned int) 427802404485552231ULL);
    }
    /* LoopSeq 1 */
    for (unsigned int i_12 = 2; i_12 < 22; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 4; i_15 < 23; i_15 += 1) 
                    {
                        for (short i_16 = 3; i_16 < 23; i_16 += 1) 
                        {
                            {
                                arr_51 [i_13] [i_13] [i_14] [i_15] [i_16] = 336701895;
                                arr_52 [i_13] = ((/* implicit */unsigned long long int) -336701895);
                            }
                        } 
                    } 
                    var_28 *= ((/* implicit */unsigned long long int) (+(var_3)));
                    var_29 = ((/* implicit */unsigned long long int) var_7);
                }
            } 
        } 
        var_30 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
        var_31 = ((/* implicit */unsigned long long int) (-((+(-336701895)))));
        arr_53 [19U] |= ((/* implicit */short) (+(((/* implicit */int) var_12))));
    }
    var_32 = ((/* implicit */signed char) (+(var_14)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
    {
        var_33 ^= ((/* implicit */_Bool) (short)4032);
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    {
                        var_34 = ((/* implicit */long long int) 15144270402932286788ULL);
                        var_35 = ((/* implicit */int) var_14);
                        var_36 = ((/* implicit */unsigned int) var_10);
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_14))));
                    }
                } 
            } 
        } 
        arr_64 [(unsigned char)10] = ((/* implicit */_Bool) (+(336701894)));
    }
    for (long long int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
    {
        var_38 += ((/* implicit */unsigned long long int) (+(var_8)));
        var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
    }
    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
    {
        arr_70 [i_22] [i_22] = ((/* implicit */short) var_14);
        var_40 -= ((/* implicit */short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32762)))))))));
    }
    for (unsigned long long int i_23 = 2; i_23 < 8; i_23 += 3) 
    {
        arr_73 [i_23] = ((/* implicit */short) var_7);
        var_41 = ((/* implicit */unsigned char) var_15);
    }
}
