/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95165
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
    var_13 = ((((-5891145664614440676LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)37031)) - (37031))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) 3302654304958484181LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))), (((((2045054790664534071LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_0)))) ? (((/* implicit */int) (unsigned short)27859)) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!((_Bool)0)));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (min((arr_4 [(unsigned short)14] [(unsigned short)8]), (((/* implicit */long long int) arr_5 [i_1]))))))) ? (((var_5) ? (((/* implicit */int) arr_6 [i_1 - 4])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)1))));
        var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2044))))) == (max((arr_4 [i_1] [i_1 - 2]), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2251662374731776LL)))))) : ((((_Bool)1) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (5891145664614440675LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        arr_8 [(unsigned short)5] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_1 [i_1 + 3]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8206))) : (0LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 - 3])) & (((/* implicit */int) arr_6 [i_1 - 1])))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_20 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)57337))) % ((~(((/* implicit */int) arr_6 [i_1]))))));
                        arr_21 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) arr_10 [i_2]);
                    }
                } 
            } 
            arr_22 [i_1] = ((/* implicit */_Bool) ((long long int) ((unsigned short) 8822727582586346215LL)));
            var_19 = ((((/* implicit */_Bool) (unsigned short)9025)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_18 [i_1] [i_1] [10LL] [i_1]), (var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)65509)))) : (((/* implicit */int) (unsigned short)57337))))) : (((((/* implicit */_Bool) min(((unsigned short)27490), (arr_18 [i_1] [i_1] [i_1 - 3] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 3] [i_1 + 2] [i_1]))) : (((long long int) (_Bool)0)))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39725)) ? (((/* implicit */int) (unsigned short)46125)) : (((/* implicit */int) (unsigned short)23428))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
        var_21 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [(unsigned short)3] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)22] [(unsigned short)9]))))))), (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)34867)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_19 [i_1] [i_1] [i_1 + 2] [i_1] [4LL]), (var_4)))))))));
    }
}
