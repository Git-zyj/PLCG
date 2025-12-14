/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76167
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_8)), (max((var_4), (((/* implicit */unsigned int) var_6))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned char) (unsigned short)63884);
        arr_3 [(signed char)14] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0] [i_0]));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) (unsigned short)1665)))));
        var_16 = arr_1 [6ULL] [(_Bool)1];
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)1651)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_18 [i_5] [i_4] [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)27781))))));
                            arr_19 [i_5] [i_4] [17LL] [i_5] [i_5] [i_2] = var_8;
                            arr_20 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)14342)) ? (((/* implicit */int) (_Bool)1)) : (arr_16 [i_1] [i_2] [i_3] [i_4 + 1] [i_1] [i_3] [i_1])))));
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (~(var_7)));
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) var_4);
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned long long int) arr_23 [i_1] [i_2] [i_6] [i_7 - 1]);
                        }
                    } 
                } 
                arr_32 [i_1] [i_2] [i_6] [i_2] = ((/* implicit */int) (_Bool)1);
            }
            for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
                {
                    arr_40 [i_1] [i_2] [i_1] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)119))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(arr_6 [i_10]))))));
                    var_18 *= ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_2)))));
                }
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_33 [i_9] [i_2] [(unsigned short)5])));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_10))));
                arr_41 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_1] [i_2])))))));
            }
            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_2]));
        }
        for (int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            arr_45 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(2793476985U)));
            var_22 = var_2;
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (unsigned short)2))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned char) arr_9 [(unsigned short)4])))));
        }
        for (signed char i_13 = 2; i_13 < 18; i_13 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) arr_39 [i_1] [(_Bool)1] [i_1] [i_1]);
            arr_50 [i_1] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_17 [i_1] [i_13 - 1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)18]));
        }
        arr_51 [i_1] [i_1] = ((/* implicit */int) (-(arr_25 [i_1] [i_1] [i_1])));
        arr_52 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
}
