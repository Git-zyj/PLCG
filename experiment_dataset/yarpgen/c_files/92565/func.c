/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92565
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_2 [i_0]))) : (arr_2 [1U])));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483644)) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)121)))) : ((-(((/* implicit */int) var_1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (18446744073709551603ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))) : (((/* implicit */int) ((arr_2 [i_1]) != (((/* implicit */long long int) -466176170)))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)121))) : (-3151303012106568556LL)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) arr_9 [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_15 -= ((/* implicit */signed char) max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((var_6) >= (((/* implicit */int) arr_13 [(unsigned short)8])))))));
        var_16 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_3])), (var_9)))), ((-(((/* implicit */int) arr_12 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_4] [i_3])))), (((/* implicit */unsigned long long int) (signed char)127))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14747))) : (max((max((((/* implicit */long long int) arr_13 [i_3])), (-3151303012106568556LL))), (((/* implicit */long long int) var_10))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-3151303012106568556LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [(unsigned short)12])) * (((/* implicit */int) var_4))))) : (min((3151303012106568555LL), (((/* implicit */long long int) arr_15 [i_4]))))))) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_16 [i_4] [i_4] [i_4 + 1] [i_5])))) : ((~(-466176170))))))));
                }
            } 
        } 
        var_18 += ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)24), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */int) ((_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (signed char)-122))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_5))))) ? (((((((/* implicit */_Bool) (signed char)127)) ? (4194303) : (((/* implicit */int) (signed char)-39)))) / (((/* implicit */int) (unsigned short)31081)))) : ((+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8))))))));
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
