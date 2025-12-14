/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85652
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 0);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_14 |= ((/* implicit */short) ((0) - (arr_4 [(_Bool)1] [i_1 + 1] [(_Bool)1])));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
            {
                var_15 += ((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 1] [(signed char)4]);
                var_16 = ((/* implicit */unsigned char) (short)12920);
            }
            for (short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
            {
                var_17 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))));
                arr_10 [i_0] [7ULL] [i_0] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) arr_9 [i_3])) + (var_12)))));
                var_18 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (arr_8 [11ULL] [i_1 + 1] [i_1 + 1] [i_1 + 1]));
            }
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
            var_19 = ((/* implicit */unsigned char) (!(((14) >= (((/* implicit */int) (unsigned short)42475))))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] = min(((-(((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1])))), (((/* implicit */int) (short)12891)));
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned long long int) (signed char)22);
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((int) var_1)))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_19 [i_0] [(short)4] [i_5]))))))) : (var_6)));
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42454)))))) * (var_5))) | (((/* implicit */long long int) ((int) arr_13 [i_5 + 1] [i_0])))));
        }
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) (~(((/* implicit */int) arr_19 [i_0] [i_0] [4ULL]))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10))))))) : ((+((~(((/* implicit */int) var_0))))))));
        arr_25 [i_6] [i_6] = (~(((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (arr_22 [i_6] [i_6]) : (arr_22 [i_6] [i_6]))));
    }
    var_23 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_12)))) ? (var_11) : (((/* implicit */int) ((short) var_4))))), (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7))) <= (var_5))))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), (max((max((((/* implicit */long long int) -1057008100)), (var_5))), (((long long int) var_13)))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_5)))), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))) : (max((((((/* implicit */_Bool) 1056270180)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41160))) : (var_2))), (((/* implicit */unsigned long long int) var_4))))));
}
