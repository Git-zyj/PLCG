/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74957
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [9ULL] &= ((/* implicit */short) (+(arr_0 [2])));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) & (6860265365169791866ULL)))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [2ULL])))) : ((~(18446744073709551603ULL)))));
            arr_7 [i_0] = arr_5 [i_0] [i_1] [i_1];
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)65)) | (((/* implicit */int) var_3))))) : (((unsigned int) arr_5 [i_0] [i_0] [6ULL])))))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) var_17);
            arr_10 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11586478708539759749ULL)) ? (arr_1 [2LL] [2LL]) : (-9223372036854775803LL))))));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)6063)) << (((6860265365169791868ULL) - (6860265365169791850ULL)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_14 [i_2] [(signed char)5] [i_3] = ((/* implicit */signed char) (+(arr_13 [i_2])));
                arr_15 [i_2] [(unsigned short)10] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((16977614949106026807ULL) - (16977614949106026795ULL)))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) arr_0 [i_3]))));
                arr_16 [i_0] [(unsigned char)8] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(6611697633289581832LL)))) - (arr_3 [i_0] [i_0] [i_3])));
                var_20 = ((/* implicit */unsigned int) ((unsigned long long int) 4648138787770644215LL));
            }
        }
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (short)15932)))))))));
    }
    var_22 = ((/* implicit */short) var_14);
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((var_15), (6611697633289581832LL))))));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((9073667568419820190ULL) > (((/* implicit */unsigned long long int) 930290586U)))))));
}
