/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82700
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned long long int) 5117064847754571122LL)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 *= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 2])))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_13 [i_3] [i_4] = ((/* implicit */unsigned char) (signed char)-105);
                        var_18 &= ((/* implicit */short) ((unsigned int) arr_6 [i_1 + 2]));
                        var_19 = ((/* implicit */signed char) -10LL);
                        arr_14 [(_Bool)1] [i_3 - 1] [23LL] [23LL] [i_1] = var_0;
                        var_20 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
            var_21 ^= (+(var_1));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 1191014755U))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14120801872074407171ULL))) : (((/* implicit */unsigned long long int) 5556090515079545397LL))));
        }
    }
    for (long long int i_6 = 4; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            var_24 *= ((/* implicit */long long int) ((unsigned char) ((short) (_Bool)1)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (short i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    {
                        arr_27 [i_8] [i_7] = ((/* implicit */int) min((arr_21 [i_6 + 2]), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
        arr_28 [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)29068))));
        var_26 |= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3551688211060244951ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_15 [i_6] [i_6]), ((_Bool)1)))) : ((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (!((_Bool)1)))));
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_10 = 2; i_10 < 16; i_10 += 1) 
    {
        var_28 *= ((/* implicit */short) arr_4 [i_10 + 2]);
        arr_32 [(short)10] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) == (((((/* implicit */long long int) max((var_0), (((/* implicit */int) var_7))))) + (((arr_10 [i_10] [i_10] [i_10] [i_10 + 2] [i_10]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-707)))))))));
    }
}
