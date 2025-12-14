/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69633
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_10)) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2] [i_1]))) : ((-(var_2)))))) ? ((~((-(((/* implicit */int) var_8)))))) : ((+(((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))));
            var_14 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) arr_2 [i_1 - 1])))) : ((+(((/* implicit */int) arr_4 [i_1]))))));
        }
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) /* same iter space */
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_4)) : (var_6)))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)150))))));
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_4 [i_0]))))))) : ((((_Bool)1) ? (18030165603765275163ULL) : (((/* implicit */unsigned long long int) 877888781))))));
        }
        for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            var_16 += ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_4 [i_3 + 2]))))));
            arr_12 [i_0] [i_3 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_3])) ? (((/* implicit */int) (unsigned char)254)) : (arr_10 [i_3 - 1] [i_3 + 1])))) ? (((((/* implicit */_Bool) 3551794925U)) ? (((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3 + 2] [i_3 + 1])))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) (_Bool)1)))));
            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((var_7) ? (((/* implicit */int) var_4)) : (var_12)))))) ? (((((/* implicit */_Bool) (+(arr_7 [i_3 - 1])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (arr_10 [i_0] [i_3 + 1]))) : (((/* implicit */int) (!(var_4)))))) : (((((/* implicit */_Bool) (~(906361004)))) ? (var_3) : (var_6))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7031760604378171433ULL)) ? (((/* implicit */unsigned long long int) 906361004)) : (7031760604378171426ULL)));
            arr_13 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 4194303)) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3])) : (416578469944276453ULL)))))));
        }
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9)))) ? (var_0) : ((+(((/* implicit */int) var_7))))));
}
