/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9213
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * ((-(((((/* implicit */_Bool) 5163043847010308040LL)) ? (1301591421) : (var_2)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) & (arr_6 [(short)0] [(short)0]))), (max((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (16363646262150862442ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_17 ^= ((/* implicit */long long int) ((min((arr_5 [i_0 + 2] [i_0 + 3] [i_2 + 1] [i_2 + 1]), (arr_5 [i_0 + 1] [i_0 + 2] [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */unsigned int) ((int) arr_5 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) 1369653776U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 3] [i_0 - 1] [i_2 + 1] [i_2 + 1])))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (~(((max((2083097811558689174ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -3)) | (2925313522U))))))));
                        var_18 = ((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) & (((18446744073709551613ULL) - (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_4] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) (unsigned short)32729)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) min((2083097811558689163ULL), (((/* implicit */unsigned long long int) 2925313516U))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (~(-21)))))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((min((min((arr_8 [i_5] [i_2] [i_0 - 1] [i_0 - 1] [(short)1]), (((/* implicit */short) (signed char)40)))), (arr_12 [i_5] [i_2 + 1] [i_5]))), (((/* implicit */short) ((((/* implicit */_Bool) 1656106854)) && ((_Bool)1)))))))));
                        var_20 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_1 [i_2])))))) ? (((((/* implicit */_Bool) ((-1656106849) ^ (-1301591449)))) ? (((/* implicit */unsigned long long int) min((1656106849), (((/* implicit */int) arr_0 [i_1]))))) : (var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_5])) ? (var_11) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 + 1] [i_5]))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_2 + 1]))))));
                        var_21 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)7)))) ^ (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_0] [i_2 + 1] [i_5])), (arr_16 [i_0] [i_0] [i_1] [i_5])))) - (169)))))))) : (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)7)))) ^ (((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_0] [i_2 + 1] [i_5])), (arr_16 [i_0] [i_0] [i_1] [i_5])))) - (169))) - (7890))))))));
                        var_22 *= ((/* implicit */long long int) ((_Bool) min((arr_7 [i_2 + 1] [i_0 + 1] [i_0]), (arr_7 [i_2 + 1] [i_0 + 1] [i_0]))));
                        var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_0 + 3] [i_5] [i_2 + 1] [i_2 + 1]), (arr_16 [i_0 - 1] [i_5] [i_2 + 1] [i_2 + 1])))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_5] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_5] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_16 [i_0 + 1] [i_5] [i_2 + 1] [i_2 + 1])))))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) min((((unsigned long long int) arr_7 [i_2] [i_2 + 1] [i_2 + 1])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_6] [i_1])))))));
                        var_25 -= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32729)) && (((/* implicit */_Bool) 30)))))) > (1137859398298930502LL));
                    }
                    arr_21 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1]))) ? ((~(arr_6 [i_0] [i_2 + 1]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (1922661625) : (((/* implicit */int) var_8))))) > (0U))));
}
