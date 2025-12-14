/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91946
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
    var_10 = ((/* implicit */_Bool) max((-1801803613), (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */signed char) min((max((var_3), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)29129)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) (signed char)52))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) * (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) (unsigned char)1))))) ? (((((/* implicit */_Bool) (signed char)-67)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (-1801803597))))))));
        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_5 [(unsigned char)14] = ((/* implicit */long long int) var_2);
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-118))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(var_1)));
        arr_7 [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_19 [6ULL] [i_2] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) 1801803608);
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) min(((~(var_3))), (var_3)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)102)) ? (((min((var_2), (((/* implicit */unsigned int) var_8)))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
                            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */short) (~((~((~(((/* implicit */int) var_5))))))));
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */_Bool) (+((-((~(1801803612)))))));
                            arr_25 [i_2] [i_3] [i_3] [i_3] [i_5] [i_3] = min((((/* implicit */unsigned long long int) (unsigned char)176)), (0ULL));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */_Bool) ((16083856875106717058ULL) & (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_7]))));
                            arr_29 [i_3] [i_3] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)27430);
                        }
                    }
                } 
            } 
            arr_30 [i_3] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_4 [i_3])) ? (var_3) : (-1891374215))) == (((/* implicit */int) min(((short)32761), (((/* implicit */short) (signed char)64))))))) ? (min((((/* implicit */unsigned long long int) 2167631400U)), (16083856875106717056ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)118), (((/* implicit */signed char) var_5))))))));
            var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3] [i_3] [i_2] [(short)6] [10LL] [i_2] [i_2]))) ^ (15347109170727841282ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_3])))))))));
        }
        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((signed char) (+(((int) arr_17 [(unsigned short)4] [i_2] [i_2] [6ULL] [i_8])))));
            var_19 = min(((+(((/* implicit */int) (short)224)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [8ULL] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31132))) : (var_1))))))));
        }
        arr_34 [i_2] = ((/* implicit */int) -6282109008013033620LL);
    }
    var_20 = var_3;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_7))) : (var_3)));
}
