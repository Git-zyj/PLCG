/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97712
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
    var_16 = ((/* implicit */int) (((!(((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (var_9) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 &= ((/* implicit */signed char) (+(arr_1 [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) arr_1 [i_1]);
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [5ULL] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((var_3) + (1496144797)))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            var_19 = 9330544059702645916ULL;
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [14ULL] [i_1] [i_1] [i_2]))))))));
                            var_21 = ((/* implicit */unsigned int) ((((unsigned long long int) var_13)) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            arr_18 [i_3] [i_3] [i_3] [11ULL] [11ULL] [i_0] [i_3] = ((((/* implicit */unsigned long long int) arr_13 [i_0] [(short)15] [i_1] [i_0] [i_3 + 1] [11ULL] [i_5])) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_13))));
                            arr_19 [i_3] [i_1] [i_2] [2ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1]))));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_23 = var_5;
        arr_24 [11ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
        var_24 ^= ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((_Bool)1)))) : (((/* implicit */int) arr_23 [i_6]))))));
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_26 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            {
                                arr_37 [i_7] [i_7] [i_10] [4LL] [i_8] [i_7] = ((/* implicit */signed char) 2177481952182908942LL);
                                var_27 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_10]))));
                                arr_38 [i_7] [i_7] [i_9] [i_10] [i_11] [i_7] = ((/* implicit */long long int) var_6);
                                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 15719147748508528667ULL)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                }
                var_30 = ((/* implicit */int) var_10);
                arr_39 [i_7] [i_8] [i_8] = var_13;
            }
        } 
    } 
}
