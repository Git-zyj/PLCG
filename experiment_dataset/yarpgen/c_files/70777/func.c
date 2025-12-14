/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70777
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_8))) && (((((/* implicit */_Bool) (unsigned short)65056)) && (((/* implicit */_Bool) 6879672414226765955ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_4 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_12 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)477))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_2]) >> (((((/* implicit */int) arr_10 [i_0])) - (29266)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_9))))))) ? ((-(((/* implicit */int) var_12)))) : (arr_4 [i_1] [i_1] [i_1])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_16 += ((/* implicit */unsigned long long int) ((17ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                arr_15 [(signed char)12] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_2] [i_4]))));
                                var_17 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_4)))));
                                var_18 = (unsigned char)44;
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned short) var_6))));
    var_22 = var_4;
}
