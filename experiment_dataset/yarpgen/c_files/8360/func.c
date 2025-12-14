/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8360
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
    var_13 = ((/* implicit */short) ((_Bool) (-9223372036854775807LL - 1LL)));
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = min(((_Bool)1), ((_Bool)1));
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_0 [i_1 - 1])) << (((((/* implicit */int) ((short) (unsigned char)244))) - (225))))));
            var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_5 [i_0] [i_0])))), (((((/* implicit */int) var_6)) / (((/* implicit */int) var_3))))))), (max((arr_6 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) (unsigned char)49))))));
            var_19 *= (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((unsigned short)7), (((/* implicit */unsigned short) (_Bool)1))))), (3072163171U)))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
                {
                    arr_16 [i_3] = ((/* implicit */_Bool) var_0);
                    arr_17 [i_3] [i_0] [i_3] [i_2] [i_0] [i_3] = ((/* implicit */long long int) (_Bool)0);
                    arr_18 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                }
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    arr_23 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2702416368U))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
                    var_21 = ((/* implicit */unsigned long long int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_24 [i_0] [i_3] [i_0] [i_3 - 1] = ((/* implicit */signed char) (_Bool)1);
            }
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_27 [i_2]))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    arr_30 [i_2] [i_2] [i_7] = ((/* implicit */_Bool) 9223372036854775804LL);
                    var_24 = (((_Bool)1) ? (5697129932041615916ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))));
                }
            }
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-17386))));
            var_26 = ((/* implicit */_Bool) ((short) var_0));
            arr_33 [i_0] = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
            arr_34 [i_0] [i_8] = ((/* implicit */unsigned short) arr_21 [i_0] [i_8 - 1] [i_8 + 2] [i_0]);
        }
    }
}
