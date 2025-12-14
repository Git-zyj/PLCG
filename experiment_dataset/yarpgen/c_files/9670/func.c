/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9670
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_1 [i_0] [0]))));
                var_20 = ((/* implicit */unsigned int) (((!(((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)13)))))) ? (((/* implicit */int) (unsigned short)7)) : ((-(((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65524))))))));
                var_21 *= ((/* implicit */signed char) (-(9521495305601614629ULL)));
                arr_6 [i_1] [(signed char)8] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned short)65516)) ? (2067536746U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97)))))));
                var_22 = ((/* implicit */short) ((unsigned short) (signed char)-102));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (+(max((((arr_0 [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (arr_4 [i_2] [i_2] [i_2]))), ((+(arr_8 [i_2])))))));
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))))) : ((+(min((((/* implicit */unsigned int) arr_0 [i_2] [i_2])), (var_1)))))));
        var_24 = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned short)65501)))), (max(((-(((/* implicit */int) arr_7 [(unsigned short)5] [i_2])))), (-1476427149)))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((((/* implicit */_Bool) arr_11 [i_3])) ? ((+(((/* implicit */int) (unsigned short)65493)))) : (((int) var_7)));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_16 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) arr_10 [(short)3]);
            arr_17 [i_3] = ((/* implicit */_Bool) ((arr_14 [i_3]) & ((~(var_1)))));
        }
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_21 [i_5] [i_3] [i_5] = ((/* implicit */signed char) arr_15 [i_3]);
            arr_22 [i_3] [i_5] [(unsigned short)2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_18 [i_5] [i_5])));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_20 [i_3] [i_3] [i_5])) : (1476427143)))) ? (1476427133) : (arr_15 [i_3])));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((long long int) 1476427140));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */unsigned int) -1476427153)) : (arr_19 [i_3] [i_3])));
            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)122))));
        }
        var_28 = ((/* implicit */int) arr_20 [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        arr_31 [i_7] = ((/* implicit */unsigned short) ((_Bool) arr_23 [i_7] [i_7]));
        arr_32 [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_7] [15LL])) ? (arr_18 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3035))))) - (((/* implicit */unsigned long long int) ((unsigned int) var_15)))));
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_29 = ((/* implicit */signed char) arr_34 [i_8]);
        var_30 = ((/* implicit */signed char) ((long long int) var_18));
        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47118)))))));
        var_32 = arr_33 [i_8];
    }
    var_33 -= ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) -1476427152)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65517))))) + (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    var_34 ^= ((/* implicit */short) ((((/* implicit */long long int) ((int) var_6))) == (((((/* implicit */_Bool) ((signed char) var_10))) ? (var_6) : ((~(var_7)))))));
    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) var_0))));
}
