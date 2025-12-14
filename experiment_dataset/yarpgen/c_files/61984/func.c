/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61984
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) ((((arr_1 [(_Bool)1] [(signed char)12]) >= (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [16] [i_0 - 1]))) : (arr_1 [i_0 - 1] [i_0 + 1])));
            arr_5 [i_0] [i_1 + 3] [i_1 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0] [(short)22])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0]))))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)1016))))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_6 [i_0] [i_0])));
            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        }
        for (short i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
            {
                var_18 &= ((/* implicit */unsigned long long int) arr_12 [(short)10] [i_4]);
                arr_16 [i_0 + 1] [i_3] [i_0 + 1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0]);
                arr_17 [i_0] [i_0 + 1] [i_0] [(short)20] &= ((((/* implicit */int) arr_7 [i_0 + 1] [i_4])) >> (((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_7 [i_0] [i_4])))) - (160))));
                var_19 &= ((/* implicit */_Bool) arr_15 [i_3] [i_0 + 1]);
            }
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                arr_20 [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) arr_7 [0] [i_5]);
                var_20 = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) arr_0 [i_3])))));
                arr_21 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) % (5177554159884747822LL)));
            }
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((long long int) ((unsigned short) arr_14 [i_3]))))));
                            arr_29 [i_0] [i_3] [1ULL] [i_8] [i_8] = ((/* implicit */short) (+(((((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) - (((/* implicit */int) var_0))))));
                        }
                    } 
                } 
                arr_30 [i_0] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 + 1])) == (((/* implicit */int) arr_4 [i_0 + 1]))));
                var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_3 + 1] [i_3 + 2] [i_3 + 2] [18])) > (((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 1] [2LL]))));
                arr_31 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61441)) ? (((/* implicit */int) (short)-24480)) : (((/* implicit */int) (signed char)96)))))));
            }
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (signed char)119))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_11 [i_0]))))) : ((~(((/* implicit */int) arr_0 [i_0]))))));
                            arr_39 [i_11] [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_35 [i_0] [15LL])) ? (var_3) : (var_3)))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_35 [i_3] [i_10]))))));
                            arr_40 [i_11] [i_10] [(unsigned char)6] [i_3 - 1] [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_27 [8LL] [i_10] [i_9] [i_0] [(short)21] [i_0])) ? (((/* implicit */int) arr_8 [i_3] [i_9] [i_10])) : (((/* implicit */int) arr_26 [i_11] [16] [i_9] [i_3] [i_0]))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0]))))) : (((unsigned long long int) arr_27 [i_0] [(signed char)19] [i_3] [i_3 + 1] [i_0] [i_3]))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(short)8])) ? (arr_38 [14U] [i_0] [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((~(arr_38 [14LL] [14LL] [i_0] [i_0] [i_0])))));
        arr_42 [i_0] = ((/* implicit */signed char) ((_Bool) arr_1 [i_0 - 1] [i_0 + 1]));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_37 [20] [18LL] [(signed char)2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_33 [1] [i_0])) : (arr_28 [20LL]))) : (((unsigned long long int) arr_38 [8ULL] [i_0] [i_0 + 1] [(short)16] [8ULL]))));
        var_28 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0])))));
    }
    for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_15 [i_12] [(short)17]))));
        var_30 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) max((arr_23 [11U] [i_12] [i_12] [i_12]), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_14 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_12] [i_12] [i_12]))) : (arr_6 [i_12] [i_12]))))));
        arr_46 [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_12] [i_12]))));
        var_31 = ((/* implicit */unsigned short) min((min((arr_6 [i_12] [i_12]), (((/* implicit */long long int) arr_8 [i_12] [i_12] [i_12])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_12] [i_12] [i_12])))))));
    }
    var_32 = ((/* implicit */unsigned char) var_2);
}
