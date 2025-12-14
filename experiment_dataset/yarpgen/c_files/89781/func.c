/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89781
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
    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_8))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)-9)) + (((/* implicit */int) (signed char)8)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (var_9) : (var_14));
        arr_3 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) : (var_16)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) (~(((2653247730U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))));
        var_24 = ((/* implicit */_Bool) var_14);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [(short)24])) < (14380733329688974163ULL))))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
                    var_26 = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) <= (arr_6 [i_1]))) ? (((long long int) var_14)) : (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) (signed char)2))))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) (_Bool)1)))))) != (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 2])) ? (3455576697U) : (1017570127U)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_14))));
                        var_29 = ((/* implicit */unsigned char) (-(839390599U)));
                        var_30 -= ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (signed char)-126)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 3912785810182476007LL))))))), (((/* implicit */unsigned int) (signed char)29))));
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (long long int i_9 = 3; i_9 < 23; i_9 += 4) 
            {
                {
                    var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-17))))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) - (var_14)))) * (((((/* implicit */_Bool) (short)31924)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    arr_28 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9 - 2] [i_8])))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned short) ((unsigned long long int) ((3455576702U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)31924))))));
    }
    for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 4) 
    {
        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10] [i_10] [i_10 + 1]))))))));
        var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)48))));
        var_35 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) (signed char)17)) == (((/* implicit */int) (short)-26512)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-31944))) / (arr_10 [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))))))))));
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((-1578245389795443320LL) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10 - 2] [i_10 - 2])))))) / (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)1))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_10])) >= (((/* implicit */int) arr_14 [i_10])))))));
    }
}
