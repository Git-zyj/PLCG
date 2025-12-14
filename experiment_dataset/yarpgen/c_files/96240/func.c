/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96240
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
    var_18 = max((((((/* implicit */_Bool) max((((/* implicit */long long int) 4167025426U)), (224198223239951785LL)))) ? (((/* implicit */long long int) 3034896801U)) : (5395819550092231930LL))), (((/* implicit */long long int) var_9)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [(_Bool)1] [(short)12] [(_Bool)1] [i_3]);
                        arr_12 [i_0] [(short)14] [(unsigned short)6] [(unsigned short)8] [i_3] |= ((/* implicit */_Bool) (~(((/* implicit */int) (short)26078))));
                        arr_13 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [(_Bool)1] &= ((((/* implicit */_Bool) (-(310791097U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0))))) : (var_10));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        arr_14 [i_0] [(short)3] &= ((/* implicit */short) max((((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) | (((((/* implicit */_Bool) 65516489U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned int) arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 1])), (max((((/* implicit */unsigned int) (short)-7934)), (3541733319U)))))));
        arr_15 [i_0] [(unsigned short)6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [0U] [(short)8]))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        arr_28 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (780852579U) : (1149357850U)))) ? (((/* implicit */int) max((arr_20 [i_6] [i_7]), (arr_17 [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? ((~((~(((/* implicit */int) arr_20 [i_5] [i_7])))))) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_29 [i_6] = ((((/* implicit */_Bool) 562881233944576LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37564))) : (2828906183U));
                        arr_30 [i_5] [4U] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((var_4) % (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned short)0)))))))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */unsigned int) (((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)252))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4739)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 71172142U)))))) : (((2177483378U) >> (((562881233944587LL) - (562881233944578LL))))))))));
        arr_31 [i_4] [i_4] |= ((/* implicit */_Bool) min((min((18U), (4294967291U))), ((-(0U)))));
    }
}
