/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82749
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
    var_20 = ((/* implicit */unsigned long long int) 2010406526);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-118)) == (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) 3168629566U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))) : (3168629566U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */int) (unsigned char)93)), (-624016569))) >= (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) -613628743082114918LL)) ? (((/* implicit */unsigned long long int) 1126337730U)) : (11773950864679798513ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((96U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))), (min((((/* implicit */int) arr_6 [i_0 - 1])), (-35329038)))))))))));
                        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (3168629579U) : (((/* implicit */unsigned int) 917397660))))) ? (((/* implicit */int) arr_2 [i_3 - 3] [i_0])) : (((/* implicit */int) ((11773950864679798499ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))))))), (((arr_7 [i_2 + 1] [i_2 - 1]) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))) * (11773950864679798513ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) - (max((3168629566U), (4294967190U)))));
                            var_25 = ((/* implicit */unsigned long long int) arr_10 [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned int) arr_9 [1LL] [i_1] [(_Bool)1] [(_Bool)1] [i_5])))));
                            var_27 &= ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) 3086371397U)) + (8617835642155638200ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18762))) * (4294967199U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((96U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) (unsigned char)103)))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [(short)10] [i_1])))))))));
                        }
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 3168629606U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3148))) : (6701423757572360200LL)))))));
                        var_29 = ((/* implicit */long long int) (-(max((91U), (3168629574U)))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned int) max((var_30), (3168629573U)));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)18762))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)8])) ? (1208595890U) : (arr_10 [(unsigned char)8]))))));
        var_33 ^= ((/* implicit */short) ((unsigned long long int) arr_11 [i_6]));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_34 = arr_19 [i_7] [i_7];
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_18 [i_7]))));
    }
}
