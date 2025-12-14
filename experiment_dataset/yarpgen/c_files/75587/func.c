/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75587
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))), (((((/* implicit */int) (!((_Bool)1)))) * (((((/* implicit */_Bool) (short)23066)) ? (((/* implicit */int) (short)-26007)) : (((/* implicit */int) var_9))))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((arr_3 [i_1]), (arr_3 [i_0]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) | (7ULL)))))) ? ((+(max((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25512)) ? (((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])), (arr_3 [i_3 - 1]))))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+((+((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_3])) : (((/* implicit */int) (_Bool)1)))))))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) | (((/* implicit */int) ((short) (_Bool)1))))) | (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))), (((/* implicit */int) (!((_Bool)1)))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (unsigned short)11679)) : (((/* implicit */int) (unsigned char)15)))) - (11664)))))) ? ((+((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_21 = (_Bool)1;
    var_22 = (_Bool)0;
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [(short)16] [i_5]))) + (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_4] [i_5] [i_5]))))))))));
                var_24 = ((/* implicit */_Bool) arr_1 [(short)11]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)0)))) % (min(((((_Bool)0) ? (((/* implicit */int) (short)-3705)) : (((/* implicit */int) arr_11 [i_6])))), (((/* implicit */int) (unsigned char)116))))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (((+(((var_10) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))) * (min(((+(((/* implicit */int) arr_10 [(unsigned char)16])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(_Bool)1] [(_Bool)1])), (arr_11 [(_Bool)1])))))))))));
                }
            } 
        } 
    } 
}
