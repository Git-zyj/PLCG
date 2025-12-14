/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9765
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0])))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)121)) << (((16086560600475076384ULL) - (16086560600475076381ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_19)), (arr_7 [i_1 - 1])))));
                        arr_12 [i_0] [1U] [i_2] [i_2] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (short)8260)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)10143)) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)7629)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)5453)));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_15 [i_4]))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_14 [i_4]) : (arr_14 [i_4])));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((((/* implicit */long long int) 3510156346U)) | (5492799256414097516LL))))))));
                                var_27 = ((/* implicit */signed char) ((arr_17 [i_6]) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (+(var_17)));
                                var_29 ^= ((/* implicit */_Bool) var_0);
                                var_30 = arr_28 [i_10] [i_9] [21] [i_5] [i_4] [i_4];
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
    {
        var_31 ^= ((/* implicit */long long int) max(((+((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) 8869436078481652691LL)))));
        /* LoopNest 3 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    {
                        arr_42 [i_11] [i_12] [(signed char)22] &= ((/* implicit */unsigned short) (-(((((((/* implicit */int) (short)8242)) >> (((((/* implicit */int) arr_36 [i_11] [(_Bool)1] [(_Bool)1])) - (222))))) << (((((/* implicit */int) arr_38 [i_11] [i_11])) - (171)))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)144))))) ? (((9182539656773948503LL) - (4913343504704666899LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)159)), ((unsigned short)60087)))))))) <= (arr_30 [i_11] [i_11] [i_11] [i_11] [i_11])));
                        arr_43 [i_11] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) min((((/* implicit */int) var_14)), (((int) (+(((/* implicit */int) var_15)))))));
}
