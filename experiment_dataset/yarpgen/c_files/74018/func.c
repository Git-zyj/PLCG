/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74018
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) 1478288356744861265ULL);
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0]))) == (arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)10]))) + (6421071591487712360ULL))) <= (((/* implicit */unsigned long long int) max((arr_4 [i_1]), (arr_4 [i_1]))))))))));
            var_21 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) -145391822)), (((max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [(short)12])), (2521371168782341672ULL))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) & (6078753910843370637ULL)))))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 6078753910843370637ULL))));
            var_23 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
        }
        for (int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            arr_13 [(signed char)11] [(signed char)11] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 1] [i_4 - 2])))));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_16), (((/* implicit */unsigned short) (signed char)-9)))), (((/* implicit */unsigned short) ((signed char) 6229043140971525754ULL)))))) ? (((((/* implicit */_Bool) ((var_1) ? (6078753910843370637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */_Bool) 684158484U)) ? (-3902056020894459350LL) : (((/* implicit */long long int) 3515991679U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_2) : (((/* implicit */long long int) max((787215731U), (((/* implicit */unsigned int) 145391835)))))))));
            var_24 += ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_6 [i_4 + 1] [20ULL])), (arr_5 [i_1] [i_4 - 2]))) ^ (((/* implicit */long long int) (+(-1824949628))))));
        }
        arr_15 [i_1] = ((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_1]);
        arr_16 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1]);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_10 [i_1] [i_1])) - (4006863781115315545LL)));
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_1]))))))));
    }
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1386260930091931457ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2614480250262372085LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1211640147)) == (var_7))))) : (((unsigned int) (short)28160))))))));
}
