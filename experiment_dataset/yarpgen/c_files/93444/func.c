/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93444
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) & (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (520198201809564993ULL)))) : (((arr_1 [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2])) : (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)17162)) < (((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_21 = (_Bool)1;
                            var_22 = ((/* implicit */_Bool) 7ULL);
                            arr_12 [i_2] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_2] = ((/* implicit */signed char) ((var_17) ? (min((((var_1) & (arr_2 [i_0]))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_2])) & (((/* implicit */int) arr_10 [i_0] [i_0])))))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((arr_3 [i_0] [i_0] [i_2]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)0))) < (((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))))) : (((unsigned int) (short)-23254)))))));
                                var_24 = ((/* implicit */unsigned long long int) ((signed char) (-(33552384U))));
                                var_25 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 - 3] [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) arr_11 [i_2] [i_2 + 3] [i_2] [i_2 - 3])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 3] [i_2 + 1] [i_2])))));
                            }
                            var_26 = ((/* implicit */signed char) 1356165596969327798ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] |= ((/* implicit */unsigned int) 2251799813685248ULL);
        var_27 = ((/* implicit */short) 1750454701U);
    }
    for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        var_28 *= ((/* implicit */signed char) min(((((+(18446744073709551609ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) max((min((arr_13 [i_6] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1]), (((/* implicit */unsigned short) arr_7 [i_6] [i_6] [i_6 - 2] [(signed char)6])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))))))));
        var_29 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_19))))))));
    }
    var_30 &= (_Bool)1;
}
