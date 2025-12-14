/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64839
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [16U])) % (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_15 = ((/* implicit */int) ((short) (unsigned char)108));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)9102))));
        arr_4 [i_0] [i_0] = (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (((((/* implicit */_Bool) (unsigned short)56417)) ? (arr_0 [i_0]) : (9448138451910230955ULL))));
        var_16 ^= ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6083364318300531469LL)) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            for (short i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                {
                    var_17 += ((/* implicit */long long int) (unsigned char)118);
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(arr_11 [(unsigned short)1] [i_3] [19U] [i_3 - 2]))))));
                }
            } 
        } 
        arr_12 [(short)5] [8U] = ((/* implicit */_Bool) (-(arr_7 [i_1 - 1])));
        var_19 = 6083364318300531471LL;
        arr_13 [i_1] [0U] = ((/* implicit */int) ((long long int) arr_6 [i_1 + 1]));
    }
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_5 - 3] [i_4 + 2] [i_4 - 1] [i_4])) + (((/* implicit */int) arr_10 [i_5 + 3] [i_4 + 3] [i_4 + 2] [i_4 - 1])))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_4 + 3] [i_4 + 1] [(short)1])) : (((/* implicit */int) arr_10 [i_5 - 3] [i_4 + 2] [i_4 + 1] [i_4]))))));
                    arr_21 [(unsigned short)4] [i_4] = ((/* implicit */int) ((min((var_5), (((/* implicit */unsigned long long int) (unsigned char)41)))) > (((/* implicit */unsigned long long int) (~(arr_20 [i_4 - 1] [i_5 + 3] [i_6]))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_11 [i_4] [i_4] [i_4] [1ULL]))))));
        arr_22 [i_4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)7141))));
        var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6083364318300531486LL))))), (arr_11 [i_4 + 2] [i_4 - 1] [i_4 + 3] [i_4])));
        var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_4] [(unsigned char)1])) > (((/* implicit */int) var_12))))), (max((((/* implicit */unsigned int) var_7)), (arr_2 [i_4]))))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 4; i_7 < 18; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_31 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)56433)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))) : (arr_6 [i_7 - 3])));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7 - 4] [i_7 - 2])) ? (((/* implicit */int) arr_9 [i_7 - 4] [i_7 - 2])) : (((/* implicit */int) (unsigned short)9102))));
                }
            } 
        } 
        var_25 -= ((/* implicit */unsigned int) arr_10 [i_7 - 1] [i_7 - 1] [i_7 - 4] [i_7]);
    }
    var_26 = ((/* implicit */unsigned int) ((long long int) -1LL));
}
