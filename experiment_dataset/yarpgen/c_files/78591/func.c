/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78591
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned char)12] = ((/* implicit */long long int) var_14);
        var_20 += ((/* implicit */int) var_12);
        var_21 += ((/* implicit */int) var_16);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_16);
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (var_7)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_6))))));
        arr_7 [i_1] = ((/* implicit */signed char) var_6);
        var_22 = ((/* implicit */unsigned short) var_19);
        arr_8 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (min((var_12), (((/* implicit */unsigned short) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30739)))))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */short) (+(min((((/* implicit */long long int) var_7)), (var_5)))));
        arr_13 [i_2] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_12)))))));
        arr_14 [15LL] = (!(((/* implicit */_Bool) var_1)));
    }
    var_23 |= ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_25 [i_3] [i_3] [(short)12] [i_6 + 2] [(short)4] = ((((/* implicit */_Bool) var_17)) ? ((+(min((((/* implicit */long long int) (short)-2904)), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((-(var_19))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            arr_26 [i_4] [i_5] [i_6 - 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2147483647)))) ? (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_29 [i_3] [i_4] [i_5] [(short)2] [i_6] [(unsigned short)0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))));
                            var_24 |= ((/* implicit */unsigned int) min((var_5), (((/* implicit */long long int) var_12))));
                        }
                        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_19))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))));
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))));
    }
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_40 [(short)14] [(unsigned short)3] [i_12] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))), (var_10)));
                        var_28 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) min((var_3), (var_8))))));
                        var_29 += ((/* implicit */int) var_12);
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_19))))));
                    }
                } 
            } 
        } 
        arr_41 [i_9] = ((/* implicit */short) (-(var_4)));
    }
}
