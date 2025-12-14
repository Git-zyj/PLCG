/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88279
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) - ((~(var_11))))))));
    var_18 = ((/* implicit */long long int) min((var_4), (min((min((((/* implicit */int) var_10)), (309246339))), (((/* implicit */int) var_7))))));
    var_19 = ((/* implicit */unsigned long long int) ((short) var_13));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */long long int) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) -309246340))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)12088))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) (~(var_11))))));
        arr_2 [i_0] = max((max(((+(((/* implicit */int) (short)30073)))), (((var_4) ^ (var_4))))), (((/* implicit */int) ((signed char) 309246333))));
        var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [(short)3] [i_0 - 2])) + (((((/* implicit */_Bool) min((var_5), (arr_1 [17ULL] [17ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18158513697557839872ULL)))))) : (max((((/* implicit */unsigned long long int) var_8)), (288230376151711735ULL)))))));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_1 + 1] [i_1]))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)104)))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)4]))) : (((unsigned long long int) max((-309246352), (arr_3 [(short)10])))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-(min((((18158513697557839864ULL) + (((/* implicit */unsigned long long int) -1026063240)))), (((/* implicit */unsigned long long int) var_10)))))))));
        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(5242719301858771565ULL))) - (((/* implicit */unsigned long long int) (+(-309246350)))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_3])))))), (((((/* implicit */unsigned long long int) max((339781636), (((/* implicit */int) (unsigned short)13928))))) % (max((((/* implicit */unsigned long long int) arr_4 [i_3])), (var_14)))))));
            arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) (signed char)-2))))) != (arr_10 [i_3]))))) >= ((+(3282450577837818579ULL)))));
            var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((-1026063247) != (1026063257)))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2])))))))));
        }
        arr_14 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((long long int) arr_3 [6]))));
        var_28 -= ((/* implicit */short) (!(((((/* implicit */unsigned long long int) 1026063256)) == (((((/* implicit */_Bool) 1026063238)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_11 [i_2] [i_2] [i_2])))))));
        arr_15 [17ULL] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1026063250)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(-7046785840969491218LL)))) || (((/* implicit */_Bool) (~(var_15))))))) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) != (arr_12 [(short)14] [i_2 - 1]))))));
    }
}
