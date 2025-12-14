/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62297
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((unsigned long long int) ((short) var_10)));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) -1LL);
        var_14 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_1]))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_11 [5] = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_14 [i_2] [i_3] = arr_12 [i_2];
            var_15 = ((/* implicit */long long int) (~(arr_2 [i_2])));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_4]) : (arr_7 [i_2])));
                var_17 = ((/* implicit */int) var_1);
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(arr_13 [i_2] [i_2] [i_2]))))));
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                arr_26 [i_2] [i_2] = ((/* implicit */short) var_0);
                arr_27 [i_2] [i_2] [13LL] [i_2] = ((/* implicit */long long int) (signed char)-25);
                arr_28 [(signed char)1] [i_6] [i_4] [(unsigned char)4] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_17 [i_2] [i_4])) ? (((/* implicit */long long int) arr_7 [i_2])) : (var_0))));
            }
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
            {
                var_19 = ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) -1586752617)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_7] [i_4] [i_2])) | (((/* implicit */int) arr_19 [i_2] [(signed char)12] [i_7]))));
            }
            for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
            {
                arr_35 [(signed char)2] [i_4] [(signed char)2] [i_8] = ((/* implicit */signed char) arr_23 [i_2] [i_2] [i_2]);
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_4])) & (((/* implicit */int) (_Bool)1)))))));
                var_22 ^= 9007199254736896ULL;
            }
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (~(18437736874454814715ULL)));
                        var_24 = ((/* implicit */signed char) ((unsigned int) arr_29 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]));
                        var_25 *= 18261203572543097506ULL;
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
            arr_41 [i_2] [i_4] = ((/* implicit */short) -1LL);
        }
    }
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        arr_44 [i_11] = ((/* implicit */short) (_Bool)1);
        var_27 = ((/* implicit */unsigned char) arr_43 [i_11] [(short)2]);
        arr_45 [i_11] |= ((/* implicit */signed char) max((min(((-(((/* implicit */int) arr_43 [i_11] [i_11])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_9)))))), ((-(((((/* implicit */int) (unsigned short)28672)) - (((/* implicit */int) var_6))))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max(((~(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) min((arr_43 [i_11] [i_11]), (arr_43 [i_11] [i_11])))))))));
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */int) ((signed char) arr_43 [i_11] [i_11]))), ((~(((/* implicit */int) arr_43 [i_11] [i_11])))))))));
    }
    var_30 = ((/* implicit */unsigned int) ((int) var_8));
}
