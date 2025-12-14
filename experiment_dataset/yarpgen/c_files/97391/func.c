/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97391
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
    var_16 = ((/* implicit */signed char) ((((unsigned long long int) (-(10828747930744461533ULL)))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-25920)))))));
    var_17 &= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((unsigned short) arr_1 [i_0]))), (((var_13) & (((/* implicit */long long int) ((/* implicit */int) (short)25920))))))), (((/* implicit */long long int) var_2))));
        var_18 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_2);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_8 [i_1 + 1] [i_1] &= ((/* implicit */short) (_Bool)1);
        var_19 ^= ((/* implicit */signed char) var_8);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((int) var_12));
                        var_21 *= ((/* implicit */unsigned int) ((short) var_4));
                        arr_20 [i_2] [i_2] [i_2] [i_2] = var_11;
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_24 [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25921))))) < (((/* implicit */int) (unsigned char)12))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        var_22 += ((/* implicit */_Bool) ((unsigned char) ((var_0) % (var_7))));
                        var_23 = var_3;
                        arr_29 [i_2] [i_6] [i_7] [i_8 + 1] = ((/* implicit */unsigned int) ((var_12) ? (((/* implicit */unsigned long long int) var_5)) : (arr_18 [i_7 - 2])));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) << (((((/* implicit */int) (unsigned char)244)) - (243)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))) : (((/* implicit */int) (signed char)-107))));
        }
        for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_9 + 2] [i_9 + 2] [i_9])) > (((/* implicit */int) arr_16 [i_9 + 3] [i_9 - 1] [i_9]))));
            arr_32 [i_9] = ((/* implicit */_Bool) arr_10 [i_2] [i_2]);
            arr_33 [i_9] [i_9 + 1] = ((unsigned short) -1007117511);
        }
    }
    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */signed char) var_2);
        arr_37 [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_19 [i_10] [i_10] [i_10] [i_10])))) ? (((/* implicit */long long int) max((-1007117511), (((/* implicit */int) (short)25961))))) : (max((((/* implicit */long long int) (unsigned char)244)), (var_6)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)34797)), (arr_12 [i_10] [i_10])))), (arr_19 [i_10] [i_10] [i_10] [i_10])))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) != (arr_26 [i_10])))), ((unsigned char)23)))) ? (((/* implicit */long long int) max((var_4), (var_14)))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)2))) ? (min((((/* implicit */long long int) arr_17 [i_10] [i_10])), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (short)-25921)))))));
    }
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
    {
        arr_40 [i_11] = ((/* implicit */unsigned short) var_9);
        var_27 = ((/* implicit */int) var_13);
    }
}
