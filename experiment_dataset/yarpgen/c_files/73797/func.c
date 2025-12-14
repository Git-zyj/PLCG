/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73797
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) ((unsigned char) var_9));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((unsigned short) 2559367364248248032LL));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) / (100663296U)));
                        }
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_5 [(unsigned short)12] [i_1] [(short)10]), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 476127197U))))))) ? (min((arr_3 [i_2 + 1]), (3818840097U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_3 - 4] [i_0 - 1] [i_2 + 1] [i_2 + 1])))))));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (var_6))))) > (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_5 [i_1] [i_1] [(short)3]))))) ? (min((((/* implicit */int) (unsigned short)6897)), (((int) 476127197U)))) : (((/* implicit */int) max((arr_10 [(signed char)1] [i_1] [i_1] [i_2] [i_2 - 1] [i_2] [i_3 - 3]), (min((((/* implicit */unsigned char) var_2)), (var_5))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)8] [i_0])) ? ((-(((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2725498417U)) ? (((/* implicit */int) arr_10 [2LL] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [4ULL]))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned char)10])) : (((/* implicit */int) max(((unsigned short)832), (((/* implicit */unsigned short) (unsigned char)10)))))))));
    }
    var_20 = ((/* implicit */signed char) var_8);
    var_21 = ((/* implicit */long long int) var_7);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_13)) + (((/* implicit */int) var_8)))), (max((-2026171152), (((/* implicit */int) (signed char)112))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
}
