/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7689
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
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)32767)))) ^ (33285996544LL)))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) ((((/* implicit */int) (short)-6107)) >= (((/* implicit */int) (short)-32753)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) var_11)), (var_12)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) ((_Bool) (signed char)-1));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) (+(1854754223728487688LL)))) ? (0) : (((/* implicit */int) ((signed char) (+(arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (+(((/* implicit */int) (signed char)109))));
                                arr_14 [5] [5] [i_2] [9ULL] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((-509650520) != (((/* implicit */int) (short)32767)))));
                                arr_15 [(signed char)7] [(signed char)7] [i_2] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 509650520)) ? (var_7) : (arr_1 [i_4 + 2])))) ? (((arr_6 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)13] [i_1] [i_2] [i_3 + 2] [i_4 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_0 [i_3 - 1]) - (arr_0 [i_3 + 1])))) <= (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_2]) : (arr_1 [i_1 + 1])))));
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4 + 2] [i_4] [8] = ((/* implicit */unsigned char) (unsigned short)57389);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((signed char) (~(509650520))));
                            var_23 = ((/* implicit */int) (short)-32767);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) (!(arr_8 [i_5])))) : (((((/* implicit */_Bool) (short)744)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_2] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (-(468690075)))))));
                            var_25 = ((/* implicit */_Bool) (unsigned char)0);
                            var_26 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-744)) ? (((/* implicit */unsigned long long int) -2132917046)) : (4590591358391468934ULL)))));
                        }
                        arr_28 [i_1] = (((+(arr_2 [i_1 + 1] [i_1 + 1]))) - (((arr_2 [i_1 - 1] [i_1 + 1]) / (((/* implicit */int) (short)32767)))));
                        arr_29 [i_1] = ((/* implicit */signed char) var_2);
                        arr_30 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */long long int) (unsigned short)45844);
                    }
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_26 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))), ((((+(((/* implicit */int) (short)-32767)))) ^ (((-969410253) % (((/* implicit */int) (short)744))))))));
                        arr_33 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 1752408835)) ? (((/* implicit */int) (signed char)-106)) : (arr_2 [i_1 + 1] [i_1 - 1])));
                        var_28 = ((/* implicit */short) (-(((/* implicit */int) (short)-15000))));
                        arr_34 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned short)57389))))) ? (-1229517389) : (-1960403831)));
                        arr_35 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (509650505)))) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((int) var_9)))))));
                    }
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL))))))))));
                }
            } 
        } 
    }
}
