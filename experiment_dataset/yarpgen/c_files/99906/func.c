/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99906
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
    var_12 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((var_5), (((/* implicit */unsigned long long int) (signed char)-98)))))))));
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)199)), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)82))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(max((arr_3 [(_Bool)1] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1]))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1])) ? (((arr_1 [i_0] [i_1]) % (arr_1 [i_0] [(unsigned short)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2 - 1])))))) ? (min((((/* implicit */long long int) var_2)), (arr_3 [i_1 - 1] [i_2 + 2]))) : (((/* implicit */long long int) -911790012))));
                    var_16 ^= ((/* implicit */_Bool) (~((-(-819772881)))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))) * (((arr_6 [i_0] [i_1 - 1] [i_2]) ? (arr_3 [i_0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (+(arr_14 [i_0] [i_1 - 1] [i_3 - 2] [i_4] [i_5 + 1])));
                                var_19 = ((/* implicit */_Bool) (signed char)126);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-98))))) ? (((/* implicit */unsigned int) -816678460)) : (arr_2 [i_1 - 1] [i_1])));
                    var_21 = ((/* implicit */long long int) arr_10 [i_0] [i_3] [i_1 - 1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_22 = ((((1106602185U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_6]))))) >> (((((/* implicit */int) (unsigned char)243)) - (227))));
                                var_23 = ((/* implicit */_Bool) arr_1 [i_0] [i_3 - 2]);
                                var_24 = ((/* implicit */long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)97)) << (((((/* implicit */int) arr_4 [i_1 - 1] [(unsigned short)7])) - (28)))))) ? ((-(arr_14 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) 3188365138U)))))));
            }
        } 
    } 
}
