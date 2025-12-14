/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66150
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_17 += ((/* implicit */long long int) var_2);
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [(signed char)6] [i_0])))) * (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43693)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) : (((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    var_20 |= var_15;
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (((!((_Bool)0))) || (arr_0 [i_0 + 2] [i_0 + 2])));
        var_22 = ((/* implicit */_Bool) var_10);
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_23 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_10 [i_3]))))))), (((arr_9 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_8 [i_3])))) <= (((/* implicit */int) (_Bool)1)))))));
        arr_12 [i_3] = ((/* implicit */signed char) arr_8 [i_3]);
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_24 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_9 [i_4]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_4]))));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) arr_7 [8ULL]);
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned long long int) min(((_Bool)1), (arr_21 [i_5] [i_5]))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned char) (_Bool)1))))), ((-(arr_14 [(unsigned short)4])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5]))) >= (var_7)))) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 4 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */short) min((((/* implicit */int) max(((_Bool)1), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_13))))))), (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) (_Bool)1))))))));
        var_27 += ((/* implicit */signed char) arr_18 [i_6]);
        var_28 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (max((max((var_4), (var_8))), (((((/* implicit */_Bool) var_3)) ? (arr_23 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_28 [i_7]))) <= (((/* implicit */int) ((signed char) (_Bool)1)))));
        var_30 = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((unsigned char) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 24; i_10 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(arr_31 [i_9] [i_8])))) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_31 [i_8] [i_9])))))));
                    var_33 += ((/* implicit */unsigned int) max((max(((_Bool)1), ((_Bool)1))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_36 [i_9] [i_10 + 1] [i_10 - 1])))));
                    var_34 += ((/* implicit */signed char) arr_35 [i_10 - 1] [i_10 - 1] [(short)12]);
                }
            } 
        } 
        var_35 = ((unsigned int) (_Bool)0);
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_36 = ((/* implicit */signed char) (_Bool)0);
        var_37 = ((/* implicit */unsigned short) var_8);
    }
}
