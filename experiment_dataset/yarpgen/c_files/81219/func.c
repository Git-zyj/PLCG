/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81219
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) var_7);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        arr_8 [i_0 + 3] [(unsigned char)7] [i_0] [i_3] = ((/* implicit */unsigned char) min((var_4), (((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) % (-2147483617))) >= (((/* implicit */int) min((((/* implicit */short) var_12)), ((short)21252)))))))));
                        var_21 = ((/* implicit */unsigned short) ((14264955625576929624ULL) * (((/* implicit */unsigned long long int) 4294967295U))));
                        var_22 = (i_0 % 2 == 0) ? (((/* implicit */short) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(short)3] [i_1])) >> (((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])) ^ (var_13))) - (18217458409409440483ULL))))))))) : (((/* implicit */short) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(short)3] [i_1])) >> (((((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])) ^ (var_13))) - (18217458409409440483ULL))) - (1727129869ULL)))))))));
                        arr_9 [i_0] [i_0] [(short)13] [i_3] = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned long long int) var_0))));
                        arr_10 [i_0] [i_0] [i_0] [11] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) var_17)))))))), (var_14)));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned short)53546))));
        arr_11 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 3271115348U)), (var_10)));
    }
    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_24 |= ((((/* implicit */unsigned int) 855269641)) * (1080573268U));
            var_25 = ((/* implicit */unsigned char) 3214394028U);
            var_26 |= ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4])) | (((/* implicit */int) arr_12 [i_4]))))), (max((((/* implicit */unsigned int) arr_13 [i_4] [i_5])), (var_19)))))) ^ (min((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) & (-1LL))), (((/* implicit */long long int) ((((/* implicit */long long int) 3284932694U)) > (7171939038419482156LL))))))));
        }
        var_27 = arr_12 [i_4];
    }
    var_28 = ((/* implicit */short) var_1);
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (short)-32751))));
    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4LL))))), (var_10))))));
    var_31 = var_18;
}
