/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91028
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (_Bool)1)), (5786891867951754339LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */long long int) var_5);
    }
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((unsigned char) 436480230516096132ULL)))));
    var_13 |= ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */int) var_8)) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_7 [i_1] = var_5;
        var_14 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [9U] [i_3] [i_2] = ((((((/* implicit */int) arr_9 [i_2] [i_2])) < (((/* implicit */int) arr_9 [i_2 - 2] [i_3])))) ? (((/* implicit */int) ((_Bool) arr_9 [i_2 + 2] [i_3]))) : (((/* implicit */int) arr_9 [i_2] [i_3])));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_9 [i_3] [i_2]))) ? ((-(((/* implicit */int) (unsigned short)52083)))) : (((/* implicit */int) (signed char)-45))));
        }
        arr_14 [i_2] = ((/* implicit */unsigned long long int) var_2);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_18 [i_4 + 3] [(_Bool)0] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((/* implicit */int) arr_17 [i_4 + 1]))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)186)))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_9 [i_4] [i_4 + 3])))))))));
    }
}
