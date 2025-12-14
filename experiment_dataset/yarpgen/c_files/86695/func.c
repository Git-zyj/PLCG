/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86695
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), (var_2)))), ((short)27347)))) > (((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_1] [i_1]));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-95)))) > (max((((/* implicit */long long int) -1367226208)), (max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (arr_6 [i_0]))))))))));
                    var_17 = ((/* implicit */int) var_2);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) var_4);
        arr_10 [i_0] = ((/* implicit */short) var_5);
    }
    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            arr_17 [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_13 [i_3 - 1] [i_4 - 1]))));
            var_19 &= ((/* implicit */signed char) ((unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (2905854118U))))));
        }
        var_20 = ((/* implicit */unsigned char) 1613313336);
        var_21 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_12 [i_3]))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (arr_16 [i_3])))), (max(((unsigned char)32), (((/* implicit */unsigned char) (_Bool)1))))));
    }
    for (int i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        var_23 = ((((/* implicit */int) arr_11 [i_5])) ^ (((((((int) 2199023255551LL)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)10979))))))));
        arr_22 [i_5] = ((/* implicit */long long int) 4200106099U);
        var_24 = ((/* implicit */unsigned int) ((min((814222095816528684LL), (((/* implicit */long long int) (signed char)15)))) < (-8132592381503636067LL)));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((long long int) arr_19 [i_5])) < (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5 - 1])))))), ((signed char)125)));
            var_26 = ((/* implicit */signed char) arr_16 [i_5]);
        }
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 9; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                arr_37 [i_7] [i_8] [i_9 - 2] [i_10] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1]), (arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1])))), (((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_24 [i_7 - 1] [i_8 - 1] [i_8 - 1]))))));
                                arr_38 [i_7] [i_8] [i_8 - 1] [i_9 + 1] [i_10 - 3] [i_11] [i_11] = ((/* implicit */signed char) ((short) arr_36 [i_7] [i_8] [i_7] [i_7 - 1] [i_7]));
                                var_27 = ((/* implicit */long long int) (+(arr_16 [i_8])));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) arr_25 [i_9 - 2] [i_8]);
                    arr_39 [i_8] [i_8] [i_8] = ((/* implicit */signed char) min((arr_14 [i_7] [i_8] [i_8 + 1]), (((/* implicit */unsigned int) var_12))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_12 = 3; i_12 < 9; i_12 += 2) 
        {
            var_29 = (unsigned char)250;
            var_30 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-95))));
            arr_43 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) var_1);
            var_31 -= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)33))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((arr_16 [8LL]) >> (((arr_25 [i_12] [i_7 - 1]) - (3424401212U))))))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_13 = 4; i_13 < 15; i_13 += 4) 
    {
        for (short i_14 = 0; i_14 < 16; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (short i_16 = 1; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_32 |= ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_11 [i_13])), (((unsigned short) (unsigned char)212))));
                            arr_57 [i_16 + 2] [i_15] [i_14] [i_13 + 1] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (short)-8553)) <= (arr_7 [i_13 + 1] [i_14] [i_16 + 2])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_16 + 2] [i_16] [i_16] [i_16])) && (((/* implicit */_Bool) arr_9 [i_16 + 1] [i_16] [i_16] [i_16 + 1])))))));
                            var_33 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14] [i_16 + 2]))));
                            var_34 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (signed char)-122)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
                            {
                                var_35 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_15 [i_13 - 2] [i_14] [i_15])) ? (-2199023255552LL) : (8511123751453032907LL))));
                                arr_61 [i_13] = ((/* implicit */unsigned long long int) arr_21 [i_13] [i_14]);
                                var_36 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_0)));
                            }
                        }
                    } 
                } 
                arr_62 [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) arr_12 [i_13]);
            }
        } 
    } 
}
