/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81072
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
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) ((var_10) <= ((+(var_5)))))), (max((max((var_11), (((/* implicit */int) (short)-2485)))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)-2498))))))));
    var_17 ^= ((((/* implicit */_Bool) (short)-2496)) ? (((/* implicit */int) (short)2493)) : (((/* implicit */int) (unsigned short)65517)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) ((((((long long int) arr_4 [i_0] [i_0])) <= (arr_0 [i_0]))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((unsigned long long int) arr_4 [i_2] [i_0])))) : (((/* implicit */unsigned long long int) (+(var_1))))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((_Bool) arr_2 [(short)12] [i_0]))))) <= ((+((~(((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_16 [i_4] [i_4] &= ((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)-2496), (arr_13 [i_3] [i_4]))))));
                    arr_17 [(unsigned short)6] [i_3] [i_4] [i_0] = ((/* implicit */signed char) arr_3 [i_4] [i_3] [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_19 -= ((/* implicit */unsigned char) ((arr_3 [(short)10] [i_3 - 2] [i_0 - 1]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2494)) ? (((/* implicit */int) (short)-20226)) : (((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 - 1])) <= (((/* implicit */int) arr_10 [i_0 - 1]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_3] [i_4] [(short)14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2481)) ? (((/* implicit */int) (short)-2503)) : (((/* implicit */int) (unsigned short)61804))));
                        arr_24 [i_0] [i_3] [i_4 + 3] [i_0] [i_6] [i_6] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_6 [i_6] [i_4 + 3] [i_3])) : (((/* implicit */int) var_8))))) <= ((~(arr_3 [i_3] [12U] [i_3]))));
                        arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_3 [3ULL] [i_3] [(unsigned char)11]))) <= (arr_11 [i_3 - 1])));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_21 &= ((/* implicit */short) (+((~(((/* implicit */int) ((((/* implicit */int) (short)-20226)) <= (((/* implicit */int) (_Bool)1)))))))));
                        arr_28 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (7U)));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_10 [i_0]))));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_40 [i_0 - 1] [i_0] [(_Bool)1] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_37 [(short)11] [i_9] [(short)17] [i_11]))));
                            arr_41 [i_0] [(unsigned short)3] [i_9] [(unsigned short)3] [i_9] [i_9] [i_9] = arr_38 [i_0] [i_0];
                            arr_42 [i_0] [i_9] [i_9] [i_8] [i_0] = var_6;
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (~(var_10)));
            var_24 += ((/* implicit */int) (+(arr_38 [i_8] [(_Bool)0])));
        }
        var_25 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [(short)2] [i_0] [i_0]))));
    }
    var_26 = ((/* implicit */_Bool) var_12);
    var_27 = ((/* implicit */signed char) (~(var_6)));
}
