/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57138
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6536)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_7))))) % (var_0)))));
    var_14 = ((/* implicit */signed char) (unsigned short)6536);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)6529);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3 + 1])) ? (((/* implicit */int) arr_11 [7LL] [i_2] [(unsigned char)11] [i_0])) : (((/* implicit */int) (unsigned short)6541))))) ? (((/* implicit */int) ((arr_0 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [8U])))))) : ((-(((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)5]))))))) || (arr_1 [i_2])));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)50610)), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_0] [(signed char)7] [i_3 + 2] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0] [0U])) - (43063)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [5ULL] [(unsigned char)5] [i_2])) ? (((/* implicit */long long int) arr_4 [i_2])) : (arr_5 [i_2])))) : (arr_0 [i_2] [i_1]))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((min((arr_0 [(signed char)12] [(signed char)12]), (((/* implicit */unsigned long long int) (unsigned short)6515)))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6510)) % (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)12] [i_0] [i_0] [i_0]))))))) - (((/* implicit */unsigned long long int) max((max((4096515864U), (((/* implicit */unsigned int) arr_9 [i_0] [(short)2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)240)) << (((((/* implicit */int) (signed char)47)) - (38))))))))))))));
    }
    for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [5ULL] [i_4 + 1] [2U])) << (((((/* implicit */int) arr_13 [(_Bool)1])) - (14602))))) != (((/* implicit */int) (unsigned short)6529))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4])) || (((/* implicit */_Bool) (+(4294967295U))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_1 [i_4 + 2]))));
    }
    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((max((63), (((/* implicit */int) (signed char)120)))) + (((/* implicit */int) (unsigned char)223)))))))));
        arr_19 [22ULL] [(signed char)2] = min((((((/* implicit */_Bool) 8217353470791490396ULL)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (unsigned short)6517)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) : (arr_18 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5]))))) : (((/* implicit */int) arr_17 [i_5 + 1])))));
        arr_20 [i_5] = ((/* implicit */signed char) -1503257510);
    }
}
