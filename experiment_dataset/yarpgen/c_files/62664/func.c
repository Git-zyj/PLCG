/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62664
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)255))))) : ((~(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (~(var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)28326)) & (((/* implicit */int) (unsigned short)37209))))) : ((~(-5557358201791535445LL))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)244)) << (((((/* implicit */int) var_8)) - (28803)))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (-5557358201791535445LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        arr_3 [(signed char)15] |= ((arr_1 [i_0]) + (((/* implicit */long long int) 1313250543)));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_1 [i_0]) + (4158564566140036277LL))))))));
        var_22 = (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (arr_5 [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29280)))))) && (((/* implicit */_Bool) (~(3498258489U)))))))));
        var_24 = ((/* implicit */int) ((((-8541240656173463304LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)149)) - (149)))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (((long long int) 1313250543)))))));
            var_27 = ((/* implicit */long long int) (+((-(-70486170)))));
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)103)) >> (((arr_5 [i_2] [i_2]) - (17779469895334628327ULL))))) << (((arr_6 [i_2] [i_3]) + (7107077125575357754LL)))));
            arr_15 [6U] [6U] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned short)65517)) : (1101760372)));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8769))) : (arr_8 [i_2])))));
            var_29 = ((/* implicit */unsigned short) ((arr_1 [i_2]) / (((/* implicit */long long int) var_2))));
            var_30 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)18160))) <= (arr_1 [i_2])));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((arr_7 [i_2] [i_4]) ? (arr_5 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_4]))))))));
        }
        var_32 = (~(arr_10 [i_2] [i_2] [i_2]));
        arr_18 [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_18))) ? (-2170396817461510435LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))));
    }
}
