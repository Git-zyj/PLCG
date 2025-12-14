/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86140
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
    var_10 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_2))))) ? (min((18060868990081108904ULL), (((/* implicit */unsigned long long int) (signed char)17)))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */int) (unsigned short)27639))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-1), (var_7))))) : (min((((/* implicit */long long int) var_0)), (9223372036854775807LL))))) : (((/* implicit */long long int) ((max((((/* implicit */int) (unsigned short)65151)), (var_1))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (short)-8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))) + (((((/* implicit */_Bool) (short)2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) & (((/* implicit */int) (unsigned short)15857))))) ? (((((/* implicit */unsigned int) var_9)) ^ (3654523451U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_1)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) (unsigned short)3))))) || (((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_12 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)40132)) : (((/* implicit */int) (short)32761)))) < (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_3]) : (arr_5 [i_2])))));
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65534)) / (var_1))) * (((((/* implicit */int) arr_11 [i_3] [i_1] [i_3])) / (((/* implicit */int) (short)7))))));
            }
            var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned int) arr_5 [i_2 + 3]))))) ? (((((/* implicit */_Bool) 1509774896)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2]))) : (arr_6 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)3)))))));
        }
        var_15 = ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_9 [i_1] [i_1] [3U]))))), (((((/* implicit */_Bool) (short)11560)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_5 [i_1])))))), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1])), (-6263044431465271912LL))) == (max((-1403934803120361718LL), (((/* implicit */long long int) arr_6 [(short)1])))))))));
        var_16 = ((/* implicit */unsigned short) max((max((max((var_8), (((/* implicit */unsigned int) (unsigned short)4)))), (((/* implicit */unsigned int) max((-1392542101), (arr_10 [i_1] [i_1] [i_1])))))), (min((max((((/* implicit */unsigned int) arr_8 [i_1] [i_1])), (var_8))), (max((3329579685U), (arr_6 [i_1])))))));
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_2), (arr_7 [i_1] [i_1])))) ? (((((/* implicit */_Bool) 1977592661)) ? (-7398670918838141907LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16533))))) : (((/* implicit */long long int) max((1392542126), (((/* implicit */int) (signed char)120))))))), (((((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((arr_10 [i_1] [i_1] [i_1]) / (arr_10 [i_1] [i_1] [6ULL])))) : (((arr_12 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (-9223372036854775800LL)))))));
        var_18 -= ((/* implicit */unsigned short) min((max((((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) arr_12 [i_1] [i_1] [i_1] [i_1]))))), (min((var_4), (((/* implicit */int) arr_8 [i_1] [i_1])))))), (min((((arr_5 [i_1]) & (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)27))))))));
    }
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) min((max((var_4), (((/* implicit */int) var_7)))), (min((var_9), (var_1)))))) ? (((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_7))))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : (max((((((/* implicit */int) (unsigned short)63528)) / (1438902670))), (max((((/* implicit */int) var_0)), (var_1)))))))));
}
