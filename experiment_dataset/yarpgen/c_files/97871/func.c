/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97871
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) 7283528252523836971ULL)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_6))));
            var_14 = ((/* implicit */unsigned long long int) (unsigned short)23646);
            arr_7 [12ULL] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
        }
        var_15 += ((/* implicit */unsigned short) 23ULL);
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_16 += ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_5] [i_2 + 1])))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) < (min((((/* implicit */unsigned long long int) var_10)), (var_5))))))));
                        var_17 &= (+(max((((/* implicit */unsigned long long int) (unsigned short)65523)), (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    }
                } 
            } 
            arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((min(((unsigned short)2000), ((unsigned short)9614))), (var_10)))) : (((/* implicit */int) var_8))));
        }
        arr_18 [i_2] [i_2] = min((min((var_2), (((/* implicit */unsigned long long int) var_0)))), (min((((/* implicit */unsigned long long int) var_8)), (arr_8 [i_2 - 1] [i_2 - 1]))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
        arr_22 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [6ULL])) ? (arr_19 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_12));
        var_19 -= ((/* implicit */unsigned long long int) arr_9 [i_6] [i_6]);
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10376958098460845289ULL)) && (((/* implicit */_Bool) (unsigned short)9614))));
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        var_20 += (-(((((/* implicit */_Bool) var_3)) ? (var_12) : (var_4))));
        var_21 = var_1;
        /* LoopNest 2 */
        for (unsigned short i_8 = 3; i_8 < 10; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                {
                    arr_34 [i_8] [i_8] = ((/* implicit */unsigned short) (-(((arr_0 [i_8 - 3] [i_8 + 1]) / (var_2)))));
                    var_22 &= ((/* implicit */unsigned short) min((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_13 [i_8 - 2] [i_8] [i_8 - 2])))), ((!(((/* implicit */_Bool) arr_13 [i_8 + 2] [i_8] [i_9]))))));
                }
            } 
        } 
    }
    var_23 += var_6;
    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_9)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))) > (((/* implicit */int) var_6))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (var_0)));
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))), (((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8514))) % (36313972706993998ULL))) : (min((var_3), (var_5))))))))));
}
