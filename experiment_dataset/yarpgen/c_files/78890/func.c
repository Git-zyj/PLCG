/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78890
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
    var_16 = ((/* implicit */unsigned int) ((min((5730452124125871619LL), (((/* implicit */long long int) 4294967295U)))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58220)) >> (((3376886840U) - (3376886814U))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned int) ((short) ((((/* implicit */_Bool) 3376886820U)) ? (((/* implicit */long long int) var_7)) : (arr_1 [i_0])))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */long long int) 918080459U)) ^ (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -5829112852097963464LL)) ? (((/* implicit */int) (unsigned short)62230)) : (((/* implicit */int) (short)-16946)))))))) * (((unsigned long long int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (unsigned short)16710;
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))) || (((/* implicit */_Bool) (unsigned short)16718))));
            var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) ^ (arr_3 [i_1 + 2])));
        }
        for (short i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_22 = ((/* implicit */short) var_6);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((3603587516U) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_1 + 2] [i_3 - 1] [i_1])))))));
                        var_24 = ((/* implicit */long long int) var_3);
                        arr_17 [10U] [i_3] [i_1] [i_5] = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) (+(918080456U)))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                        var_25 += arr_4 [(short)2];
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_7))));
                var_27 -= ((/* implicit */unsigned int) (~(((long long int) var_0))));
                var_28 = ((/* implicit */short) arr_12 [i_1] [(_Bool)1] [i_1]);
            }
            var_29 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [16U] [i_1 + 2] [i_3] [16U]))))) ^ (arr_15 [i_3] [i_3 - 1] [i_1] [i_1 + 1]))) >> (((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_3] [i_3 + 1])) : (-2287646585499597249LL)))) ? ((~(arr_12 [12U] [18U] [12U]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [6ULL])))))) - (7294949991815291921ULL)))));
        }
    }
    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 1] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_18 [i_7] [i_7 + 1] [i_7] [i_7 - 1])) : (((/* implicit */int) arr_18 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))))));
        arr_24 [i_7] = ((/* implicit */short) min((((unsigned int) var_12)), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7])) + (2147483647))) >> (((((/* implicit */int) arr_14 [(unsigned short)11] [i_7 - 1] [i_7 + 2] [i_7 - 1] [1LL] [i_7])) + (14246))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 4; i_8 < 12; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_30 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) ((-2287646585499597249LL) - (((/* implicit */long long int) var_15)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9])) ? (15490141307374793935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) (-(arr_4 [i_8])))) : (max((((/* implicit */long long int) var_3)), (arr_7 [i_8] [i_8])))))));
                    var_31 = ((/* implicit */unsigned long long int) arr_18 [i_8] [i_9] [i_10] [i_10]);
                }
            } 
        } 
    } 
}
