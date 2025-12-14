/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83730
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
    var_14 = (-(min((((/* implicit */long long int) var_8)), (8659504186111826463LL))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_2 [i_0]))))));
                    var_15 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_2]))));
                    var_16 = ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2])) ? (arr_4 [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1] [i_2]));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~(var_12)));
                    var_18 += ((/* implicit */long long int) (((~(((/* implicit */int) var_11)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */int) 16640515334638565524ULL);
        arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_10 [i_5] [i_5]) : (arr_10 [i_5] [i_5])));
        arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */_Bool) arr_9 [(unsigned char)1] [i_5] [i_5])) || (((/* implicit */_Bool) var_8))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((((/* implicit */_Bool) 6377855219768118815ULL)) ? (((/* implicit */unsigned long long int) -5152435969369075893LL)) : (min((((/* implicit */unsigned long long int) ((var_5) | (8400929152328604814LL)))), (((274876858368ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -838745792)) ? (1152912708513824768LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))));
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */int) var_2)) : (arr_12 [i_6]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6] [i_6]))) ^ (arr_0 [i_6])))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) (_Bool)1))))));
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2877318303U)) ? (((/* implicit */int) (short)-6793)) : (arr_10 [i_6] [i_6])))) : (min((arr_21 [i_6]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_4);
        arr_30 [i_7] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_7])) ? (8400929152328604820LL) : (((/* implicit */long long int) arr_20 [i_7])))), ((-9223372036854775807LL - 1LL))));
    }
}
