/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91965
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
    var_19 = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) min((var_4), (((/* implicit */unsigned long long int) var_5)))))));
    var_20 = ((/* implicit */signed char) ((unsigned int) ((_Bool) 3539165120U)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (var_7))), (((/* implicit */int) arr_3 [i_1 - 1] [12ULL] [i_1]))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_22 = ((/* implicit */long long int) var_16);
                arr_8 [i_1] [i_2] &= ((/* implicit */long long int) min((var_7), (((/* implicit */int) max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
            }
            var_23 = ((/* implicit */long long int) min((((unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_1]))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [6ULL] [i_0])) + (((/* implicit */int) var_8)))))))));
            var_24 = ((10428804979404566765ULL) >> (((/* implicit */int) (_Bool)0)));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_25 += ((/* implicit */signed char) var_5);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_14)))))));
                arr_17 [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_3] [i_4]);
            }
            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3599682862U)));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 = ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_0]);
            var_29 = ((/* implicit */unsigned int) arr_0 [(_Bool)1]);
            var_30 *= ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_31 = ((((_Bool) arr_9 [i_0] [i_0])) ? (min((((/* implicit */unsigned int) (unsigned char)47)), ((-(1352642088U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) var_9)))))));
            arr_22 [i_0] = ((/* implicit */_Bool) max((((long long int) 0)), (((/* implicit */long long int) (_Bool)1))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) (+(695284434U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)34954)))))))));
        var_33 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_14 [i_0])), (arr_10 [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0])))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) min((((/* implicit */long long int) arr_14 [4ULL])), (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_15 [16LL] [16LL] [16LL])) + (((/* implicit */int) (unsigned char)208))))) : (arr_21 [i_7] [i_7]))))))));
        var_35 &= ((/* implicit */unsigned int) 5153668979971045411ULL);
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)255)) - (254)))))) != (min((((/* implicit */unsigned long long int) (unsigned char)53)), (var_15)))))) | (((/* implicit */int) var_1))));
}
