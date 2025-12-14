/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5552
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) 1121155234126309652ULL);
                                var_21 = ((/* implicit */long long int) max((var_21), (arr_6 [i_4] [i_1] [i_1])));
                                var_22 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned short) (signed char)-3);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) -391285375)), (var_17)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))))));
    /* LoopSeq 3 */
    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1121155234126309655ULL))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [i_5]) ^ (((arr_14 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) (short)-599)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_14 [i_5]) : (((/* implicit */long long int) -391285375))))), (arr_15 [i_5] [i_5]))) : (arr_15 [i_5] [i_5])));
        var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) (short)598)) ? (17325588839583241970ULL) : (((/* implicit */unsigned long long int) var_1)))) >= (arr_15 [i_5] [i_5])))), (max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((arr_15 [i_5] [i_5]) > (arr_15 [i_5] [i_5]))))))));
    }
    for (unsigned short i_6 = 4; i_6 < 8; i_6 += 3) 
    {
        var_27 = ((/* implicit */short) arr_12 [i_6 - 1] [i_6] [(unsigned short)11]);
        arr_18 [i_6] = ((/* implicit */long long int) ((arr_2 [12] [i_6] [10LL]) << (((((int) arr_15 [i_6] [(_Bool)1])) - (1133790517)))));
    }
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        arr_21 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1421004778)) * (max((arr_15 [16ULL] [16ULL]), (((/* implicit */unsigned long long int) arr_19 [11U]))))))) ? (max((((/* implicit */long long int) var_12)), (2765124364557015459LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) (unsigned short)32175))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(arr_14 [11U])))))));
        var_28 *= min((((/* implicit */unsigned long long int) min((-391285388), (((/* implicit */int) arr_20 [i_7] [i_7]))))), ((-(1121155234126309648ULL))));
    }
}
