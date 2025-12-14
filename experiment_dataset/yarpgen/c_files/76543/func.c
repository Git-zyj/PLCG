/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76543
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
    var_19 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (unsigned char)123);
        var_21 = ((/* implicit */unsigned short) min((((int) arr_1 [i_0 - 2])), (((/* implicit */int) (!(((/* implicit */_Bool) 12084576076817789377ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)6]))) == (arr_4 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (var_17))))))));
        var_22 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(var_17))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))), (((/* implicit */long long int) arr_3 [i_1] [(unsigned short)8]))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_11 [17U] = (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_6] [(unsigned short)11] [1ULL] [i_2] = (+(((((((/* implicit */_Bool) -1430698494)) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [(unsigned char)16] [i_4]))))) + (((/* implicit */unsigned long long int) 285557348U)))));
                            arr_21 [i_6] [i_3] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)4))))), (min((((/* implicit */unsigned int) (unsigned char)120)), (arr_18 [i_6] [i_2] [i_5] [i_6] [i_4] [(short)0] [i_2])))))));
                            var_24 = ((((unsigned long long int) max((-7321248601435528934LL), (-4005322748742366349LL)))) | (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5 - 2] [i_5 - 2])) ? (arr_7 [i_5 + 1]) : (((/* implicit */unsigned long long int) 4077394011U)))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) 12135501479174632646ULL))));
                        }
                    } 
                } 
            } 
            arr_23 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(arr_15 [6] [6] [i_2] [i_2]))))))));
            arr_24 [i_2] = ((/* implicit */unsigned int) arr_14 [15LL] [i_3] [15LL]);
            arr_25 [i_2] = ((/* implicit */unsigned char) (-(((((-7711329957086165279LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28190))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        }
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_7 = 4; i_7 < 15; i_7 += 1) 
    {
        arr_29 [(unsigned char)11] [i_7 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_26 [i_7])) && (((/* implicit */_Bool) arr_26 [i_7 - 2])))) || (((/* implicit */_Bool) arr_28 [i_7 + 4]))));
        arr_30 [i_7] = ((/* implicit */unsigned short) arr_28 [i_7]);
        arr_31 [i_7] [i_7] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) -6267526910984595967LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)28190)))) % (((/* implicit */int) (_Bool)1)))) << (((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_7 + 1]))))), (max((var_14), (((/* implicit */unsigned long long int) var_0)))))) - (13501872497752396934ULL)))));
        arr_32 [i_7] [i_7 - 3] = arr_28 [i_7 + 3];
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)60))))), (var_10))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)195))))))))));
    var_27 = ((/* implicit */unsigned int) var_5);
}
