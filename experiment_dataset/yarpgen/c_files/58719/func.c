/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58719
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
    var_11 = ((/* implicit */short) max((var_6), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)57931)) : (((/* implicit */int) (short)15571))))) > (var_8))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) ((var_8) - (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)27661))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_1);
                        arr_11 [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15575)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (134217727U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2356271080250025946LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_3]))) : (var_8)))) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)12563)))))) : (((/* implicit */unsigned int) ((int) 2356271080250025946LL)))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4703495768025187463LL)) && (((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0] [i_0])))));
                        arr_12 [(short)9] = ((/* implicit */short) ((long long int) (unsigned short)4397));
                        var_14 = ((_Bool) ((((-1968206927321047867LL) + (9223372036854775807LL))) >> (((((/* implicit */int) min(((unsigned short)61139), ((unsigned short)7585)))) - (7551)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_2] [i_1]))))) : (9223372036854775807LL)));
                        var_16 = ((/* implicit */_Bool) ((((long long int) (signed char)-4)) | (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                    }
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_5] = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) arr_18 [i_0] [5]);
                            arr_22 [i_6] [(signed char)8] [(unsigned short)1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5 - 3] [i_5 - 2] [i_5 + 1] [i_5 - 3])) ? ((((_Bool)1) ? (((/* implicit */long long int) var_4)) : (arr_21 [i_0] [(signed char)10] [i_2] [i_5] [i_6]))) : (((/* implicit */long long int) arr_18 [i_0] [i_1]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) var_7)), (arr_2 [i_1] [(unsigned short)7] [i_7])))) <= (((long long int) var_8))))) : (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 0))) > (arr_17 [i_0] [i_0] [i_2] [i_5 - 2] [i_7] [i_2]))))));
                            arr_26 [i_0] [(signed char)2] [i_2] [11] [i_7] [i_7] [i_7] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_0] [3LL] [3LL] [i_5]))))) ? (-7403991051773357650LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)4527))) ? (((/* implicit */int) ((signed char) (short)-4527))) : (((((/* implicit */int) (signed char)4)) / (((/* implicit */int) var_3))))))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_14 [i_5 - 1] [i_1] [i_5 - 2] [i_5])), (var_6))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [(signed char)9] [i_2] [i_5 - 3] [i_0]))))))))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            arr_29 [i_0] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_4 [i_0]) / (((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [0] [i_8 + 1]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_8 - 1] [i_8 - 1]))))) : (var_4)))));
            arr_30 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-32717))));
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_4))));
        arr_31 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) 
    {
        arr_34 [i_9] [(unsigned short)1] = ((/* implicit */signed char) ((min((0), (((/* implicit */int) (signed char)24)))) & (((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9 + 1] [10LL] [i_9] [i_9] [i_9]))) < (var_4))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_13 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 1])) : (((/* implicit */int) (short)24941))))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_10), (((/* implicit */signed char) (_Bool)1))))) - (((((/* implicit */int) (unsigned short)8366)) * (((/* implicit */int) (unsigned char)96))))))) ? (((int) var_8)) : ((-(arr_15 [i_9] [i_9] [i_9 - 2]))))))));
        arr_35 [i_9 - 1] = var_0;
    }
    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        arr_38 [10LL] [i_10] = ((short) ((_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)24)) : (var_1))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_9))))) : ((-(991012901U)))))) ? (((/* implicit */int) ((unsigned short) min((-1882055933), (((/* implicit */int) var_7)))))) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_36 [i_10]) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (17966072824145740090ULL)));
    }
    var_23 = ((/* implicit */int) var_0);
}
