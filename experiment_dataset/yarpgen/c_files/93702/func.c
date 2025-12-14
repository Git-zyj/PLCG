/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93702
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((1372624536) != (((/* implicit */int) ((signed char) arr_2 [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_15 [(signed char)12] [8ULL] [i_2 - 2] [i_2] [8ULL] = ((/* implicit */unsigned short) (short)255);
                            arr_16 [i_2] [i_1] [i_2] [i_2] [17LL] = ((/* implicit */unsigned char) ((((((arr_3 [i_2 - 2] [i_2] [i_2]) ? (min((var_10), (var_7))) : ((-(((/* implicit */int) var_0)))))) + (2147483647))) << (((((((/* implicit */_Bool) ((signed char) (short)255))) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 - 2]))))))) - (545585845)))));
                            var_13 = ((((/* implicit */_Bool) (short)-256)) ? (((((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)26)))))) - ((+(arr_0 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [2ULL] [2ULL] [i_2] [i_3] [i_4]))))));
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            arr_20 [i_2] [i_1] = ((/* implicit */long long int) var_6);
                            arr_21 [i_2] [i_0] [i_1] [i_0] [i_2] [i_3] [(unsigned char)21] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) max((var_5), (((/* implicit */int) (_Bool)1)))))), ((+(((16570118714042776112ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned int) arr_24 [i_1] [i_2 + 1] [(_Bool)1] [i_3] [i_6] [i_1] [i_2 - 1]));
                            arr_26 [i_2] [i_2] [18LL] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_4)) - (44939))))) ^ (((/* implicit */int) ((short) var_7)))));
                            var_15 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1] [i_2] [i_3] [i_6]))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)36965)) : (((/* implicit */int) var_2))))));
                            var_16 = ((unsigned long long int) var_4);
                        }
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-255))) != (1768136952U)));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) (+(max((min((-1810285556), (((/* implicit */int) (short)255)))), (((/* implicit */int) (short)-255))))));
    }
    /* LoopSeq 4 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) var_1)))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_25 [i_7] [i_7] [(short)17] [i_7] [i_7])))) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_7 [i_7] [i_7] [i_7]))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28570)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_7])))))))));
        arr_30 [i_7] = ((/* implicit */unsigned short) (short)-240);
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((var_11), (((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_8) : (((/* implicit */long long int) var_10))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_3 [14] [i_8] [i_8])), (var_3)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-23164)))))));
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        var_22 = ((/* implicit */int) (+(((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_3)))))));
        var_23 = ((/* implicit */unsigned char) ((unsigned int) (-(arr_10 [i_9] [i_9] [i_9] [18] [i_9]))));
        var_24 = ((/* implicit */long long int) ((short) (short)255));
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            arr_41 [9ULL] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */long long int) (+(var_6)))) <= (((long long int) var_0)))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)0))));
        }
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(arr_5 [(signed char)0]))) : (((/* implicit */unsigned long long int) (+(((int) arr_27 [i_10])))))));
        /* LoopNest 3 */
        for (signed char i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    {
                        arr_50 [i_10] [i_13] [2ULL] [i_13] [i_14] [i_14 - 1] = ((/* implicit */unsigned char) ((13890902660331477711ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2263)))));
                        var_27 = ((/* implicit */long long int) ((signed char) ((int) var_9)));
                        arr_51 [i_13] [i_12 + 1] [i_12 + 1] [i_12] [2LL] = ((/* implicit */int) (unsigned char)1);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) ((short) var_8));
}
