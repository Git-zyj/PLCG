/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95947
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))));
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_1 [i_0]) >> (((arr_2 [0U] [3LL]) - (14801843572832940562ULL)))))), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((min((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0] [i_0]))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))))))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1])) < (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_4 [(unsigned short)0] [17LL]))))))) < ((-(((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_5 [i_1 + 1]))))))));
        var_12 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned char)211)) & (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) arr_5 [i_1 - 1])))) < (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)18])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [(unsigned short)2] [(_Bool)1])))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [(short)2] [(_Bool)1])), (arr_5 [i_1 - 1])))))))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_1 - 1]), ((unsigned char)224)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1]))))) : (((/* implicit */int) min((arr_5 [i_1]), ((unsigned short)28389))))))) ? (((((/* implicit */_Bool) -5119013407884731983LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))) : (2251896401U))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_5 [(short)0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))))))));
    }
    for (long long int i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_5 [i_2 - 1]), (((/* implicit */unsigned short) arr_9 [i_2 + 1]))))) << (((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1])))))) : (min((arr_8 [i_2 + 1]), (3LL)))))));
        var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_7 [i_2 + 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (-1)))))))));
        var_16 = (((!(((/* implicit */_Bool) arr_5 [i_2 - 1])))) ? ((-(((((/* implicit */_Bool) arr_8 [i_2])) ? (1755726372U) : (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_5 [(short)15]))))))))));
    }
    var_17 = ((/* implicit */unsigned int) var_1);
}
