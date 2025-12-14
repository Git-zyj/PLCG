/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62968
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
    var_15 = ((/* implicit */unsigned long long int) max((min((var_12), (((/* implicit */long long int) 2046573395U)))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) != (var_13))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 1])))))) & (((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1]))) : (2046573395U)))));
                        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [(signed char)3] [(signed char)3])) ? (var_1) : (((/* implicit */long long int) arr_10 [i_0] [(unsigned short)7])))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_0 [3] [i_1])) >> (((var_12) + (6228515836515551688LL))))))))), (13780377340180034400ULL)));
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35500))) > (4666366733529517215ULL))) || (((/* implicit */_Bool) min((13780377340180034400ULL), (((/* implicit */unsigned long long int) arr_7 [i_3 - 1] [i_3] [i_3 - 1] [1U])))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_4 [i_0] [i_3 - 1])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) : (5377203974867787003ULL)));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */signed char) arr_13 [i_0]);
                        var_20 = ((/* implicit */unsigned int) arr_13 [i_0]);
                        var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (5296199034562114258ULL)))))), (17592186044415ULL)));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) (-(((arr_10 [i_1] [(unsigned short)0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))));
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446726481523507201ULL)) ? (18446726481523507201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6583))))) < (((min((arr_1 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0])))) * (((/* implicit */unsigned long long int) ((arr_13 [i_0]) / (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [(signed char)6] [i_2] [(unsigned short)5])))))))));
                    }
                    var_24 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                    var_25 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)35488))))) ? (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)224)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                }
            } 
        } 
    } 
}
