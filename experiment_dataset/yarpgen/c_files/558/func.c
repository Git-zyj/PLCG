/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/558
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
    var_14 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) (unsigned short)30310)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned char) arr_0 [i_0]));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_3))));
        arr_5 [i_0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >> (((/* implicit */int) ((signed char) var_9)))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (unsigned short)35221))))))))));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_6 [i_1])) - (35043)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55421))) : (var_6))), (((/* implicit */long long int) arr_1 [2LL]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)109)), ((unsigned short)65520))))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)55431)))) & (((/* implicit */int) var_4))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_9)))));
        var_21 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_11 [i_2 - 1]))))));
    }
    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    arr_21 [i_3] [i_3] |= ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_24 [i_3 + 2] [i_4] [i_5] = ((/* implicit */unsigned char) (unsigned short)55435);
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54487)) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4))))), (2234207627640832LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)30310)) : (((/* implicit */int) arr_18 [i_4])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)-22455))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (signed char)-111))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_3])))) + (((/* implicit */int) var_12))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1453)) % (((/* implicit */int) arr_19 [i_3] [i_4]))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) arr_20 [i_3 + 2] [i_3 + 2] [i_3 - 4])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 3; i_10 < 23; i_10 += 3) 
            {
                {
                    arr_35 [i_10] = ((/* implicit */long long int) (unsigned char)196);
                    arr_36 [i_3] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_3 - 2] [i_9])) * (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)99))))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) (unsigned char)8);
    }
}
