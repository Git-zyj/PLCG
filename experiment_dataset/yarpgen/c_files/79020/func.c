/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79020
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (-(((int) (-(((/* implicit */int) var_6)))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) 0ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_13 [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) arr_12 [i_4] [i_4 + 2]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */int) var_5)) > (((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_4 - 1])) ? (((/* implicit */int) (short)-29258)) : (((/* implicit */int) (_Bool)0))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15820201576167708611ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_2 [i_4 + 1] [i_4 - 1])))) ? (((min((((/* implicit */unsigned int) var_13)), (var_7))) * (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (var_9))))) : (((((/* implicit */_Bool) (unsigned char)186)) ? (arr_9 [i_5 + 1] [i_4 - 1] [i_4 - 1]) : (arr_9 [i_5 - 1] [i_7] [i_4 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_8] [i_8])) ? (((/* implicit */long long int) var_7)) : ((-(-6343112686575677792LL))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_20 [i_8]);
                    var_20 = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2008502406U)) ? (((/* implicit */int) arr_1 [i_11])) : (((((/* implicit */_Bool) 12665056273476549345ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)74))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned int) 583262016)) - (max((var_12), (((/* implicit */unsigned int) arr_5 [i_11] [i_11] [i_11]))))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_6))));
    }
    for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) var_6);
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_4))));
        var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3415591160720291919LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_18 [i_12]))) * (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_13])) ? (var_3) : (((/* implicit */int) arr_27 [i_13] [i_13]))));
        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) 273103191)) ? (arr_2 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) / (((/* implicit */long long int) arr_28 [i_13]))));
        var_29 = ((/* implicit */_Bool) arr_4 [i_13] [i_13]);
        arr_31 [i_13] = ((/* implicit */unsigned char) 3520587676123293059ULL);
    }
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_1))));
}
