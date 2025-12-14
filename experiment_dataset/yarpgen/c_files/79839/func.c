/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79839
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
    var_14 = ((/* implicit */int) var_12);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_4))))))) || ((((~(((/* implicit */int) var_4)))) == (((((/* implicit */_Bool) 2709577122U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))) % (((/* implicit */long long int) ((/* implicit */int) (!(((535509943609105597ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20541)))))))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0 - 3] [i_0 - 3]) == (arr_5 [i_0] [i_1]))))) == (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1])) ? (arr_5 [i_0 + 2] [i_0 - 2]) : (arr_5 [i_0 - 3] [i_0 - 3])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_1]) : (arr_3 [i_0 - 1]))) : ((+(arr_3 [i_2 - 1]))))))));
                    var_19 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)0))))));
                    arr_9 [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)42245)) : (((/* implicit */int) (signed char)59))))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 3])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) min((arr_8 [i_0 + 3]), (((/* implicit */short) (signed char)-26)))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)5461))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -601848691)) ? (var_11) : (15677943062973179722ULL))))))))));
}
