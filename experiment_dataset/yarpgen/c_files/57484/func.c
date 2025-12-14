/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57484
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
    var_16 = ((/* implicit */unsigned char) ((unsigned short) var_0));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1488019808)) : ((~((~(arr_1 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2358310053U) >> (((arr_1 [i_1]) - (143925474U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */unsigned int) (unsigned short)19727)), (arr_4 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) 4015088651U)) ? (((/* implicit */unsigned int) 256818702)) : (1602381333U))) : (min((((/* implicit */unsigned int) arr_5 [i_1] [i_0] [i_1])), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) 577545942)) : (2358310023U)))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) min(((~(max((((/* implicit */unsigned int) var_12)), (var_7))))), (((/* implicit */unsigned int) ((unsigned short) (~(arr_1 [i_0])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((arr_9 [i_0] [i_0]) >> ((((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_2])), (arr_3 [i_0] [i_2] [i_0])))))) + (2)))));
            arr_11 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2358310075U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2] [i_2]))) : (arr_4 [i_2] [i_2])))) ? (((8279388596732330585LL) >> (((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) - (42058))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8279388596732330585LL))))))))) : (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2358310075U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2] [i_2]))) : (arr_4 [i_2] [i_2])))) ? (((8279388596732330585LL) >> (((((((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) - (42058))) + (12049))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8279388596732330585LL)))))))));
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned int) 1488019811))))) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_2])) : (((/* implicit */int) var_2))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 |= ((/* implicit */long long int) ((min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (2358310053U)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16705)) ? (1936657242U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61737))))))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16738))) : (6513736759302994750ULL)))) ? (arr_14 [(signed char)2]) : (var_9))))));
        }
        var_19 = ((/* implicit */short) arr_14 [4]);
    }
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_4])), (10918632897544813123ULL)))) ? (max((arr_14 [i_4]), (((/* implicit */long long int) ((unsigned char) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))));
        var_21 = ((/* implicit */unsigned short) arr_4 [i_4] [i_4]);
        var_22 = ((/* implicit */int) arr_1 [i_4]);
    }
}
