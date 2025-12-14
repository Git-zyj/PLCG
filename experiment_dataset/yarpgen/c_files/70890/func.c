/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70890
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
    var_15 = ((/* implicit */unsigned int) 378643927);
    var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3289))) - (1090921693184ULL)))) ? ((-(var_13))) : (((/* implicit */int) ((_Bool) -345027188))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_17 = 378643927;
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 2]) * (arr_1 [i_0 + 1])))) ? (((/* implicit */int) (signed char)22)) : (arr_2 [i_0 + 1])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) max((((_Bool) 690775395U)), ((_Bool)1)))))))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_1 - 1])))) ? (max((var_14), (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_2])) ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1]))))) : (((((/* implicit */unsigned int) ((-446189445) / (((/* implicit */int) var_2))))) / (var_14)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((505028070U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (arr_3 [i_1 - 2] [i_3])))) : (var_12))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_13)))))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) 25U)) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned char)128)) - (111)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_9 [i_1] [i_1 - 2] [(unsigned char)12])))))))));
            var_23 = ((/* implicit */unsigned int) (!(((arr_0 [9] [i_1 - 2]) != (arr_5 [i_1] [i_3])))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 4; i_4 < 15; i_4 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) var_10);
                    var_25 = ((/* implicit */int) var_0);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [16ULL] [i_1 - 2])) - (var_0)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 4])))))));
                    var_27 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((_Bool) 6261958039695962870ULL)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_15 [i_4 - 3] [i_1 - 2]), (arr_15 [i_4 - 4] [i_1 - 1])))) ? (arr_15 [i_4 + 2] [i_1 - 1]) : (min((arr_15 [i_4 - 3] [i_1 - 2]), (arr_15 [i_4 + 1] [i_1 + 1])))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((short) (~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    arr_20 [(_Bool)0] [(_Bool)0] [i_3] [i_3] [i_3] [i_7] = ((196946627U) << (((arr_2 [i_4]) + (989029998))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_15 [i_1 - 1] [i_1]) : ((~(var_9)))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_5 [i_4] [i_3]))));
                }
                var_32 ^= ((unsigned int) (unsigned char)255);
            }
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(short)16] [(unsigned char)16] [i_1])) / (((var_13) << (((((/* implicit */int) arr_7 [i_1 - 2])) - (17415)))))));
    }
}
