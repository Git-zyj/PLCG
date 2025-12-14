/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61600
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) var_6);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((var_5) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((5353472564477966258ULL) & (5353472564477966258ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5353472564477966258ULL)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((333577698) - (((/* implicit */int) (unsigned char)199)))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (~(((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [3U] = ((/* implicit */unsigned short) (-(1867453234U)));
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (7998408059116081168LL)))) || (((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_2])))));
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) max((max((var_7), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((max((14704861208248292282ULL), (((/* implicit */unsigned long long int) 1882794032U)))), (((/* implicit */unsigned long long int) arr_4 [i_1])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (min((arr_3 [i_1]), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)2] [i_1] [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (526760894) : (((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((-(3609238684629016595ULL)))));
                arr_21 [13LL] [i_4] [i_1] [i_5] = ((/* implicit */long long int) 2456774949U);
            }
            /* vectorizable */
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                arr_26 [i_6 + 1] [i_1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                var_15 -= ((/* implicit */long long int) var_5);
            }
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_16 -= ((/* implicit */unsigned long long int) 1838192349U);
                arr_29 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) var_9);
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                arr_32 [i_4] [i_4] [16] &= ((/* implicit */unsigned long long int) 1791234062);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    arr_36 [i_1] [i_4] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    arr_37 [i_1] [i_1] [i_9] [i_1] [i_1] = ((/* implicit */unsigned short) arr_19 [i_1] [i_1]);
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1]))));
                }
            }
            arr_38 [i_1] = max((min((((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [i_1] [1ULL])), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))));
        }
    }
    for (short i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) 2501476465U)) / (((long long int) var_2)))))))));
        var_19 -= ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
    }
    var_20 = ((/* implicit */unsigned short) (((_Bool)1) || ((_Bool)1)));
}
