/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99537
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_18 |= ((/* implicit */unsigned char) ((max((min((var_17), (-7901681321748495275LL))), (arr_0 [i_0 - 3]))) << ((((~(min((((/* implicit */int) var_12)), (var_15))))) - (744688822)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (var_6))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_0))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 7402492971602431855ULL)))))));
        var_19 -= ((/* implicit */_Bool) (+((~((~(-1)))))));
        arr_3 [i_0] |= ((/* implicit */int) min((max((12710081364286525470ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (6253969909164961926LL))))));
        var_20 = max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 5736662709423026146ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (12710081364286525471ULL))))))), (min((((/* implicit */unsigned long long int) min((var_14), (var_14)))), (max((((/* implicit */unsigned long long int) var_15)), (5736662709423026161ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)17026)) <= (((/* implicit */int) (unsigned char)230)))))));
                        var_23 = ((/* implicit */_Bool) (~(12710081364286525483ULL)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */long long int) ((arr_6 [i_5] [i_5]) >= (18446744073709551603ULL)));
        arr_17 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)2485)))))));
    }
    var_25 = ((/* implicit */long long int) min((min((min((5736662709423026162ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40374)) && (((/* implicit */_Bool) var_8))))))), (max((min((((/* implicit */unsigned long long int) (unsigned short)14)), (12710081364286525469ULL))), (min((var_13), (((/* implicit */unsigned long long int) 2251799813423104LL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] = (-(0LL));
                        var_26 += (!(((/* implicit */_Bool) arr_18 [i_6 - 2])));
                        arr_35 [i_8] [i_7] [i_6] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)1023))))));
                    }
                } 
            } 
        } 
        arr_36 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)31))))) <= ((+(18446744073709551615ULL)))));
        /* LoopSeq 1 */
        for (int i_10 = 3; i_10 < 13; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        arr_44 [i_6] [i_6] [9LL] = (~((~(((/* implicit */int) (unsigned short)896)))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6 - 2])) && (((/* implicit */_Bool) var_2))));
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)47))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) arr_15 [i_6 - 3])) >= (((/* implicit */int) var_11)))))));
        }
    }
    var_30 = ((/* implicit */unsigned long long int) ((min((max((5736662709423026138ULL), (((/* implicit */unsigned long long int) (signed char)-122)))), (((/* implicit */unsigned long long int) max((var_5), (var_5)))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_16)), (min((((/* implicit */int) (unsigned char)164)), (var_15))))))));
}
