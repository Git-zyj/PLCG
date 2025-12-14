/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/796
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
    var_10 = ((/* implicit */signed char) (-(var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [11LL] = ((/* implicit */long long int) (-(var_8)));
        var_11 = (-(17205863843578763580ULL));
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) 1671826292))))) & (((1032338894) % (((/* implicit */int) arr_0 [i_0])))))) - (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_9))))))));
        var_12 = ((/* implicit */short) (-((~(((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [6ULL]))) - ((-9223372036854775807LL - 1LL)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [(unsigned short)7])) : (((/* implicit */int) arr_0 [(short)1]))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) 1671826292)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned char)26)))) == ((+(-1032338906)))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                arr_13 [i_1] [i_3] [(signed char)4] [i_2] = arr_5 [i_1];
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19622))) & (arr_7 [i_1] [i_1] [(unsigned short)6])))) || ((((_Bool)1) || (((/* implicit */_Bool) 6370160855293737744LL))))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_16 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_4]))) % (var_1)));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59320)) && (((/* implicit */_Bool) 4227025165U))));
            }
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                arr_18 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_1 [i_5])) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_1] [i_2])) + (151))) - (25))))) / (((/* implicit */int) arr_9 [i_1] [(short)14]))));
                arr_19 [i_1] [10U] [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1671826293))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [(short)11] [(short)11])) || (((/* implicit */_Bool) 4317216289399825066ULL)))))));
            }
            var_18 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)9)) | (((/* implicit */int) arr_9 [13LL] [(unsigned short)13]))))));
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            arr_23 [i_1] = arr_21 [4LL] [4LL] [(_Bool)0];
            var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [8] [i_1] [i_1]))) % (arr_16 [(short)1] [i_1] [i_1] [i_1])));
        }
    }
    var_20 |= ((/* implicit */unsigned int) var_3);
    var_21 = ((/* implicit */long long int) var_3);
    var_22 = ((/* implicit */unsigned short) var_5);
}
