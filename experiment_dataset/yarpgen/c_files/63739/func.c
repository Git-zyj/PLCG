/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63739
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [16ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((var_6) - (446228270)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)92))))) : (var_17)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (var_9) : (var_9)))) ? (1257791472) : (((/* implicit */int) var_1))));
                    arr_9 [i_0] = ((/* implicit */short) var_5);
                    arr_10 [i_0 + 3] [0] [i_2] &= ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (var_13) : (((/* implicit */unsigned int) arr_2 [0ULL]))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((((/* implicit */_Bool) ((((/* implicit */int) (short)1313)) + (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) 9847896009437035558ULL))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (_Bool)0))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) var_8);
        arr_16 [i_4] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) ((8990250573369366201ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (short)1333)) * (((((/* implicit */int) (short)6982)) ^ (((/* implicit */int) (unsigned char)184))))));
        var_22 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                for (int i_9 = 3; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (short)-1334);
                        var_24 = ((/* implicit */unsigned long long int) ((((int) -1)) / ((+(268435455)))));
                    }
                } 
            } 
        } 
        arr_33 [(unsigned short)7] [13ULL] = ((/* implicit */short) ((4294967295U) < ((-(3915817472U)))));
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 15; i_10 += 4) 
    {
        var_25 = ((/* implicit */int) -213114962099079401LL);
        var_26 = ((/* implicit */int) (unsigned short)25696);
    }
    var_27 = ((/* implicit */unsigned char) var_15);
}
