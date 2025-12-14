/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88122
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
    var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_9)) ? (var_15) : (((/* implicit */unsigned long long int) -437903702)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1801342185)) / (18446744073709551602ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52560)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_0))))) : (var_6)))));
    var_18 = ((/* implicit */unsigned char) ((signed char) ((((var_16) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) > (((/* implicit */int) (signed char)127))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_10))))) ? (var_15) : (140187732541440ULL)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967286U)) && ((_Bool)1)))) << (((-2130191270) + (2130191278))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) (signed char)-39);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)13463)) | (((/* implicit */int) (signed char)12))));
                        arr_15 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_0] [i_0]));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((430477072301933499ULL) - (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [(signed char)4]))))) ? (((/* implicit */int) ((signed char) arr_18 [i_0] [i_0] [i_0] [(signed char)5]))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_17 [i_0] [i_0] [i_2]))))));
                        arr_21 [(short)2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-104))));
                        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        var_22 = ((/* implicit */unsigned long long int) ((((18446744073709551606ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6033))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41321)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (1387919768U))))));
                    }
                    arr_22 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)57813)) - (57807)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (arr_18 [i_0] [i_0] [i_2] [i_0]))))) : (((9007198986305536ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38703)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((arr_16 [(unsigned char)3] [i_0] [(unsigned char)3] [i_0]) > (6LL))))));
    }
    var_24 = ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) (short)4832)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((int) (_Bool)1)) <= (((/* implicit */int) ((unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)62)))))))));
}
