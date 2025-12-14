/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94384
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) var_17);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((int) max((var_7), (((/* implicit */unsigned int) var_4))))))));
        var_20 = ((/* implicit */_Bool) max(((+(((unsigned int) var_15)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))) ? ((+(var_7))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_2))))))));
            arr_9 [i_2] [i_1 + 1] [(_Bool)1] = ((/* implicit */_Bool) ((int) ((int) max((((/* implicit */unsigned short) var_11)), (var_4)))));
            var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2103822509291002880LL)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)52612))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) var_17))), ((+(var_17))))))));
            arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((((_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_4), (var_4))))))) : (((((/* implicit */_Bool) -524288)) ? (1593211679U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52612)))))));
        }
        arr_16 [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) 3633607105180814012LL))), (max((((/* implicit */long long int) (short)-1)), (3633607105180814028LL)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_14)))))) : (min((var_13), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = ((((/* implicit */_Bool) max((((/* implicit */int) max((var_12), (var_12)))), (((int) var_8))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) ((unsigned short) var_4))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))))) ? ((~(((/* implicit */int) (short)0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (var_14)))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_5)))))))))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_15)) : (var_14)));
        var_24 = ((/* implicit */unsigned short) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (short)-27465))));
        /* LoopSeq 1 */
        for (short i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_32 [i_7] [16] [i_6] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) max((((/* implicit */short) var_15)), (var_12)))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) var_6)), (var_14)))))) ? (((/* implicit */long long int) ((int) ((long long int) var_8)))) : (var_1)));
                    }
                } 
            } 
            var_26 = ((int) min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) var_5)), (var_0)))));
            arr_33 [i_5] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_7)))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8)))))))));
        }
        arr_34 [i_5] = ((/* implicit */_Bool) ((unsigned short) (~(((long long int) var_14)))));
        arr_35 [(_Bool)0] |= ((/* implicit */unsigned short) min((((long long int) var_7)), (((/* implicit */long long int) var_15))));
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_27 = ((signed char) var_8);
                        arr_46 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) (~(((var_15) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    }
                    arr_47 [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(min((var_14), (((/* implicit */int) var_4))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) var_16))))), (var_7)))));
                    var_28 *= ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) ((short) var_12))))));
                }
            } 
        } 
    } 
}
