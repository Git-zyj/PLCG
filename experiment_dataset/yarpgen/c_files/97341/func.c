/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97341
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
    var_18 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [2] [i_1] |= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_4)))));
            var_19 = ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) : (((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) - (var_1)));
            arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_4 [i_0] [i_1]))));
        }
        for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) 1352886895U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16197))) : (0LL))) : (((/* implicit */long long int) (~(0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned short)16193))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)38)) ? (((/* implicit */int) (unsigned short)16193)) : (((/* implicit */int) (signed char)-61))))))) : (var_5)));
                var_22 = ((/* implicit */unsigned long long int) var_11);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)16193)), (((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_2] [i_2] [i_2] [i_6] [i_2])) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_6] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (var_9))))))))))));
                            var_24 &= ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)8)))) : (((/* implicit */int) var_13))));
                        }
                    } 
                } 
                var_25 = min((((/* implicit */int) (signed char)-9)), (-1385794283));
            }
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_24 [i_2] [i_2 + 2] [i_7] = ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 8; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) max((max((arr_10 [i_0] [i_0] [(unsigned short)7]), (var_8))), (((/* implicit */unsigned int) var_3))))) : ((+(((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [9LL] [9LL]))))))));
                            var_27 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_9] [i_2] [i_2]));
                        }
                    } 
                } 
                arr_31 [i_0] [i_2] [(short)9] [(short)9] = (~((-(((/* implicit */int) var_10)))));
            }
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)60))))) : (((arr_30 [1ULL] [1ULL] [i_2 - 1] [i_0] [i_0] [i_0]) & (var_6)))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_38 [i_0] [i_11] [i_2] [i_11] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((arr_23 [i_2] [i_2]), (arr_23 [i_2] [i_2])))) : (((/* implicit */int) var_2))));
                            var_29 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_12))))));
                        }
                    } 
                } 
                arr_39 [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
            }
        }
        arr_40 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_27 [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) min((var_16), (((/* implicit */short) (_Bool)1))))) : (min((((/* implicit */int) var_12)), (var_9)))));
    }
    /* LoopNest 3 */
    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (short i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 2) 
            {
                {
                    arr_48 [i_13] [i_13] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15 - 1] [i_14] [i_15])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                    arr_49 [i_13] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+((~(var_5))))) : ((~(var_1)))));
                    arr_50 [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)56)))), (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (unsigned short)49339))))));
                }
            } 
        } 
    } 
}
