/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88581
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
    var_18 = ((/* implicit */int) (-(var_3)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_19 = var_11;
        var_20 = (-(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? ((+(1882650295772678377LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)52))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */long long int) var_10)) : (((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) arr_1 [i_0] [i_0 + 1])))))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((-2041737744358529365LL) > (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-52)), (arr_2 [i_0] [i_1] [i_1])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (3553053967U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))), (516665088U)))), ((~(((long long int) (short)15))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_3 [i_0 + 1] [(short)2]), (arr_4 [(_Bool)1])))))))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_10 [i_2] [i_0 - 1] [i_0 + 1] = ((/* implicit */short) ((_Bool) 504403158265495552LL));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (+(((long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (-1622092235) : (((/* implicit */int) (_Bool)1)))))));
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0] [i_0 + 1]) : (-1))))));
                        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_13 [i_2])), (((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_8 [i_0 - 1])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 4026531840U))));
                        var_27 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_5] [i_6] [i_6])) || (arr_4 [10U]))) ? ((+(var_1))) : (((/* implicit */int) var_8))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) (~(7720919965912975349LL)));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */long long int) (-(4294967295U)))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_7))))) ? (arr_16 [i_8] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_0 - 1]))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                var_30 = ((/* implicit */signed char) (short)-4);
                var_31 = min((9223372036854775807LL), (((/* implicit */long long int) arr_25 [i_8] [i_0])));
            }
        }
    }
}
