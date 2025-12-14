/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58957
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((((-1149365578) + (2147483647))) << (((var_4) - (5818094329379807230LL))))) >= (-1149365572)));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (-1646480096) : (((/* implicit */int) (unsigned char)3)))), (arr_2 [i_0] [i_1]))) : (((int) arr_4 [i_0] [i_2 + 1] [i_2])))))));
                    var_15 += (-(((/* implicit */int) arr_0 [i_0])));
                }
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_11)));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+((-(((arr_13 [i_3] [i_3] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
                            {
                                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_3] [i_3] [i_5 - 1])) : (((/* implicit */int) arr_4 [i_4] [i_5] [i_5]))))));
                                var_19 = ((/* implicit */unsigned long long int) var_0);
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_8 = 3; i_8 < 10; i_8 += 1) 
                            {
                                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) (unsigned short)13408)) ? (5279235610987519971LL) : (((/* implicit */long long int) -1646480096)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_21 ^= ((/* implicit */long long int) (~(2402833137U)));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((((-5269137903918979427LL) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) arr_24 [i_3] [i_3] [i_5] [i_6] [i_3])))) + (39))) - (5)))));
                                var_23 = ((/* implicit */signed char) max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_6] [i_5 - 1] [i_4])) >= (4528827295119238204ULL)))))), (((((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)-119)))) % (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_16 [i_9 + 3] [i_4] [i_9] [i_9]))));
                            }
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) ((signed char) arr_20 [i_4] [i_4] [i_4]))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)111)) && (((/* implicit */_Bool) var_3)))))))));
            }
        } 
    } 
}
