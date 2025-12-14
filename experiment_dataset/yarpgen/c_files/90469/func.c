/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90469
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
    var_12 = ((/* implicit */_Bool) var_11);
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_11))));
    var_14 = ((/* implicit */signed char) 9223372036854775807LL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)192))))) ? (((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [(unsigned char)2])))) / (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) 7U)) : (-2769977377772817543LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (arr_3 [0U]))))))));
            var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)144)) ? (((((/* implicit */_Bool) 1376194292155380743LL)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_1 [i_0] [i_1]))));
            arr_6 [i_0] [3LL] [8LL] = ((/* implicit */unsigned char) 1376194292155380764LL);
            arr_7 [(_Bool)1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_9))))) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -7440576043850715184LL)) || (((/* implicit */_Bool) var_2)))))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((long long int) 3222121099549322651LL)), (((/* implicit */long long int) 3757782941U))));
        var_16 = ((/* implicit */signed char) min((max((min((((/* implicit */long long int) (unsigned short)24576)), (var_10))), ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : ((-9223372036854775807LL - 1LL)))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) var_1))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_0] = min((var_8), (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)43906))))) % (arr_3 [i_2]))));
                    arr_14 [i_0] [(signed char)9] [i_0] [(unsigned short)4] = ((/* implicit */signed char) (-(0U)));
                }
            } 
        } 
    }
}
