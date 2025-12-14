/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81451
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : ((-(((((/* implicit */_Bool) var_8)) ? (1) : (((/* implicit */int) (signed char)118))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((arr_0 [i_0 + 3] [i_0 + 3]) <= (arr_0 [i_0 + 1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0 - 3])) != (((/* implicit */int) arr_5 [i_1])))))) : (var_8)));
                var_17 = ((/* implicit */int) var_8);
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0])))))) ? (max((((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_19 = (+(max((((/* implicit */unsigned long long int) arr_12 [i_3 - 1] [i_2 - 1] [i_0 - 3] [i_0])), (((((/* implicit */_Bool) arr_8 [i_2] [(short)5] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(_Bool)1] [3] [(_Bool)1] [i_0]))) : (0ULL))))));
                        arr_13 [21] [i_2 - 1] [21] [i_1] = ((/* implicit */_Bool) min((var_7), (((signed char) (!(((/* implicit */_Bool) var_11)))))));
                        var_20 = ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_3 [i_2 - 1])))), (((((/* implicit */int) (unsigned char)30)) <= ((~(((/* implicit */int) arr_11 [i_0 - 4] [i_1]))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_21 = (!(((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1] [i_4 + 2] [i_2])) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_4 + 2] [i_4])))));
                        var_22 += ((/* implicit */int) arr_11 [i_2] [i_0]);
                        var_23 = arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_1] [13];
                        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) || (((/* implicit */_Bool) arr_9 [i_4 - 1]))))), (min((((/* implicit */unsigned long long int) arr_9 [i_1])), (arr_10 [(_Bool)1] [i_1] [i_1] [i_1])))));
                    }
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)26545);
                    var_25 += ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) ((signed char) arr_2 [i_2 - 1])))));
                }
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (((-(((/* implicit */int) arr_5 [i_1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_0] [i_1])) < (var_12)))))))));
            }
        } 
    } 
}
