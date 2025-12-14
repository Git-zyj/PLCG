/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96831
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((var_11), (((/* implicit */unsigned int) var_14))))))) ^ (var_12)));
    var_17 = ((/* implicit */int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) / (((((/* implicit */unsigned long long int) 0)) ^ (18446744073709551600ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (signed char)3);
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * (var_5))) * (((/* implicit */unsigned long long int) (-(0U))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0]))))) * (((((/* implicit */long long int) arr_1 [i_0] [i_0])) / (arr_0 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) (signed char)14)), ((short)7022)))))))));
        arr_7 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] [13U] |= ((/* implicit */unsigned char) var_1);
        arr_11 [i_1] = ((/* implicit */unsigned char) var_6);
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)2047))))) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_1] [(signed char)21]))))));
            arr_15 [i_1] = (-((-(((/* implicit */int) arr_13 [14LL])))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_28 [i_4] [16U] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) 1715795381);
                            arr_29 [i_1] [i_4] [i_4] [i_5] [i_3] [i_4] = ((/* implicit */_Bool) (~(12332578128237809768ULL)));
                            arr_30 [i_4] = ((/* implicit */unsigned char) ((arr_8 [i_4]) && (((/* implicit */_Bool) arr_23 [i_1] [i_3 - 1] [i_5] [i_6 - 1]))));
                            arr_31 [i_6] [i_1] [i_1] [i_3] = ((/* implicit */int) ((arr_3 [i_5] [i_4]) != (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            } 
            arr_32 [i_3] [22ULL] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_1 [i_1] [i_3]))))));
            arr_33 [i_1] [i_3] = ((/* implicit */int) (((-(var_5))) + ((+(var_5)))));
            arr_34 [i_3] = ((/* implicit */_Bool) ((signed char) var_15));
            arr_35 [i_1] = ((/* implicit */signed char) var_12);
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_38 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)41)) <= (((/* implicit */int) var_13)))) ? (((/* implicit */long long int) arr_36 [i_7 - 1] [i_7 - 1] [i_1])) : (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_39 [i_1] = ((/* implicit */long long int) (+(var_12)));
        }
        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_49 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10]))) ^ (arr_21 [i_1] [i_9] [i_10])));
                        arr_50 [i_1] [i_8] [i_9] = ((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8]);
                        arr_51 [i_1] [i_1] [i_8] [i_8] [i_1] = ((/* implicit */long long int) (unsigned char)168);
                        arr_52 [i_1] [i_8] [i_9] [i_10] = ((long long int) var_15);
                        arr_53 [i_9] [5U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            arr_54 [9U] [9U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_42 [i_1] [(short)1] [i_8] [i_8])) : (((/* implicit */int) arr_42 [i_1] [i_8] [i_8] [i_8]))));
        }
    }
}
