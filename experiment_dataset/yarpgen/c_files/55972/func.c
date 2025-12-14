/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55972
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */unsigned short) (signed char)-125);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-1008238055), (((/* implicit */int) (unsigned char)63))))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_2])))) : ((~(((/* implicit */int) (signed char)-125))))))), (min((min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_0])), (arr_6 [i_0 - 1] [(_Bool)1] [(signed char)6]))), (((/* implicit */unsigned int) ((unsigned short) var_14)))))));
                        var_21 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)193))));
                        arr_11 [(short)17] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */unsigned int) var_16)) : (var_17)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)189)) >= (((/* implicit */int) arr_1 [i_1])))))));
                        var_22 *= max(((((!(((/* implicit */_Bool) (signed char)121)))) ? (((/* implicit */int) min((arr_2 [10ULL] [10ULL]), (var_1)))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])))), (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [18LL] [18LL])) : (((/* implicit */int) arr_3 [i_0] [17] [i_2])))));
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (349585372U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-125)))))));
                        var_24 = ((/* implicit */long long int) ((var_4) == (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */int) var_11)))), (((((/* implicit */int) arr_4 [(unsigned short)13] [i_0])) & (1686366243))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) var_7);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) ((4272655552U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            arr_24 [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (var_4)));
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) -1457764553)) ? (3945381923U) : (349585372U)));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_18 [(_Bool)1] [i_1] [i_0] [(short)12] [i_2] [(_Bool)1]))));
                        }
                        var_28 = ((/* implicit */unsigned char) arr_15 [1U] [i_1] [i_0] [i_2] [1U]);
                        arr_25 [10ULL] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
                        var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)131)), (3U)));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (1194650167U) : (2669210376U)))) ? (((((/* implicit */_Bool) -1457764564)) ? (70368744177663ULL) : (((/* implicit */unsigned long long int) 599053205U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
}
