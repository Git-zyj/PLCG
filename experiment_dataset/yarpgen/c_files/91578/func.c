/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91578
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
    var_16 ^= ((/* implicit */signed char) ((((var_7) > (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_8))))))) ? (((((/* implicit */_Bool) var_1)) ? (var_9) : (((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_12)) - (28394))))))) : (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)29))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = var_10;
        var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) ((unsigned char) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)250)) % (((/* implicit */int) (signed char)72))))) ^ (arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((long long int) arr_2 [i_2] [i_3])) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_7 [i_1] [i_2] [i_3]) : (arr_7 [i_1] [i_1] [i_0])));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_21 = ((/* implicit */signed char) (-(((var_9) & (((/* implicit */int) (unsigned char)5))))));
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (arr_11 [i_4]))) * (((/* implicit */unsigned int) 7844842))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((long long int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5]))) - (var_5))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_15 [i_5] [i_5])) - (95))))));
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (var_7) : (((/* implicit */int) arr_14 [i_5] [i_5])))) & (((/* implicit */int) arr_14 [i_5] [i_5]))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 24; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) arr_19 [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_9 + 2]) > (((/* implicit */unsigned int) arr_16 [i_9 + 1])))))) : (((((/* implicit */_Bool) arr_19 [i_9 + 2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))));
                            var_27 = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                arr_29 [i_5] [i_5] [i_6] [i_10] = ((/* implicit */signed char) arr_19 [i_10]);
                arr_30 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -9197632276405289080LL)) || (((/* implicit */_Bool) arr_15 [i_5] [i_5]))))) % (((((/* implicit */_Bool) (unsigned short)50010)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_15))))))) < (arr_26 [i_5] [i_10] [i_5] [i_5])));
                var_28 = ((unsigned int) 393508667U);
                arr_31 [i_5] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_6])) != (((/* implicit */int) var_3))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)90))))) > (arr_23 [i_5])));
            }
            var_30 = ((var_10) << (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6])) && (((/* implicit */_Bool) arr_24 [i_5]))))));
            var_31 = ((/* implicit */unsigned int) arr_21 [i_5] [i_6] [i_5] [i_6]);
        }
    }
    for (long long int i_11 = 1; i_11 < 15; i_11 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((arr_2 [i_11 - 1] [i_11 + 1]) + (2147483647))) >> (((((/* implicit */int) var_15)) - (28447)))))))))));
        var_33 = ((/* implicit */unsigned char) var_13);
    }
}
