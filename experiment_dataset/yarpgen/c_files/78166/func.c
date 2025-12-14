/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78166
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((unsigned char) (unsigned char)27);
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((unsigned int) (short)-3346))))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_12 = (unsigned char)104;
        var_13 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)63))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 -= ((/* implicit */unsigned char) 4294967295U);
            var_15 &= ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (unsigned char)86)))));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_16 = ((/* implicit */signed char) (unsigned char)47);
            var_17 -= ((/* implicit */int) ((unsigned long long int) ((unsigned short) (_Bool)0)));
            var_18 = ((/* implicit */signed char) (+(2147483647)));
            var_19 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-30113))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((int) (unsigned char)229));
                        var_21 -= ((/* implicit */signed char) ((long long int) (signed char)0));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)229))))))));
                        var_23 *= ((/* implicit */unsigned short) ((signed char) ((_Bool) (unsigned char)116)));
                    }
                } 
            } 
            arr_23 [4U] [5LL] [i_5] = ((/* implicit */unsigned char) 4032);
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (5500369282590550651LL)));
                    var_25 += ((unsigned long long int) 2147483647);
                    var_26 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (short)5275)))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_27 += ((/* implicit */int) ((unsigned char) ((long long int) (signed char)103)));
                        var_28 &= ((/* implicit */short) (unsigned char)57);
                        arr_32 [(short)13] [i_8] [i_8] = ((short) (-(((/* implicit */int) (unsigned char)224))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_35 [(signed char)6] [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) (signed char)54);
                        arr_36 [i_2] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_2] &= ((/* implicit */unsigned int) ((unsigned short) (short)-24139));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_8] [i_8] [13ULL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)59632));
                        var_29 = ((/* implicit */unsigned int) ((long long int) (unsigned char)128));
                    }
                    arr_41 [1U] [i_8] [i_9] = 17803378244212850507ULL;
                }
            } 
        } 
        var_30 = ((long long int) (unsigned char)198);
    }
    var_31 = ((/* implicit */unsigned char) var_0);
}
