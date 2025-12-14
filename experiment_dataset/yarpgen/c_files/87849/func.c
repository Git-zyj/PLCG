/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87849
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
    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((3448771457U), (var_4))) >= (((var_8) ^ (2537297029U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1059268166U)) ? (2537297049U) : (0U)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : ((((+(3235699151U))) >> (((var_2) - (1057919136U))))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned int) (((((~(arr_0 [4U]))) ^ ((-(arr_1 [2U]))))) == ((-(arr_0 [i_0 + 1])))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 + 2]))))), ((-((+(arr_1 [i_0 + 1])))))))));
            var_13 = (+(((max((1599729022U), (3722435290U))) / (33554431U))));
            var_14 = ((((/* implicit */_Bool) ((unsigned int) ((arr_1 [i_0 - 1]) << (((3235699124U) - (3235699119U))))))) ? (((((/* implicit */_Bool) var_8)) ? (((var_6) % (3246097201U))) : (((((/* implicit */_Bool) 7U)) ? (arr_0 [i_0]) : (arr_1 [i_1]))))) : (((arr_0 [i_0 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (var_8))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
        {
            var_15 = ((((/* implicit */_Bool) 196608U)) ? (((4294967286U) ^ (4294967295U))) : (arr_0 [i_0 - 2]));
            arr_9 [i_2] [i_2] [i_2 - 1] = (~(((unsigned int) 50331648U)));
            var_16 = ((/* implicit */unsigned int) ((((var_6) % (arr_7 [i_0] [i_2]))) == (var_3)));
            var_17 = ((/* implicit */unsigned int) (((+(arr_4 [i_2 + 1]))) == (var_5)));
        }
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
        {
            var_18 = ((((((/* implicit */_Bool) 1024093743U)) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (3448771452U))) * (arr_3 [i_0 + 1] [i_3 + 1]));
            var_19 |= (-((~(arr_4 [i_3]))));
            arr_13 [i_3] = ((unsigned int) (+(var_6)));
            arr_14 [i_3] = arr_1 [i_0];
        }
        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
        {
            arr_18 [i_4] = 365957489U;
            var_20 = (-(134217727U));
        }
    }
    var_21 = ((((/* implicit */_Bool) var_1)) ? (1848035125U) : (var_1));
}
