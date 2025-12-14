/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80619
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    var_12 = ((((_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (short)-5398)) > (((/* implicit */int) (short)5397))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-5411)) ^ (((/* implicit */int) (unsigned short)12902))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_6)))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-17350)))) > (((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9577))) : (arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) arr_1 [i_0]);
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [(unsigned char)5]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_6)) >> (((arr_1 [i_1]) + (1525546094)))))))) ? (max((((long long int) var_4)), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (arr_0 [i_0] [11ULL])))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) && (var_10)))))));
        }
        for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (min((var_2), (((/* implicit */unsigned char) ((arr_1 [i_0]) < (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_3])))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((int) arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1])) == (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) max((arr_3 [(_Bool)1]), (((/* implicit */unsigned short) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)3]))))))))))));
            }
            for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)23744)) * (((/* implicit */int) ((signed char) (_Bool)1)))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)206)) / (((/* implicit */int) (_Bool)1))));
            }
            var_21 = ((unsigned char) ((arr_7 [i_2 - 1] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [11] [11])))));
        }
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+((-(((int) arr_5 [i_5] [(unsigned char)6] [i_5])))))))));
        var_23 = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((short) arr_1 [i_5]))));
        var_24 = ((((((/* implicit */int) arr_12 [i_5])) / (((/* implicit */int) arr_12 [i_5])))) + (var_5));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        arr_25 [(unsigned char)8] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_6])) - (((/* implicit */int) arr_24 [i_6]))));
                        var_25 = ((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_6]);
                        var_26 += ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_9]))));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [(unsigned char)12] [i_7])) + (2147483647))) << (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((unsigned char) arr_17 [i_9] [i_8] [i_8])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((((/* implicit */int) arr_17 [i_6] [(short)21] [(short)21])) * (((/* implicit */int) arr_29 [i_6] [i_6] [i_6])))) : (((arr_29 [i_6] [i_6] [i_10]) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) arr_16 [i_6]))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 23; i_11 += 4) 
            {
                arr_33 [i_6] = ((((/* implicit */_Bool) arr_23 [i_6] [i_10] [i_6] [i_11 - 1])) ? (((/* implicit */int) ((short) arr_17 [i_6] [i_10] [i_11]))) : (((/* implicit */int) arr_16 [i_6])));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6] [i_11 - 2] [i_11] [i_6])) ? (((/* implicit */int) arr_20 [i_11 + 2] [i_11 - 2] [i_11] [i_11 - 1])) : (((/* implicit */int) (unsigned char)47))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_11] [i_11 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_6] [i_6] [i_11 + 1]))));
                arr_34 [i_6] [i_11] [i_11] &= ((unsigned char) arr_23 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]);
            }
        }
        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            arr_39 [i_6] [i_12] [i_12] = ((/* implicit */long long int) ((unsigned char) arr_19 [i_12] [i_6] [i_6]));
            arr_40 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [i_6] [i_12] [i_12]))));
            arr_41 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_6] [i_6])) ? (((/* implicit */int) arr_21 [i_6] [i_12])) : (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 24; i_14 += 1) 
                {
                    {
                        arr_48 [i_6] = ((/* implicit */unsigned short) arr_46 [i_6] [i_6] [i_6]);
                        var_30 = ((unsigned char) (unsigned char)231);
                        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) - (arr_27 [i_6] [(unsigned short)9] [22]))) + (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        arr_49 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6]);
    }
    var_32 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) / ((((+(((/* implicit */int) var_10)))) - (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_4)))))))));
}
