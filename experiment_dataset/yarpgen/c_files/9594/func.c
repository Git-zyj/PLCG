/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9594
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) arr_4 [i_1]))) : (((/* implicit */int) var_3))));
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) ((-839569522) % (((/* implicit */int) (signed char)22))))), (((arr_2 [i_1] [i_1] [i_0]) & (arr_2 [i_1] [i_1] [i_0])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_6 [i_0] [i_0]));
                }
                for (signed char i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2])))) ? (max((((/* implicit */long long int) var_8)), (arr_3 [i_3 - 1]))) : (arr_3 [i_3 + 2])));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_11 [i_1] [i_3] [i_0]))))) ? ((~(((/* implicit */int) arr_17 [i_4] [i_1] [i_3] [i_3 - 1] [i_1])))) : (((((/* implicit */int) arr_11 [i_0] [i_1] [i_0])) & (((/* implicit */int) var_12))))));
                                arr_20 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0] = ((((/* implicit */int) arr_10 [i_0])) > (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_10 [i_4])))) : (((/* implicit */int) arr_16 [i_3 + 2] [i_1] [i_0] [i_4] [i_3] [i_3])))));
                                arr_21 [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_13) ? (arr_15 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))) ? (arr_15 [i_5] [i_3] [i_3] [i_1] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_1] [i_3] [i_3 + 1] [i_0])))));
                                var_17 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) arr_2 [i_0] [i_5] [i_3])) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (signed char)0))))));
                            }
                        } 
                    } 
                    arr_22 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_7))) < (((((/* implicit */_Bool) arr_7 [i_3] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) (short)-4341))))));
                }
                arr_23 [i_1] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (((((/* implicit */_Bool) 8571772193178660139ULL)) ? (21ULL) : (((/* implicit */unsigned long long int) -1157159782)))))) ? (((/* implicit */int) var_5)) : (((var_13) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) min((var_8), (var_11)))), (23U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_1)), (max((var_6), (((/* implicit */signed char) var_1))))))))));
    var_19 = (~((+(((/* implicit */int) (signed char)-90)))));
}
