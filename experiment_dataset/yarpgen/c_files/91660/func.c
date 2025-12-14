/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91660
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)7]);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_13 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((((int) (short)-1)) + (2147483647))) << (((max((((/* implicit */int) max(((short)0), ((short)6)))), (arr_4 [i_1] [i_2] [i_1]))) - (6)))))) : (((/* implicit */short) ((((((int) (short)-1)) + (2147483647))) << (((((max((((/* implicit */int) max(((short)0), ((short)6)))), (arr_4 [i_1] [i_2] [i_1]))) - (6))) - (117080762))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */int) arr_1 [i_4] [i_1]);
                            var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((~(((/* implicit */int) (short)-15))))))), (min((arr_2 [i_1]), (((/* implicit */long long int) arr_5 [i_4] [(short)5]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_5]);
                            var_17 = ((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])), (max(((~(((/* implicit */int) (short)13)))), (max((arr_15 [i_1]), (((/* implicit */int) (short)-2))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_7))));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = (-(((/* implicit */int) (short)-1)));
                            var_20 = ((/* implicit */long long int) arr_6 [i_1]);
                            var_21 = ((/* implicit */long long int) (short)-17);
                            arr_19 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15)) <= (((/* implicit */int) (short)6))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */short) arr_0 [(signed char)8]);
                        arr_23 [4LL] [4LL] [i_1] = ((/* implicit */unsigned int) ((min((arr_2 [i_1]), (arr_2 [i_1]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18)) ? ((+(((/* implicit */int) (short)-6)))) : (((/* implicit */int) (short)-19)))))));
                    }
                    var_22 = ((/* implicit */short) arr_6 [i_1]);
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (short)-5))))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)-1))))) : (((((/* implicit */int) var_3)) << (((var_7) - (3584125461U)))))))) < (var_4));
    var_24 = ((/* implicit */_Bool) (short)-17);
}
